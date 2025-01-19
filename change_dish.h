#ifndef CHANGE_DISH_H
#define CHANGE_DISH_H
#include"SQLiteDatabase.h"
#include"Manager.h"
#include <QWidget>

namespace Ui {
class change_dish;
}

class change_dish : public QWidget
{
    Q_OBJECT

public:
    explicit change_dish(QWidget *parent = nullptr);
    ~change_dish();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::change_dish *ui;
};

#endif // CHANGE_DISH_H
