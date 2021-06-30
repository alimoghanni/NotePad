#include "mydialog.h"
#include "ui_mydialog.h"
#include <QPushButton>

MyDialog::MyDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);

    setWindowFlags(windowFlags()|Qt::FramelessWindowHint);
    setBackgroundRole(QPalette::Base);
    //this->setAttribute(Qt::WA_TranslucentBackground,true);
    //setAutoFillBackground(false);
    QPalette p = ui->textEdit->palette();
    p.setColor(QPalette::Base, QColor(0,0,0,0)); // r,g,b,A
    ui->textEdit->setPalette(p);
}

MyDialog::~MyDialog()
{
    delete ui;
}

void MyDialog::on_pushButton_clicked()
{
    MyDialog::close();
}

