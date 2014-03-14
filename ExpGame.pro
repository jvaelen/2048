#-------------------------------------------------
#
# Project created by QtCreator 2014-03-11T13:19:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ExpGame
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    tile.cpp \
    board.cpp \
    game.cpp \
    player.cpp \
    qgameboard.cpp \
    qtile.cpp \
    qresetbutton.cpp \
    observer.cpp \
    subject.cpp

HEADERS  += mainwindow.h \
    tile.h \
    board.h \
    game.h \
    player.h \
    qgameboard.h \
    qtile.h \
    qresetbutton.h \
    observer.h \
    subject.h

FORMS    += mainwindow.ui
