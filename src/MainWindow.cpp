#include "MainWindow.h"
#include "ui_MainWindow.h"
#include "FileHandler.h"
#include "MyDialog.h"
#include <QCloseEvent>
#include <QFileDialog>
#include <QFileInfo>
#include <QPrinter>
#include <QPrintDialog>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::MainWindow)
{
	ui->setupUi(this);

	connect(ui->textEdit, &QTextEdit::textChanged, this, [this](){ enableSave(true); });
	connect(ui->actAboutQt, &QAction::triggered, QApplication::aboutQt);
	connect(ui->actExit, &QAction::triggered, QApplication::quit);

	connect(ui->actNew, &QAction::triggered, this, &MainWindow::onNew);
	connect(ui->actOpen, &QAction::triggered, this, &MainWindow::onOpen);
	connect(ui->actSave, &QAction::triggered, this, &MainWindow::onSave);
	connect(ui->actSaveAs, &QAction::triggered, this, &MainWindow::onSaveAs);
	connect(ui->actPrint, &QAction::triggered, this, &MainWindow::onPrint);
	connect(ui->actAbout, &QAction::triggered, this, &MainWindow::onAbout);
}

MainWindow::~MainWindow()
{
	delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)
{
	if (keepChanges())
		event->ignore();
}

void MainWindow::saveFile()
{
	if (FileHandler::saveFile(windowFilePath(), ui->textEdit->toPlainText()))
		enableSave(false);
}

void MainWindow::enableSave(bool enable)
{
	ui->actSave->setEnabled(enable);
	setWindowModified(enable);
}

void MainWindow::updateFilePath(const QString &filePath)
{
	const QString &txt(filePath.isEmpty() ? "Untitled"
										  : QFileInfo(filePath).fileName());

	setWindowTitle(QString("Notepad - %1[*]").arg(txt));
	setWindowFilePath(filePath);
}

bool MainWindow::keepChanges()
{
	return isWindowModified()
			&& QMessageBox::warning(this, tr("Warning"),
									tr("The document has been modified. The"
									   " unsaved changes will be lost."),
									QMessageBox::Ok | QMessageBox::Cancel,
									QMessageBox::Cancel) == QMessageBox::Cancel;
}

void MainWindow::onNew()
{
	if (keepChanges())
		return;

	ui->textEdit->clear();

	updateFilePath("");
	enableSave(false);
}

void MainWindow::onOpen()
{
	const QString &fileName(QFileDialog::getOpenFileName(this, tr("Open File"),
														 ".", tr("Text files"
																 " (*.txt)")));

	if (fileName.isEmpty())
		return;

	ui->textEdit->setText(FileHandler::openFile(fileName));

	updateFilePath(fileName);
	enableSave(false);
}

void MainWindow::onSave()
{
	if (windowFilePath().isEmpty())
		onSaveAs();
	else
		saveFile();
}

void MainWindow::onSaveAs()
{
	const QString &fileName(QFileDialog::getSaveFileName(this, tr("Save File"),
														 ".", tr("Text files"
																 " (*.txt)")));

	if (fileName.isEmpty())
		return;

	updateFilePath(fileName);
	saveFile();
}

void MainWindow::onPrint()
{
	QPrinter printer;
	QPrintDialog dialog(&printer);

	if (dialog.exec() == QDialog::Rejected)
		return;

	ui->textEdit->print(&printer);
}

void MainWindow::onAbout()
{
	MyDialog().exec();
}
