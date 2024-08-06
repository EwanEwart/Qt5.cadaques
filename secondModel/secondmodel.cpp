#include "secondmodel.h"

SecondModel::SecondModel(QWidget *parent) :
    QWidget(parent)
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../secondModel/cities.db3");
    if(!db.open()){
        qFatal("Unable to open database!");
    }

    m_pSqlTableModel = new QSqlTableModel(this, db);
//    m_pSqlTableModel = new QSqlTableModel(this);
    m_pSqlTableModel->setTable("cities");
    m_pSqlTableModel->setHeaderData(0,Qt::Horizontal,"name");
    m_pSqlTableModel->setHeaderData(1,Qt::Horizontal,"country");

    m_pListView = new QListView(this);
    m_pListView->setModel(m_pSqlTableModel);
    m_pListView->setModelColumn(0);

//    QSortFilterProxyModel* proxy = new QSortFilterProxyModel(this);
//    proxy->setSourceModel(m_pSqlTableModel);
//    m_pListView->setModel(proxy);
//    m_pListView->setSortingEnabled(true);


    if (!m_pSqlTableModel->select()) {
        qFatal("Couldn't retieve data from table!");
    }

    QVBoxLayout* pVBoxLayout = new QVBoxLayout(this);
    pVBoxLayout->addWidget(m_pListView);
    setLayout(pVBoxLayout);
}

SecondModel::~SecondModel()
{

}
