#-------------------------------------------------
#
# Project created by QtCreator 2015-07-09T15:19:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BlackJack
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    bet.cpp \
    card.cpp \
    dealer.cpp \
    deck.cpp \
    game.cpp \
    player.cpp \
    setwindow.cpp \
    playroom.cpp \
    helpwindow.cpp \
    rankwindow.cpp

HEADERS  += mainwindow.h \
    bet.h \
    card.h \
    dealer.h \
    deck.h \
    game.h \
    player.h \
    setwindow.h \
    playroom.h \
    helpwindow.h \
    rankwindow.h

FORMS    += mainwindow.ui \
    setwindow.ui \
    playroom.ui \
    helpwindow.ui \
    rankwindow.ui

DISTFILES +=

RESOURCES += \
    images.qrc
