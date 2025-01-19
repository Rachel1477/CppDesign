/********************************************************************************
** Form generated from reading UI file 'order_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_UI_H
#define UI_ORDER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order_ui
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QLabel *label;
    QLabel *id;
    QLabel *label_2;
    QLabel *time;
    QLabel *label_3;
    QLabel *table;
    QLabel *label_5;
    QLabel *total;
    QLabel *err;
    QPushButton *pushButton_2;
    QPushButton *pushButton;

    void setupUi(QWidget *order_ui)
    {
        if (order_ui->objectName().isEmpty())
            order_ui->setObjectName(QString::fromUtf8("order_ui"));
        order_ui->resize(738, 620);
        gridLayout = new QGridLayout(order_ui);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_3 = new QPushButton(order_ui);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 0, 2, 1, 1);

        label = new QLabel(order_ui);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 0, 1, 1);

        id = new QLabel(order_ui);
        id->setObjectName(QString::fromUtf8("id"));

        gridLayout->addWidget(id, 1, 1, 1, 2);

        label_2 = new QLabel(order_ui);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        time = new QLabel(order_ui);
        time->setObjectName(QString::fromUtf8("time"));

        gridLayout->addWidget(time, 2, 1, 1, 1);

        label_3 = new QLabel(order_ui);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 0, 1, 1);

        table = new QLabel(order_ui);
        table->setObjectName(QString::fromUtf8("table"));

        gridLayout->addWidget(table, 3, 1, 1, 2);

        label_5 = new QLabel(order_ui);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        total = new QLabel(order_ui);
        total->setObjectName(QString::fromUtf8("total"));

        gridLayout->addWidget(total, 4, 1, 1, 2);

        err = new QLabel(order_ui);
        err->setObjectName(QString::fromUtf8("err"));

        gridLayout->addWidget(err, 5, 1, 1, 2);

        pushButton_2 = new QPushButton(order_ui);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 6, 0, 1, 1);

        pushButton = new QPushButton(order_ui);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 6, 1, 1, 1);


        retranslateUi(order_ui);

        QMetaObject::connectSlotsByName(order_ui);
    } // setupUi

    void retranslateUi(QWidget *order_ui)
    {
        order_ui->setWindowTitle(QCoreApplication::translate("order_ui", "Form", nullptr));
        pushButton_3->setText(QCoreApplication::translate("order_ui", "\345\210\267\346\226\260", nullptr));
        label->setText(QCoreApplication::translate("order_ui", "<html><head/><body><p><span style=\" font-size:20pt;\">\350\256\242\345\215\225\345\217\267</span></p></body></html>", nullptr));
        id->setText(QString());
        label_2->setText(QCoreApplication::translate("order_ui", "<html><head/><body><p><span style=\" font-size:18pt;\">\351\242\204\345\256\232\346\227\266\351\227\264</span></p></body></html>", nullptr));
        time->setText(QString());
        label_3->setText(QCoreApplication::translate("order_ui", "<html><head/><body><p><span style=\" font-size:20pt;\">\351\244\220\346\241\214\345\217\267</span></p></body></html>", nullptr));
        table->setText(QString());
        label_5->setText(QCoreApplication::translate("order_ui", "<html><head/><body><p><span style=\" font-size:20pt;\">\346\200\273\344\273\267</span></p></body></html>", nullptr));
        total->setText(QString());
        err->setText(QCoreApplication::translate("order_ui", "<html><head/><body><p><br/></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("order_ui", "\350\277\224\345\233\236", nullptr));
        pushButton->setText(QCoreApplication::translate("order_ui", "\345\217\226\346\266\210\351\242\204\347\272\246", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order_ui: public Ui_order_ui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_UI_H
