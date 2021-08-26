/****************************************************************************
** Meta object code from reading C++ file 'edittransacao.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.1.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../src/edittransacao.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'edittransacao.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.1.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_edittransacao_t {
    const uint offsetsAndSize[22];
    char stringdata0[240];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_edittransacao_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_edittransacao_t qt_meta_stringdata_edittransacao = {
    {
QT_MOC_LITERAL(0, 13), // "edittransacao"
QT_MOC_LITERAL(14, 27), // "on_voltarPushButton_clicked"
QT_MOC_LITERAL(42, 0), // ""
QT_MOC_LITERAL(43, 28), // "on_aplicarPushButton_clicked"
QT_MOC_LITERAL(72, 40), // "on_transacaoComboBox_currentI..."
QT_MOC_LITERAL(113, 30), // "on_CadastrarPushButton_clicked"
QT_MOC_LITERAL(144, 28), // "on_DeletarPushButton_clicked"
QT_MOC_LITERAL(173, 12), // "refreshProds"
QT_MOC_LITERAL(186, 17), // "refreshTransacoes"
QT_MOC_LITERAL(204, 22), // "refreshCamposTransacao"
QT_MOC_LITERAL(227, 12) // "refreshTable"

    },
    "edittransacao\0on_voltarPushButton_clicked\0"
    "\0on_aplicarPushButton_clicked\0"
    "on_transacaoComboBox_currentIndexChanged\0"
    "on_CadastrarPushButton_clicked\0"
    "on_DeletarPushButton_clicked\0refreshProds\0"
    "refreshTransacoes\0refreshCamposTransacao\0"
    "refreshTable"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_edittransacao[] = {

 // content:
       9,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x08,    0 /* Private */,
       3,    0,   69,    2, 0x08,    1 /* Private */,
       4,    1,   70,    2, 0x08,    2 /* Private */,
       5,    0,   73,    2, 0x08,    4 /* Private */,
       6,    0,   74,    2, 0x08,    5 /* Private */,
       7,    0,   75,    2, 0x08,    6 /* Private */,
       8,    0,   76,    2, 0x08,    7 /* Private */,
       9,    0,   77,    2, 0x08,    8 /* Private */,
      10,    0,   78,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void edittransacao::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<edittransacao *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_voltarPushButton_clicked(); break;
        case 1: _t->on_aplicarPushButton_clicked(); break;
        case 2: _t->on_transacaoComboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->on_CadastrarPushButton_clicked(); break;
        case 4: _t->on_DeletarPushButton_clicked(); break;
        case 5: _t->refreshProds(); break;
        case 6: _t->refreshTransacoes(); break;
        case 7: _t->refreshCamposTransacao(); break;
        case 8: _t->refreshTable(); break;
        default: ;
        }
    }
}

const QMetaObject edittransacao::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_edittransacao.offsetsAndSize,
    qt_meta_data_edittransacao,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_edittransacao_t

, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
    nullptr
} };


const QMetaObject *edittransacao::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *edittransacao::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_edittransacao.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int edittransacao::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
