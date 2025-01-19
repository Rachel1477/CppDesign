/********************************************************************************
** Form generated from reading UI file 'information_success.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INFORMATION_SUCCESS_H
#define UI_INFORMATION_SUCCESS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_information_success
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QWidget *information_success)
    {
        if (information_success->objectName().isEmpty())
            information_success->setObjectName(QString::fromUtf8("information_success"));
        information_success->resize(740, 555);
        label = new QLabel(information_success);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(250, 130, 341, 191));
        pushButton = new QPushButton(information_success);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(210, 340, 291, 91));

        retranslateUi(information_success);

        QMetaObject::connectSlotsByName(information_success);
    } // setupUi

    void retranslateUi(QWidget *information_success)
    {
        information_success->setWindowTitle(QCoreApplication::translate("information_success", "Form", nullptr));
        label->setText(QCoreApplication::translate("information_success", "<html><head/><body><p><span style=\" font-size:24pt; font-weight:600;\">\344\277\241\346\201\257\344\277\256\346\224\271\346\210\220\345\212\237</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("information_success", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class information_success: public Ui_information_success {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INFORMATION_SUCCESS_H
