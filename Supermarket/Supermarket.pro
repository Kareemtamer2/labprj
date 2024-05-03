QT       += core gui
QT       += multimedia
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    login.cpp \
    marketmain.cpp \
    registring.cpp

HEADERS += \
    login.h \
    marketmain.h \
    registring.h

FORMS += \
    login.ui \
    marketmain.ui \
    registring.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    backgrond1.jpeg \
    background2.jpeg \
    background3.jpeg

RESOURCES += \
    recources.qrc
