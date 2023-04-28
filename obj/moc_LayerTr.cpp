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
    QByteArrayData data[22];
    char stringdata0[285];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_LayerTr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_LayerTr_t qt_meta_stringdata_LayerTr = {
    {
QT_MOC_LITERAL(0, 0, 7), // "LayerTr"
QT_MOC_LITERAL(1, 8, 9), // "changeDir"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 10), // "sTargetDir"
QT_MOC_LITERAL(4, 30, 7), // "sOutDir"
QT_MOC_LITERAL(5, 38, 17), // "signalRefreshView"
QT_MOC_LITERAL(6, 56, 23), // "on_btnSelectDir_clicked"
QT_MOC_LITERAL(7, 80, 17), // "on_btnRun_clicked"
QT_MOC_LITERAL(8, 98, 9), // "slotReply"
QT_MOC_LITERAL(9, 108, 5), // "iType"
QT_MOC_LITERAL(10, 114, 3), // "sId"
QT_MOC_LITERAL(11, 118, 4), // "data"
QT_MOC_LITERAL(12, 123, 6), // "sError"
QT_MOC_LITERAL(13, 130, 12), // "slotTimerout"
QT_MOC_LITERAL(14, 143, 21), // "on_btnRefresh_clicked"
QT_MOC_LITERAL(15, 165, 19), // "on_btnCheck_clicked"
QT_MOC_LITERAL(16, 185, 21), // "on_btnUnCheck_clicked"
QT_MOC_LITERAL(17, 207, 7), // "slotAni"
QT_MOC_LITERAL(18, 215, 14), // "slotCheckRetry"
QT_MOC_LITERAL(19, 230, 18), // "on_btnGoto_clicked"
QT_MOC_LITERAL(20, 249, 29), // "on_cbType_currentIndexChanged"
QT_MOC_LITERAL(21, 279, 5) // "index"

    },
    "LayerTr\0changeDir\0\0sTargetDir\0sOutDir\0"
    "signalRefreshView\0on_btnSelectDir_clicked\0"
    "on_btnRun_clicked\0slotReply\0iType\0sId\0"
    "data\0sError\0slotTimerout\0on_btnRefresh_clicked\0"
    "on_btnCheck_clicked\0on_btnUnCheck_clicked\0"
    "slotAni\0slotCheckRetry\0on_btnGoto_clicked\0"
    "on_cbType_currentIndexChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_LayerTr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   79,    2, 0x06 /* Public */,
       5,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   85,    2, 0x08 /* Private */,
       7,    0,   86,    2, 0x08 /* Private */,
       8,    4,   87,    2, 0x08 /* Private */,
      13,    0,   96,    2, 0x08 /* Private */,
      14,    0,   97,    2, 0x08 /* Private */,
      15,    0,   98,    2, 0x08 /* Private */,
      16,    0,   99,    2, 0x08 /* Private */,
      17,    0,  100,    2, 0x08 /* Private */,
      18,    0,  101,    2, 0x08 /* Private */,
      19,    0,  102,    2, 0x08 /* Private */,
      20,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString,    9,   10,   11,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,

       0        // eod
};

void LayerTr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LayerTr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeDir((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 1: _t->signalRefreshView(); break;
        case 2: _t->on_btnSelectDir_clicked(); break;
        case 3: _t->on_btnRun_clicked(); break;
        case 4: _t->slotReply((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 5: _t->slotTimerout(); break;
        case 6: _t->on_btnRefresh_clicked(); break;
        case 7: _t->on_btnCheck_clicked(); break;
        case 8: _t->on_btnUnCheck_clicked(); break;
        case 9: _t->slotAni(); break;
        case 10: _t->slotCheckRetry(); break;
        case 11: _t->on_btnGoto_clicked(); break;
        case 12: _t->on_cbType_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LayerTr::*)(QString , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayerTr::changeDir)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LayerTr::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&LayerTr::signalRefreshView)) {
                *result = 1;
                return;
            }
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
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void LayerTr::changeDir(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LayerTr::signalRefreshView()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
