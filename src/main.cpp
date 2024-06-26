#include <QApplication>
#include <QFontDatabase>
#include "MainWindow.h"

int main(int argc, char *argv[])
{
	QGuiApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
	QGuiApplication::setHighDpiScaleFactorRoundingPolicy(Qt::HighDpiScaleFactorRoundingPolicy::PassThrough);
    QApplication a(argc, argv);
	QFontDatabase::addApplicationFont(":/bin/fonts/roboto/Roboto-Regular.ttf");
	QGuiApplication::setFont(QFont("Roboto", 11));
    MainWindow w;

    w.show();

	return a.exec();
}
