#include "firstmodel.h"
#include "firstmodel.h"
#include "ui_firstmodel.h"

// Use List instead of ListWidget to use a model
FirstModel::FirstModel(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstModel)
{
    m_pListView = new QListView(this);
    m_pStringListModel = new QStringListModel(this);
    m_pListView->setModel(m_pStringListModel);

    QVBoxLayout* pVBoxLayout = new QVBoxLayout(this);
    pVBoxLayout->addWidget(m_pListView);
    setLayout(pVBoxLayout);

    QList<QString> cities;
    cities << "Roma" << "Milano" << "Venezia" << "Pisa" << "Trento" << "Aosta" << "Genova" << "Bologna" << "Firenze";
    /////////////
    m_pStringListModel->setStringList(cities);
    /////////////

    ui->setupUi(this);
}

FirstModel::~FirstModel()
{
    delete ui;
}
