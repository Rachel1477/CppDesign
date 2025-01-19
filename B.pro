QT       += core gui
QT       += sql #添加数据库模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Customer.cpp \
    Dialog_.cpp \
    Manager.cpp \
    Register.cpp \
    SQLiteDatabase.cpp \
    change_dish.cpp \
    change_information.cpp \
    change_order.cpp \
    change_table.cpp \
    information_success.cpp \
    main.cpp \
    mainwindow.cpp \
    manager_interface.cpp \
    order_ui.cpp \
    pay.cpp \
    reserve_dish.cpp \
    reserve_tabelandtime.cpp \
    success_to_register.cpp \
    user_agreement.cpp \
    user_interface.cpp

HEADERS += \
    Customer.h \
    Dialog_.h \
    Manager.h \
    Register.h \
    SQLiteDatabase.h \
    change_dish.h \
    change_information.h \
    change_order.h \
    change_table.h \
    information_success.h \
    mainwindow.h \
    manager_interface.h \
    order_ui.h \
    pay.h \
    reserve_dish.h \
    reserve_tabelandtime.h \
    success_to_register.h \
    user_agreement.h \
    user_interface.h

FORMS += \
    Dialog_.ui \
    Register.ui \
    change_dish.ui \
    change_information.ui \
    change_order.ui \
    change_table.ui \
    information_success.ui \
    mainwindow.ui \
    manager_interface.ui \
    order_ui.ui \
    pay.ui \
    reserve_dish.ui \
    reserve_tabelandtime.ui \
    success_to_register.ui \
    user_agreement.ui \
    user_interface.ui

TRANSLATIONS += \
    B_zh_CN.ts

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
QT += core gui sql

DISTFILES += \
    E:/R-C.jpg \
    R-C.jpg

RESOURCES += \
    res.qrc

