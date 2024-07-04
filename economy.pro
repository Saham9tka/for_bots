QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    errorwindow.cpp \
    game.cpp \
    gamewindow.cpp \
    happyaccidentwindow.cpp \
    hideplayerstatswindow.cpp \
    loadgamewindow.cpp \
    main.cpp \
    mainwindow.cpp \
    menu.cpp \
    newgamewindow.cpp \
    ruleswindow.cpp \
    youlosewindow.cpp \
    youwinwindow.cpp

HEADERS += \
    Bank.h \
    errorwindow.h \
    game.h \
    gamewindow.h \
    happyaccidentwindow.h \
    hideplayerstatswindow.h \
    loadgamewindow.h \
    mainwindow.h \
    menu.h \
    newgamewindow.h \
    ruleswindow.h \
    youlosewindow.h \
    youwinwindow.h

FORMS += \
    errorwindow.ui \
    gamewindow.ui \
    happyaccidentwindow.ui \
    hideplayerstatswindow.ui \
    loadgamewindow.ui \
    mainwindow.ui \
    menu.ui \
    newgamewindow.ui \
    ruleswindow.ui \
    youlosewindow.ui \
    youwinwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES +=
