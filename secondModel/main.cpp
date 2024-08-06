#include "secondmodel.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SecondModel w;
    w.show();

    return a.exec();
}
