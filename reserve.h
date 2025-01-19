#ifndef RESERVE_H
#define RESERVE_H
#include"SQLiteDatabase.h"
#include <QWidget>

namespace Ui {
class reserve;
}

class reserve : public QWidget
{
    Q_OBJECT

public:
    explicit reserve(QWidget *parent = nullptr);
    ~reserve();

private slots:
    void on_tableWidget_cellDoubleClicked(int row, int column);

private:
    Ui::reserve *ui;
};

#endif // RESERVE_H
