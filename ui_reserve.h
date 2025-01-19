/********************************************************************************
** Form generated from reading UI file 'reserve.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESERVE_H
#define UI_RESERVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_reserve
{
public:
    QTableWidget *tablewidget1;
    QTableWidget *tableWidget_2;

    void setupUi(QWidget *reserve)
    {
        if (reserve->objectName().isEmpty())
            reserve->setObjectName(QString::fromUtf8("reserve"));
        reserve->resize(1376, 1489);
        tablewidget1 = new QTableWidget(reserve);
        if (tablewidget1->columnCount() < 3)
            tablewidget1->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tablewidget1->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tablewidget1->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tablewidget1->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        if (tablewidget1->rowCount() < 4)
            tablewidget1->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tablewidget1->setVerticalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tablewidget1->setVerticalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tablewidget1->setVerticalHeaderItem(2, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tablewidget1->setVerticalHeaderItem(3, __qtablewidgetitem6);
        tablewidget1->setObjectName(QString::fromUtf8("tablewidget1"));
        tablewidget1->setGeometry(QRect(20, 250, 301, 261));
        tableWidget_2 = new QTableWidget(reserve);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        if (tableWidget_2->rowCount() < 3)
            tableWidget_2->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem12);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));
        tableWidget_2->setGeometry(QRect(690, 630, 341, 131));

        retranslateUi(reserve);

        QMetaObject::connectSlotsByName(reserve);
    } // setupUi

    void retranslateUi(QWidget *reserve)
    {
        reserve->setWindowTitle(QCoreApplication::translate("reserve", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tablewidget1->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("reserve", "\350\217\234\345\223\201id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tablewidget1->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("reserve", "\350\217\234\345\223\201\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tablewidget1->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("reserve", "\344\273\267\346\240\274", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("reserve", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("reserve", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("reserve", "\346\226\260\345\273\272\345\210\227", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("reserve", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("reserve", "\346\226\260\345\273\272\350\241\214", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("reserve", "\346\226\260\345\273\272\350\241\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class reserve: public Ui_reserve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESERVE_H
