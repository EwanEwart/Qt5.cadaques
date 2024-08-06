#ifndef FIRSTMODEL_H
#define FIRSTMODEL_H

#include <QWidget>
#include <QListView>
#include <QStringListModel>
#include <QVBoxLayout>

// Use List instead of ListWidget to use a model
namespace Ui {
class FirstModel;
}

class FirstModel : public QWidget
{
    Q_OBJECT

public:
    explicit FirstModel(QWidget *parent = nullptr);
    ~FirstModel();

private:
    Ui::FirstModel *ui;

    QListView* m_pListView;
    QStringListModel* m_pStringListModel;
};

#endif // FIRSTMODEL_H
