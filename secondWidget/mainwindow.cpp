#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// firstWidget logic moved to MainWindow ...
void MainWindow::paintEvent(QPaintEvent *event) {
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
void MainWindow::mousePressEvent(QMouseEvent *event){
    m_lastPos = event->pos();
    update();
}
void MainWindow::mouseMoveEvent(QMouseEvent *event){
    m_lastPos = event->pos();
    update();
}
