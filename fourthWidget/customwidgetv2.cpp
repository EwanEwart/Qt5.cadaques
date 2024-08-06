#include "customwidgetv2.h"

// A GraphicsView with moveable objects
CustomWidgetV2::CustomWidgetV2(QWidget *parent)
    : QWidget(parent)
{
    m_graphicsView = new QGraphicsView(this);
    m_graphicsScene = new QGraphicsScene(this);
    m_graphicsView->setScene(m_graphicsScene);

    QVBoxLayout* vBoxLayout = new QVBoxLayout(this);
    vBoxLayout->setMargin(0);
    vBoxLayout->addWidget(m_graphicsView);
    setLayout(vBoxLayout);

    QGraphicsRectItem* rect1 = m_graphicsScene->addRect(0,0,40,40,Qt::NoPen,QColor("#ffbb33"));
    rect1->setFlags(QGraphicsRectItem::ItemIsFocusable|QGraphicsRectItem::ItemIsMovable);
}

CustomWidgetV2::~CustomWidgetV2()
{

}
