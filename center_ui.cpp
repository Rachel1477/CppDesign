#include "center_ui.h"
#include "ui_center_ui.h"

center_UI::center_UI(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::center_UI)
{
    ui->setupUi(this);
}

center_UI::~center_UI()
{
    delete ui;
}
