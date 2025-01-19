#ifndef CHANGE_ORDER_H
#define CHANGE_ORDER_H
#include"Manager.h"
#include <QWidget>

namespace Ui {
class change_order;
}

class change_order : public QWidget
{
    Q_OBJECT

public:
    explicit change_order(QWidget *parent = nullptr);
    ~change_order();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::change_order *ui;
};

#endif // CHANGE_ORDER_H
