/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actNew;
    QAction *actOpen;
    QAction *actSaveAs;
    QAction *actPrint;
    QAction *actCopy;
    QAction *actPaste;
    QAction *actUndo;
    QAction *actRedo;
    QAction *actCut;
    QAction *actExit;
    QAction *actAbout;
    QAction *actSave;
    QAction *actAboutQt;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(585, 481);
        actNew = new QAction(MainWindow);
        actNew->setObjectName("actNew");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/pix/images/icons/16/document.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actNew->setIcon(icon);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName("actOpen");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/pix/images/icons/16/folder-open-document.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actOpen->setIcon(icon1);
        actSaveAs = new QAction(MainWindow);
        actSaveAs->setObjectName("actSaveAs");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/pix/images/icons/16/disk--pencil.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSaveAs->setIcon(icon2);
        actPrint = new QAction(MainWindow);
        actPrint->setObjectName("actPrint");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/pix/images/icons/16/printer.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actPrint->setIcon(icon3);
        actCopy = new QAction(MainWindow);
        actCopy->setObjectName("actCopy");
        actCopy->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/pix/images/icons/16/document-copy.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCopy->setIcon(icon4);
        actPaste = new QAction(MainWindow);
        actPaste->setObjectName("actPaste");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/pix/images/icons/16/clipboard-paste.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actPaste->setIcon(icon5);
        actUndo = new QAction(MainWindow);
        actUndo->setObjectName("actUndo");
        actUndo->setEnabled(false);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/pix/images/icons/16/arrow-left.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actUndo->setIcon(icon6);
        actRedo = new QAction(MainWindow);
        actRedo->setObjectName("actRedo");
        actRedo->setEnabled(false);
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/pix/images/icons/16/arrow-right.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actRedo->setIcon(icon7);
        actCut = new QAction(MainWindow);
        actCut->setObjectName("actCut");
        actCut->setEnabled(false);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/pix/images/icons/16/scissors-blue.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actCut->setIcon(icon8);
        actExit = new QAction(MainWindow);
        actExit->setObjectName("actExit");
        actAbout = new QAction(MainWindow);
        actAbout->setObjectName("actAbout");
        actSave = new QAction(MainWindow);
        actSave->setObjectName("actSave");
        actSave->setEnabled(false);
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/pix/images/icons/16/disk.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        actSave->setIcon(icon9);
        actAboutQt = new QAction(MainWindow);
        actAboutQt->setObjectName("actAboutQt");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName("textEdit");
        textEdit->setStyleSheet(QString::fromUtf8(".QTextEdit {\n"
"	background-color: rgb(50, 50, 50);\n"
"	color: rgb(250, 250, 250);\n"
"}"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 585, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName("menuEdit");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName("toolBar");
        toolBar->setMovable(false);
        MainWindow->addToolBar(Qt::ToolBarArea::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actNew);
        menuFile->addAction(actOpen);
        menuFile->addAction(actSave);
        menuFile->addAction(actSaveAs);
        menuFile->addSeparator();
        menuFile->addAction(actPrint);
        menuFile->addSeparator();
        menuFile->addAction(actExit);
        menuEdit->addAction(actUndo);
        menuEdit->addAction(actRedo);
        menuEdit->addSeparator();
        menuEdit->addAction(actCopy);
        menuEdit->addAction(actPaste);
        menuEdit->addAction(actCut);
        menuHelp->addAction(actAbout);
        menuHelp->addAction(actAboutQt);
        toolBar->addAction(actNew);
        toolBar->addAction(actOpen);
        toolBar->addAction(actSave);
        toolBar->addSeparator();
        toolBar->addAction(actPrint);
        toolBar->addSeparator();
        toolBar->addAction(actUndo);
        toolBar->addAction(actRedo);
        toolBar->addSeparator();
        toolBar->addAction(actCopy);
        toolBar->addAction(actCut);
        toolBar->addAction(actPaste);

        retranslateUi(MainWindow);
        QObject::connect(actCopy, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::copy));
        QObject::connect(actCut, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::cut));
        QObject::connect(actPaste, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::paste));
        QObject::connect(actUndo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::undo));
        QObject::connect(actRedo, &QAction::triggered, textEdit, qOverload<>(&QTextEdit::redo));
        QObject::connect(textEdit, &QTextEdit::redoAvailable, actRedo, &QAction::setEnabled);
        QObject::connect(textEdit, &QTextEdit::undoAvailable, actUndo, &QAction::setEnabled);
        QObject::connect(textEdit, &QTextEdit::copyAvailable, actCopy, &QAction::setEnabled);
        QObject::connect(textEdit, &QTextEdit::copyAvailable, actCut, &QAction::setEnabled);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Notepad - Untitled[*]", nullptr));
        actNew->setText(QCoreApplication::translate("MainWindow", "&New", nullptr));
#if QT_CONFIG(shortcut)
        actNew->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actOpen->setText(QCoreApplication::translate("MainWindow", "&Open", nullptr));
#if QT_CONFIG(shortcut)
        actOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actSaveAs->setText(QCoreApplication::translate("MainWindow", "Save &As", nullptr));
#if QT_CONFIG(shortcut)
        actSaveAs->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actPrint->setText(QCoreApplication::translate("MainWindow", "&Print", nullptr));
#if QT_CONFIG(shortcut)
        actPrint->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        actCopy->setText(QCoreApplication::translate("MainWindow", "Copy", nullptr));
#if QT_CONFIG(shortcut)
        actCopy->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+C", nullptr));
#endif // QT_CONFIG(shortcut)
        actPaste->setText(QCoreApplication::translate("MainWindow", "Paste", nullptr));
#if QT_CONFIG(shortcut)
        actPaste->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actUndo->setText(QCoreApplication::translate("MainWindow", "Undo", nullptr));
#if QT_CONFIG(shortcut)
        actUndo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actRedo->setText(QCoreApplication::translate("MainWindow", "Redo", nullptr));
#if QT_CONFIG(shortcut)
        actRedo->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Y, Ctrl+Shift+Z", nullptr));
#endif // QT_CONFIG(shortcut)
        actCut->setText(QCoreApplication::translate("MainWindow", "Cut", nullptr));
#if QT_CONFIG(shortcut)
        actCut->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+X", nullptr));
#endif // QT_CONFIG(shortcut)
        actExit->setText(QCoreApplication::translate("MainWindow", "E&xit", nullptr));
#if QT_CONFIG(shortcut)
        actExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        actAbout->setText(QCoreApplication::translate("MainWindow", "&About NotePad", nullptr));
        actSave->setText(QCoreApplication::translate("MainWindow", "&Save", nullptr));
#if QT_CONFIG(shortcut)
        actSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actAboutQt->setText(QCoreApplication::translate("MainWindow", "About &Qt", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "&File", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("MainWindow", "&Edit", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "&Help", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
