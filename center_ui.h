#ifndef CENTER_UI_H
#define CENTER_UI_H
#include"Dialog_.h"
#include <QWidget>

namespace Ui {
class center_UI;
}

class center_UI : public QWidget
{
    Q_OBJECT

public:
    explicit center_UI(QWidget *parent = nullptr);
    ~center_UI();

private:
    Ui::center_UI *ui;
};

#endif // CENTER_UI_H
