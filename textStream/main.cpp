#include <QCoreApplication>
#include <QtCore>

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    QTextStream cout(stdout,QIODevice::WriteOnly);
    Q_UNUSED(argc);
    Q_UNUSED(argv);
    QString s1("Paris");
    QString s2("London");
    QString s = "From " + s1 + " to " + s2 + "!";
    cout << s << endl;
    return 0;

//    return a.exec();
}
