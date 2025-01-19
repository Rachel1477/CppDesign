#ifndef CHANGE_TABLE_H
#define CHANGE_TABLE_H
#include"Manager.h"
#include <QWidget>

namespace Ui {
class change_table;
}

class change_table : public QWidget
{
    Q_OBJECT

public:
    explicit change_table(QWidget *parent = nullptr);
    ~change_table();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::change_table *ui;
};

#endif // CHANGE_TABLE_H
