#ifndef CUSTOMWIDGET_H
#define CUSTOMWIDGET_H

#include <QWidget>
#include <QListWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>

namespace Ui {
class CustomWidget;
}

class CustomWidget : public QWidget
{
    Q_OBJECT

public:
    explicit CustomWidget(QWidget *parent = nullptr);
    ~CustomWidget();

private:
    Ui::CustomWidget *ui;

private slots:
    void listItemClicked(QListWidgetItem* item);
    void updateListItem();

private:
    QListWidget* m_listWidget;
    QLineEdit* m_lineEdit;
    QPushButton* m_pushButton;
};

#endif // CUSTOMWIDGET_H
