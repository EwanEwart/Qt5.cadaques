#include <customwidget.h>
#include <QApplication>

// Create a window and show it
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QScopedPointer<QWidget> widget(new CustomWidget()); // book author
    widget->resize(480,240); // book author
    widget->show(); // book author

    return a.exec();
}
