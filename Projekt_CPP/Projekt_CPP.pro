QT += quick

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        error.cpp \
        errorlogger.cpp \
        field.cpp \
        filemanager.cpp \
        gameengine.cpp \
        home.cpp \
        inventory.cpp \
        inventoryobject.cpp \
        main.cpp \
        map.cpp \
        mapobject.cpp \
        market.cpp \
        plant.cpp \
        player.cpp \
        seed.cpp \
        slot.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Additional import path used to resolve QML modules just for Qt Quick Designer
QML_DESIGNER_IMPORT_PATH =

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    error.h \
    errorlogger.h \
    field.h \
    filemanager.h \
    gameengine.h \
    home.h \
    inventory.h \
    inventoryobject.h \
    map.h \
    mapobject.h \
    market.h \
    plant.h \
    player.h \
    seed.h \
    slot.h

DISTFILES += \
    Images/grass.png \
    Images/player2.png \
    save.xml
