/****************************************************************************
** Meta object code from reading C++ file 'SonyStripSynchronizer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "SonyStripSynchronizer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SonyStripSynchronizer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SonyStripSynchronizer_t {
    QByteArrayData data[10];
    char stringdata0[121];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SonyStripSynchronizer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SonyStripSynchronizer_t qt_meta_stringdata_SonyStripSynchronizer = {
    {
QT_MOC_LITERAL(0, 0, 21), // "SonyStripSynchronizer"
QT_MOC_LITERAL(1, 22, 17), // "onSonyTimeChanged"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 6), // "PhTime"
QT_MOC_LITERAL(4, 48, 4), // "time"
QT_MOC_LITERAL(5, 53, 17), // "onSonyRateChanged"
QT_MOC_LITERAL(6, 71, 6), // "PhRate"
QT_MOC_LITERAL(7, 78, 4), // "rate"
QT_MOC_LITERAL(8, 83, 18), // "onStripTimeChanged"
QT_MOC_LITERAL(9, 102, 18) // "onStripRateChanged"

    },
    "SonyStripSynchronizer\0onSonyTimeChanged\0"
    "\0PhTime\0time\0onSonyRateChanged\0PhRate\0"
    "rate\0onStripTimeChanged\0onStripRateChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SonyStripSynchronizer[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x08 /* Private */,
       5,    1,   37,    2, 0x08 /* Private */,
       8,    1,   40,    2, 0x08 /* Private */,
       9,    1,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void SonyStripSynchronizer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SonyStripSynchronizer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onSonyTimeChanged((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 1: _t->onSonyRateChanged((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        case 2: _t->onStripTimeChanged((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 3: _t->onStripRateChanged((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SonyStripSynchronizer::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_SonyStripSynchronizer.data,
    qt_meta_data_SonyStripSynchronizer,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SonyStripSynchronizer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SonyStripSynchronizer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SonyStripSynchronizer.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int SonyStripSynchronizer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
