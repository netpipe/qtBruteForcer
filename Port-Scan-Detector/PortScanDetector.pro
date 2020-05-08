#-------------------------------------------------
#
# Project created by QtCreator 2011-11-15T10:36:06
#
#-------------------------------------------------

QT       += core gui network widgets

TARGET = PortScanDetector
TEMPLATE = app


SOURCES += main.cpp\
        MainWindow.cpp \
    ScanDetector.cpp \
    PortEntryValidator.cpp

HEADERS  += MainWindow.h \
    ScanDetector.h \
    PortEntryValidator.h

FORMS    += MainWindow.ui

RESOURCES += \
    resources.qrc

#This makes us use the windows resource file with the icons
win32:RC_FILE += icon.rc

#The windows resource file with icons
OTHER_FILES += \
    icon.rc





