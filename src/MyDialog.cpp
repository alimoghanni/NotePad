#include "MyDialog.h"
#include "ui_MyDialog.h"

MyDialog::MyDialog(QWidget *parent) :
	QDialog(parent, Qt::FramelessWindowHint),
    ui(new Ui::MyDialog)
{
    ui->setupUi(this);
}

MyDialog::~MyDialog()
{
    delete ui;
}
