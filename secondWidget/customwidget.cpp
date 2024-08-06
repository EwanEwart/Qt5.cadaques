#include "customwidget.h"
//
// author's custom widget
//
CustomWidget::CustomWidget(QWidget *parent) : QWidget(parent)
{

}
void CustomWidget::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event)

    QPainter painter(this);

    QRect frame = rect().adjusted(10,10,-10,-10); // offsets
    painter.setPen(QColor("#33B5E5")); // frame colour
    painter.drawRect(frame);

    QRect sqare(QPoint(0,0),QSize(40,40));
    if(m_lastPos.isNull()){
        sqare.moveCenter(frame.center());
    } else {
        sqare.moveCenter(m_lastPos);
    }
    painter.fillRect(sqare,QColor("#ffbb33"));
}
void CustomWidget::mousePressEvent(QMouseEvent *event){
    m_lastPos = event->pos();
    update();
}
void CustomWidget::mouseMoveEvent(QMouseEvent *event){
    m_lastPos = event->pos();
    update();
}
