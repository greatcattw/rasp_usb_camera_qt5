#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.resize(320,240);
    w.move(10,90);
    w.show();

    return a.exec();
}
