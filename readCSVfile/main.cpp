#include <QCoreApplication>
#include <QtCore>

int main(int argc, char *argv[])
{
    //    QCoreApplication a(argc, argv);
    Q_UNUSED(argc);
    Q_UNUSED(argv);

    QFile file("../readCSVfile/csv-sample.txt");
    QList<QStringList> sl;
    if(file.open(QIODevice::ReadOnly)){
        QTextStream stream(&file);
        forever {
            QString line = stream.readLine();
            // test for null string 'QString()'
            if(line.isNull()){
                break;
            }
            // test for empty string 'QString("")'
            if(line.isEmpty()) {
                continue;
            }
            QStringList row;
            foreach(const QString& cell, line.split(",")){
                row.append(cell.trimmed());
            }
            sl.append(row);
        }
    }
    // EE++: display rows
    QTextStream cout(stdout, QIODevice::WriteOnly);

    QListIterator<QStringList> rowIter(sl);
    while (rowIter.hasNext()) {
        QListIterator<QString> row(rowIter.next());
        while (row.hasNext()) {
            cout << row.next();
            if(row.hasPrevious()){
                cout << " + ";
            }
        }
        cout << endl;
    }
    return 0;
    //    return a.exec();
}
