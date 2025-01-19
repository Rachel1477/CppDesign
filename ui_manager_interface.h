/********************************************************************************
** Form generated from reading UI file 'manager_interface.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_INTERFACE_H
#define UI_MANAGER_INTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager_interface
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *manager_interface)
    {
        if (manager_interface->objectName().isEmpty())
            manager_interface->setObjectName(QString::fromUtf8("manager_interface"));
        manager_interface->resize(840, 692);
        pushButton = new QPushButton(manager_interface);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 30, 211, 111));
        pushButton_2 = new QPushButton(manager_interface);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(240, 200, 211, 111));
        pushButton_3 = new QPushButton(manager_interface);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(240, 400, 211, 111));

        retranslateUi(manager_interface);

        QMetaObject::connectSlotsByName(manager_interface);
    } // setupUi

    void retranslateUi(QWidget *manager_interface)
    {
        manager_interface->setWindowTitle(QCoreApplication::translate("manager_interface", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("manager_interface", "\350\260\203\350\257\225\346\241\214\344\275\215\344\277\256\346\224\271", nullptr));
        pushButton_2->setText(QCoreApplication::translate("manager_interface", "\350\260\203\350\257\225\350\217\234\345\223\201\344\277\256\346\224\271", nullptr));
        pushButton_3->setText(QCoreApplication::translate("manager_interface", "\350\260\203\350\257\225\350\256\242\345\215\225\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class manager_interface: public Ui_manager_interface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_INTERFACE_H
