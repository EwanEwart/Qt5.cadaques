#include <QCoreApplication>
#include <QtCore>

int main(int argc, char *argv[])
{
//    QCoreApplication a(argc, argv);

    Q_UNUSED(argc);
    Q_UNUSED(argv);

    QTextStream cout(stdout,QIODevice::WriteOnly);
    QString s1("Buon");
    QString s2("Giorno");

    QList<QString> l1;
    l1 << s1 << s2;

    QListIterator<QString> li1(l1);
    while (li1.hasNext()) {
        cout << li1.next();
        if(li1.hasNext()){
            cout <<" ";
        }
    }
    cout << "!" << endl;
    return 0;

//    return a.exec();
}
