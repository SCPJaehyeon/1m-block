TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lnetfilter_queue

SOURCES += \
        cpp/main.cpp \
        cpp/netfilter-test.cpp \
        cpp/print-info.cpp \
        cpp/set-table.cpp

HEADERS += \
        header/header.h


