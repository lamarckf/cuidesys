/****************************************************************************
** Meta object code from reading C++ file 'cadtransacao.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/cadtransacao.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'cadtransacao.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_cadtransacao_t {
    const uint offsetsAndSize[20];
    char stringdata0[180];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_cadtransacao_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_cadtransacao_t qt_meta_stringdata_cadtransacao = {
    {
QT_MOC_LITERAL(0, 12), // "cadtransacao"
QT_MOC_LITERAL(13, 12), // "refreshProds"
QT_MOC_LITERAL(26, 0), // ""
QT_MOC_LITERAL(27, 12), // "refreshTable"
QT_MOC_LITERAL(40, 17), // "on_voltar_clicked"
QT_MOC_LITERAL(58, 30), // "on_CadastrarPushButton_clicked"
QT_MOC_LITERAL(89, 28), // "on_DeletarPushButton_clicked"
QT_MOC_LITERAL(118, 30), // "on_confirmarPushButton_clicked"
QT_MOC_LITERAL(149, 20), // "verificarQuantidades"
QT_MOC_LITERAL(170, 9) // "tipoTrans"

    },
    "cadtransacao\0refreshProds\0\0refreshTable\0"
    "on_voltar_clicked\0on_CadastrarPushButton_clicked\0"
    "on_DeletarPushButton_clicked\0"
    "on_confirmarPushButton_clicked\0"
    "verificarQuantidades\0tipoTrans"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_cadtransacao[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    0 /* Private */,
       3,    0,   57,    2, 0x08,    1 /* Private */,
       4,    0,   58,    2, 0x08,    2 /* Private */,
       5,    0,   59,    2, 0x08,    3 /* Private */,
       6,    0,   60,    2, 0x08,    4 /* Private */,
       7,    0,   61,    2, 0x08,    5 /* Private */,
       8,    1,   62,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,    9,

       0        // eod
};

void cadtransacao::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<cadtransacao *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->refreshProds(); break;
        case 1: _t->refreshTable(); break;
        case 2: _t->on_voltar_clicked(); break;
        case 3: _t->on_CadastrarPushButton_clicked(); break;
        case 4: _t->on_DeletarPushButton_clicked(); break;
        case 5: _t->on_confirmarPushButton_clicked(); break;
        case 6: { bool _r = _t->verificarQuantidades((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject cadtransacao::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_cadtransacao.offsetsAndSize,
    qt_meta_data_cadtransacao,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_cadtransacao_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>


>,
    nullptr
} };


const QMetaObject *cadtransacao::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *cadtransacao::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_cadtransacao.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int cadtransacao::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
