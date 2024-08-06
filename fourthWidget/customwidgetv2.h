#ifndef CUSTOMWIDGETV2_H
#define CUSTOMWIDGETV2_H

#include <QWidget>
#include <QGraphicsView>
#include <QVBoxLayout>
#include <QGraphicsRectItem>

// A GraphicsView with moveable objects
class CustomWidgetV2 : public QWidget
{
    Q_OBJECT

public:
    CustomWidgetV2(QWidget *parent = nullptr);
    ~CustomWidgetV2();
private:
    QGraphicsView* m_graphicsView;
    QGraphicsScene* m_graphicsScene;
};

#endif // CUSTOMWIDGETV2_H
