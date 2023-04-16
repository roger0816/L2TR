/****************************************************************************
** Meta object code from reading C++ file 'LayerTr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../stageTr/LayerTr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LayerTr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_LayerTr_t {
    QByteArrayData data[16];
    char stringdata0[202];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerTr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerTr_t qt_meta_stringdata_LayerTr = {
    {
QT_MOC_LITERAL(0, 0, 7), // "LayerTr"
QT_MOC_LITERAL(1, 8, 23), // "on_btnSelectDir_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "on_btnRun_clicked"
QT_MOC_LITERAL(4, 51, 9), // "slotReply"
QT_MOC_LITERAL(5, 61, 5), // "iType"
QT_MOC_LITERAL(6, 67, 3), // "sId"
QT_MOC_LITERAL(7, 71, 4), // "data"
QT_MOC_LITERAL(8, 76, 6), // "sError"
QT_MOC_LITERAL(9, 83, 12), // "slotTimerout"
QT_MOC_LITERAL(10, 96, 21), // "on_btnRefresh_clicked"
QT_MOC_LITERAL(11, 118, 19), // "on_btnCheck_clicked"
QT_MOC_LITERAL(12, 138, 21), // "on_btnUnCheck_clicked"
QT_MOC_LITERAL(13, 160, 7), // "slotAni"
QT_MOC_LITERAL(14, 168, 14), // "slotCheckRetry"
QT_MOC_LITERAL(15, 183, 18) // "on_btnGoto_clicked"

    },
    "LayerTr\0on_btnSelectDir_clicked\0\0"
    "on_btnRun_clicked\0slotReply\0iType\0sId\0"
    "data\0sError\0slotTimerout\0on_btnRefresh_clicked\0"
    "on_btnCheck_clicked\0on_btnUnCheck_clicked\0"
    "slotAni\0slotCheckRetry\0on_btnGoto_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerTr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    4,   66,    2, 0x08 /* Private */,
       9,    0,   75,    2, 0x08 /* Private */,
      10,    0,   76,    2, 0x08 /* Private */,
      11,    0,   77,    2, 0x08 /* Private */,
      12,    0,   78,    2, 0x08 /* Private */,
      13,    0,   79,    2, 0x08 /* Private */,
      14,    0,   80,    2, 0x08 /* Private */,
      15,    0,   81,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void LayerTr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerTr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnSelectDir_clicked(); break;
        case 1: _t->on_btnRun_clicked(); break;
        case 2: _t->slotReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->slotTimerout(); break;
        case 4: _t->on_btnRefresh_clicked(); break;
        case 5: _t->on_btnCheck_clicked(); break;
        case 6: _t->on_btnUnCheck_clicked(); break;
        case 7: _t->slotAni(); break;
        case 8: _t->slotCheckRetry(); break;
        case 9: _t->on_btnGoto_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject LayerTr::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_LayerTr.data,
    qt_meta_data_LayerTr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *LayerTr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LayerTr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_LayerTr.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int LayerTr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
