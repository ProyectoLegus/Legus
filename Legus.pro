#-------------------------------------------------
#
# Project created by QtCreator 2012-11-27T14:18:04
#
#-------------------------------------------------

QT       += core gui

TARGET = Legus
TEMPLATE = app

SOURCES += main.cpp\
        editor.cpp \
    tokens.cpp \
    parser.cpp

HEADERS  += editor.h \
    tokens.h \
    parser.h

FORMS    += editor.ui

OTHER_FILES += \
    parser.y \
    tokens.l
