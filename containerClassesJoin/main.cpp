#include <QCoreApplication>
#include <QtCore>

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);
    Q_UNUSED(argc);
    Q_UNUSED(argv);
    QTextStream cout(stdout,QIODevice::WriteOnly);
    QList<QString> li;
    QString s1("Buon");
    QString s2("Giorno");
    li << s1 << s2 << "!";
    //
    QString s = li.join(" ");
    //
    cout << s << endl;

    return 0;
//    return a.exec();
}
