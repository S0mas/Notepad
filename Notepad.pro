#-------------------------------------------------
#
# Project created by QtCreator 2015-05-04T05:43:39
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Notepad
TEMPLATE = app


SOURCES += main.cpp\
        mainWindow.cpp \
    fileWindow.cpp

HEADERS  += mainWindow.h \
    fileWindow.h

FORMS    += mainWindow.ui \
    fileWindow.ui
