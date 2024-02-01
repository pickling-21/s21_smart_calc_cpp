QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    View/qcustomplot.cc \
    View/graph.cc \
    View/view.cc \
    main.cc \
    Model/lexeme.cc \
    Model/model.cc \
    Model/operator.cc \
    Model/credit.cc \
    Controller/controller.cc

HEADERS += \
    View/qcustomplot.h \
    View/graph.h \
    View/view.h \
    Model/error.h \
    Model/lexeme.h \
    Model/model.h \
    Model/operator.h \
    Model/credit.h \
    Controller/controller.h




FORMS += \
    View/graph.ui \
    View/view.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
DISTFILES += \
    CppSmartCalc.pro.user
