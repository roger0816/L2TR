QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
QT-=opengl
CONFIG += c++11

MOC_DIR =$$PWD/obj
OBJECTS_DIR =$$PWD/obj
UI_DIR =$$PWD/obj

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

INCLUDEPATH+=$$PWD/stageTr \
             $$PWD/stageDictionary

SOURCES += \
    COpenAi.cpp \
    Global.cpp \
    LayerLogin.cpp \
    stageDictionary/ItemNameDecode.cpp \
    stageDictionary/LayerDictionary.cpp \
    stageDictionary/StageDictionary.cpp \
    stageTr/LayerHelp.cpp \
    LayerSetting.cpp \
    stageTr/LayerTest.cpp \
    stageTr/LayerTr.cpp \
    main.cpp \
    stageTr/StageTr.cpp \
    widget.cpp

HEADERS += \
    COpenAi.h \
    Global.h \
    LayerLogin.h \
    stageDictionary/ItemNameDecode.h \
    stageDictionary/LayerDictionary.h \
    stageDictionary/StageDictionary.h \
    stageTr/LayerHelp.h \
    LayerSetting.h \
    stageTr/LayerTest.h \
    stageTr/LayerTr.h \
    stageTr/StageTr.h \
    widget.h

FORMS += \
    LayerLogin.ui \
    stageDictionary/LayerDictionary.ui \
    stageDictionary/StageDictionary.ui \
    stageTr/LayerHelp.ui \
    LayerSetting.ui \
    stageTr/LayerTest.ui \
    stageTr/LayerTr.ui \
    stageTr/StageTr.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



#INCLUDEPATH +=libs/json-develop/single_include/





#win32: LIBS += -L$$PWD/libs/curl-8.0.1_4-win64-mingw/lib/ -lcurl

#INCLUDEPATH += $$PWD/libs/curl-8.0.1_4-win64-mingw/include
#DEPENDPATH += $$PWD/libs/curl-8.0.1_4-win64-mingw/include

#win32:!win32-g++: PRE_TARGETDEPS += $$PWD/libs/curl-8.0.1_4-win64-mingw/lib/curl.lib
#else:win32-g++: PRE_TARGETDEPS += $$PWD/libs/curl-8.0.1_4-win64-mingw/lib/libcurl.a

#win32: LIBS += -L$$PWD/libs/curl-8.0.1_4-win64-mingw/lib/ -llibcurl.dll

#INCLUDEPATH += $$PWD/libs/curl-8.0.1_4-win64-mingw/include
#DEPENDPATH += $$PWD/libs/curl-8.0.1_4-win64-mingw/include

RESOURCES += \
    res/res.qrc

DISTFILES += \
    res/style.css


