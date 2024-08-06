#include "mainwindow.h"
#include <QApplication>

// firstWidget logic moved to MainWindow
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
