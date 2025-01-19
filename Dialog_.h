#ifndef DIALOG__H
#define DIALOG__H

#include <QWidget>
#include"Customer.h"
#include"Manager.h"
namespace Ui {
class Dialog_;
}

class Dialog_ : public QWidget
{
    Q_OBJECT

public:
    explicit Dialog_(QWidget *parent = nullptr);
    ~Dialog_();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Dialog_ *ui;



};

#endif // DIALOG__H
