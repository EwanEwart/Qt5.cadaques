#include "customwidget.h"
#include "ui_customwidget.h"

CustomWidget::CustomWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CustomWidget)
{
    QVBoxLayout* boxLayout = new QVBoxLayout(this);

    m_listWidget = new QListWidget(this);
    m_lineEdit = new QLineEdit(this);
    m_pushButton = new QPushButton("Quit",this);

    boxLayout->addWidget(m_listWidget);
    boxLayout->addWidget(m_lineEdit);
    boxLayout->addWidget(m_pushButton);

    setLayout(boxLayout);

    QStringList cities;
    cities << "Milano" << "Ginevra" << "Roma" << "Venizia" << "Pisa";
    foreach(QString const & city, cities){
        m_listWidget->addItem(city);
    }

    connect(m_listWidget, SIGNAL(itemClicked(QListWidgetItem*)), this,SLOT(listItemClicked(QListWidgetItem*)));
    connect(m_lineEdit, SIGNAL(editingFinished()), this, SLOT(updateListItem()));
    connect(m_pushButton, SIGNAL(clicked()), qApp, SLOT(quit()));

    ui->setupUi(this);
}

CustomWidget::~CustomWidget()
{
    delete ui;
}
void CustomWidget::listItemClicked(QListWidgetItem* item){
    Q_ASSERT(item);
    m_lineEdit->setText(item->text());
}
void CustomWidget::updateListItem(){
    QListWidgetItem* item = m_listWidget->currentItem();
    if(item){
        item->setText(m_lineEdit->text());
    }
}
