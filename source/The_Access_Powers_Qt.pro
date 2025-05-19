QT          += core gui
QT          += sql
RESOURCES   += resources/resources.qrc
APP_VERSION = 0.2.3-alpha-3
TARGET = "TAP v"$$APP_VERSION

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DatabaseManager.cpp \
    main.cpp \
    mainWindow.cpp \
    randomGenerator.cpp

HEADERS += \
    DatabaseManager.h \
    mainWindow.h \
    randomGenerator.h

FORMS += \
    mainWindow.ui \
    randomGenerator.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
