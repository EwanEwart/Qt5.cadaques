#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QPainter>
#include <QMouseEvent>

#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

// firstWidget logic moved to MainWindow ...
public:
    explicit MainWindow(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    ~MainWindow();

// firstWidget logic moved to MainWindow ...
private:
    QPoint m_lastPos;

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
