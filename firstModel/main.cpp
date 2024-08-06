#include "firstmodel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FirstModel w;
    w.show();

    return a.exec();
}
