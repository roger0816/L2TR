/****************************************************************************
** Meta object code from reading C++ file 'StageTr.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../stageTr/StageTr.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'StageTr.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StageTr_t {
    QByteArrayData data[11];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StageTr_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StageTr_t qt_meta_stringdata_StageTr = {
    {
QT_MOC_LITERAL(0, 0, 7), // "StageTr"
QT_MOC_LITERAL(1, 8, 20), // "on_btnViewPw_clicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 21), // "on_btnSaveKey_clicked"
QT_MOC_LITERAL(4, 52, 20), // "on_txKey_textChanged"
QT_MOC_LITERAL(5, 73, 4), // "arg1"
QT_MOC_LITERAL(6, 78, 28), // "on_lineEdit_selectionChanged"
QT_MOC_LITERAL(7, 107, 24), // "on_label_2_linkActivated"
QT_MOC_LITERAL(8, 132, 4), // "link"
QT_MOC_LITERAL(9, 137, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(10, 165, 5) // "index"

    },
    "StageTr\0on_btnViewPw_clicked\0\0"
    "on_btnSaveKey_clicked\0on_txKey_textChanged\0"
    "arg1\0on_lineEdit_selectionChanged\0"
    "on_label_2_linkActivated\0link\0"
    "on_tabWidget_currentChanged\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StageTr[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    1,   46,    2, 0x08 /* Private */,
       6,    0,   49,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Int,   10,

       0        // eod
};

void StageTr::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StageTr *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnViewPw_clicked(); break;
        case 1: _t->on_btnSaveKey_clicked(); break;
        case 2: _t->on_txKey_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_lineEdit_selectionChanged(); break;
        case 4: _t->on_label_2_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject StageTr::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_StageTr.data,
    qt_meta_data_StageTr,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StageTr::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StageTr::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StageTr.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StageTr::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
