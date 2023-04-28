/****************************************************************************
** Meta object code from reading C++ file 'COpenAi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../COpenAi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'COpenAi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_COpenAi_t {
    QByteArrayData data[12];
    char stringdata0[96];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_COpenAi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_COpenAi_t qt_meta_stringdata_COpenAi = {
    {
QT_MOC_LITERAL(0, 0, 7), // "COpenAi"
QT_MOC_LITERAL(1, 8, 9), // "replyChat"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 3), // "sId"
QT_MOC_LITERAL(4, 23, 9), // "sErrorStr"
QT_MOC_LITERAL(5, 33, 10), // "replyModel"
QT_MOC_LITERAL(6, 44, 9), // "replyData"
QT_MOC_LITERAL(7, 54, 4), // "iApi"
QT_MOC_LITERAL(8, 59, 4), // "data"
QT_MOC_LITERAL(9, 64, 10), // "onResponse"
QT_MOC_LITERAL(10, 75, 14), // "QNetworkReply*"
QT_MOC_LITERAL(11, 90, 5) // "reply"

    },
    "COpenAi\0replyChat\0\0sId\0sErrorStr\0"
    "replyModel\0replyData\0iApi\0data\0"
    "onResponse\0QNetworkReply*\0reply"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_COpenAi[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   34,    2, 0x06 /* Public */,
       5,    2,   41,    2, 0x06 /* Public */,
       6,    4,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    1,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString,    3,    2,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QString,    2,    4,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QByteArray, QMetaType::QString,    7,    3,    8,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void COpenAi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<COpenAi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->replyChat((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QByteArray(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 1: _t->replyModel((*reinterpret_cast< QByteArray(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->replyData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QByteArray(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->onResponse((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (COpenAi::*)(QString , QByteArray , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&COpenAi::replyChat)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (COpenAi::*)(QByteArray , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&COpenAi::replyModel)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (COpenAi::*)(int , QString , QByteArray , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&COpenAi::replyData)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject COpenAi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_COpenAi.data,
    qt_meta_data_COpenAi,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *COpenAi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *COpenAi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_COpenAi.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int COpenAi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void COpenAi::replyChat(QString _t1, QByteArray _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void COpenAi::replyModel(QByteArray _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void COpenAi::replyData(int _t1, QString _t2, QByteArray _t3, QString _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
