#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
	Q_OBJECT
public:
	MainWindow(QWidget *parent = nullptr);
	~MainWindow();

protected:
	void closeEvent(QCloseEvent *event) override;

private:
	void saveFile();
	void enableSave(bool enable);
	void updateFilePath(const QString &filePath);
	bool keepChanges();

	Ui::MainWindow *ui;

private slots:
	void onNew();
	void onOpen();
	void onSave();
	void onSaveAs();
	void onPrint();
	void onAbout();
};
#endif // MAINWINDOW_H
