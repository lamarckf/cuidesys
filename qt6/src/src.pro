QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    cadadm.cpp \
    cadproduto.cpp \
    cadtransacao.cpp \
    editadm.cpp \
    editproduto.cpp \
    excluadm.cpp \
    excluproduto.cpp \
    geriradm.cpp \
    gerirestoque.cpp \
    gerirtransacao.cpp \
    janelainicial.cpp \
    main.cpp \
    janelalogin.cpp

HEADERS += \
    cadadm.h \
    cadproduto.h \
    cadtransacao.h \
    editadm.h \
    editproduto.h \
    excluadm.h \
    excluproduto.h \
    geriradm.h \
    gerirestoque.h \
    gerirtransacao.h \
    janelainicial.h \
    janelalogin.h

FORMS += \
    cadadm.ui \
    cadproduto.ui \
    cadtransacao.ui \
    editadm.ui \
    editproduto.ui \
    excluadm.ui \
    excluproduto.ui \
    geriradm.ui \
    gerirestoque.ui \
    gerirtransacao.ui \
    janelainicial.ui \
    janelalogin.ui

TRANSLATIONS += \
    src_pt_BR.ts
CONFIG += lrelease
CONFIG += embed_translations

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
