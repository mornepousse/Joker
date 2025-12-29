/****************************************************************************
** Meta object code from reading C++ file 'PhSynchronizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../libs/PhSync/PhSynchronizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhSynchronizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhSynchronizer_t {
    QByteArrayData data[12];
    char stringdata0[152];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhSynchronizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhSynchronizer_t qt_meta_stringdata_PhSynchronizer = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PhSynchronizer"
QT_MOC_LITERAL(1, 15, 18), // "onStripTimeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 6), // "PhTime"
QT_MOC_LITERAL(4, 42, 4), // "time"
QT_MOC_LITERAL(5, 47, 18), // "onStripRateChanged"
QT_MOC_LITERAL(6, 66, 6), // "PhRate"
QT_MOC_LITERAL(7, 73, 4), // "rate"
QT_MOC_LITERAL(8, 78, 18), // "onVideoTimeChanged"
QT_MOC_LITERAL(9, 97, 18), // "onVideoRateChanged"
QT_MOC_LITERAL(10, 116, 17), // "onSyncTimeChanged"
QT_MOC_LITERAL(11, 134, 17) // "onSyncRateChanged"

    },
    "PhSynchronizer\0onStripTimeChanged\0\0"
    "PhTime\0time\0onStripRateChanged\0PhRate\0"
    "rate\0onVideoTimeChanged\0onVideoRateChanged\0"
    "onSyncTimeChanged\0onSyncRateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhSynchronizer[] = {

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
       1,    1,   44,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       8,    1,   50,    2, 0x08 /* Private */,
       9,    1,   53,    2, 0x08 /* Private */,
      10,    1,   56,    2, 0x08 /* Private */,
      11,    1,   59,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void PhSynchronizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PhSynchronizer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onStripTimeChanged((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 1: _t->onStripRateChanged((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        case 2: _t->onVideoTimeChanged((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 3: _t->onVideoRateChanged((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        case 4: _t->onSyncTimeChanged((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 5: _t->onSyncRateChanged((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhSynchronizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PhSynchronizer.data,
    qt_meta_data_PhSynchronizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhSynchronizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhSynchronizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhSynchronizer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PhSynchronizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
