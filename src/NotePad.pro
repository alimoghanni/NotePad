QT += widgets printsupport

CONFIG += c++11

SOURCES += \
    FileHandler.cpp \
    main.cpp \
    MainWindow.cpp \
    MyDialog.cpp

HEADERS += \
    FileHandler.h \
    MainWindow.h \
    MyDialog.h

FORMS += \
    MainWindow.ui \
    MyDialog.ui

RESOURCES += \
    resources.qrc

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
