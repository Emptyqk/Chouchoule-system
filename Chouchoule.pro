QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addgam.cpp \
    addgoods.cpp \
    adduser.cpp \
    admin.cpp \
    changegam.cpp \
    changeuser.cpp \
    main.cpp \
    mainwindow.cpp \
    managegamble.cpp \
    managegoods.cpp \
    manageuser.cpp \
    note.cpp \
    registeradmin.cpp \
    registeruser.cpp \
    rule.cpp \
    shop.cpp \
    user.cpp \
    usercart.cpp \
    usergamble.cpp

HEADERS += \
    addgam.h \
    addgoods.h \
    adduser.h \
    admin.h \
    changegam.h \
    changeuser.h \
    mainwindow.h \
    managegamble.h \
    managegoods.h \
    manageuser.h \
    note.h \
    registeradmin.h \
    registeruser.h \
    rule.h \
    shop.h \
    user.h \
    usercart.h \
    usergamble.h

FORMS += \
    addgam.ui \
    addgoods.ui \
    adduser.ui \
    admin.ui \
    changegam.ui \
    changeuser.ui \
    mainwindow.ui \
    managegamble.ui \
    managegoods.ui \
    manageuser.ui \
    note.ui \
    registeradmin.ui \
    registeruser.ui \
    rule.ui \
    shop.ui \
    user.ui \
    usercart.ui \
    usergamble.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc

DISTFILES +=
