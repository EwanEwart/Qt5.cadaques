#ifndef SECONDMODEL_H
#define SECONDMODEL_H

#include <QWidget>
#include <QListView>
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QVBoxLayout>
#include <QSortFilterProxyModel>

class SecondModel : public QWidget
{
    Q_OBJECT

public:
    SecondModel(QWidget *parent = nullptr);
    ~SecondModel();

private:
    QListView* m_pListView;
    QSqlTableModel* m_pSqlTableModel;

};

#endif // SECONDMODEL_H
