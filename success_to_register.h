#ifndef SUCCESS_TO_REGISTER_H
#define SUCCESS_TO_REGISTER_H

#include <QWidget>

namespace Ui {
class success_to_register;
}

class success_to_register : public QWidget
{
    Q_OBJECT

public:
    explicit success_to_register(QWidget *parent = nullptr);
    ~success_to_register();

private slots:
    void on_pushButton_clicked();

private:
    Ui::success_to_register *ui;
};

#endif // SUCCESS_TO_REGISTER_H
