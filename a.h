#ifndef A_H
#define A_H

#include <QWidget>

namespace Ui {
class A;
}

class A : public QWidget
{
    Q_OBJECT

public:
    explicit A(QWidget *parent = nullptr);
    ~A();

private:
    Ui::A *ui;
};

#endif // A_H
