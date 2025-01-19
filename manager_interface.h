#ifndef MANAGER_INTERFACE_H
#define MANAGER_INTERFACE_H
#include"change_table.h"
#include <QWidget>
#include"change_dish.h"
#include"change_order.h"
namespace Ui {
class manager_interface;
}

class manager_interface : public QWidget
{
    Q_OBJECT

public:
    explicit manager_interface(QWidget *parent = nullptr);
    ~manager_interface();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::manager_interface *ui;
};

#endif // MANAGER_INTERFACE_H
