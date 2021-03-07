TEMPLATE = app
#CONFIG += console c++11
#CONFIG -= app_bundle

QT       += core gui \
         multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target


SOURCES += \
        amaryllis.cpp \
        dahlia.cpp \
        flower.cpp \
        hyacinth.cpp \
        lilium.cpp \
        liliumextract.cpp \
        magnolia.cpp \
        magnoliaextract.cpp \
        main.cpp \
        orchis.cpp \
        orchisextract.cpp \
        ordinaryflowerbuds.cpp \
        ordinaryflowers.cpp \
        ordinaryunion.cpp \
        ornamentalbud.cpp \
        ornamentalflower.cpp \
        ornamentalflowerbud.cpp \
        ornamentalonion.cpp \
        person.cpp \
        profile.cpp \
        rareflower.cpp \
        rareflowerbuds.cpp \
        rareonion.cpp \
        soil.cpp \
        sprayingmaterial.cpp \
        store.cpp \
        tuberose.cpp \
        tulip.cpp \
        water.cpp

HEADERS += \
    amaryllis.h \
    dahlia.h \
    flower.h \
    hyacinth.h \
    lilium.h \
    liliumextract.h \
    magnolia.h \
    magnoliaextract.h \
    orchis.h \
    orchisextract.h \
    ordinaryflowerbuds.h \
    ordinaryflowers.h \
    ordinaryunion.h \
    ornamentalbud.h \
    ornamentalflower.h \
    ornamentalflowerbud.h \
    ornamentalonion.h \
    person.h \
    profile.h \
    rareflower.h \
    rareflowerbuds.h \
    rareonion.h \
    soil.h \
    sprayingmaterial.h \
    store.h \
    tuberose.h \
    tulip.h \
    water.h
