QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        classcpp.cpp \
        classcsharp.cpp \
        classjava.cpp \
        factorycpp.cpp \
        factorycsharp.cpp \
        factoryjava.cpp \
        languageconst.cpp \
        languagefactory.cpp \
        main.cpp \
        methodcpp.cpp \
        methodcsharp.cpp \
        methodjava.cpp \
        methodunit.cpp \
        printcpp.cpp \
        printcsharp.cpp \
        printjava.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    abstractfactorybase.h \
    classcpp.h \
    classcsharp.h \
    classjava.h \
    classunit.h \
    factorycpp.h \
    factorycsharp.h \
    factoryjava.h \
    languageconst.h \
    languagefactory.h \
    languagefactorytemplate.h \
    methodcpp.h \
    methodcsharp.h \
    methodjava.h \
    methodunit.h \
    printcpp.h \
    printcsharp.h \
    printjava.h \
    printunit.h
