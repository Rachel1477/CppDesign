/********************************************************************************
** Form generated from reading UI file 'center_ui.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CENTER_UI_H
#define UI_CENTER_UI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_center_UI
{
public:

    void setupUi(QWidget *center_UI)
    {
        if (center_UI->objectName().isEmpty())
            center_UI->setObjectName(QString::fromUtf8("center_UI"));
        center_UI->resize(400, 300);

        retranslateUi(center_UI);

        QMetaObject::connectSlotsByName(center_UI);
    } // setupUi

    void retranslateUi(QWidget *center_UI)
    {
        center_UI->setWindowTitle(QCoreApplication::translate("center_UI", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class center_UI: public Ui_center_UI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CENTER_UI_H
