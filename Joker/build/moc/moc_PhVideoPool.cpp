/****************************************************************************
** Meta object code from reading C++ file 'PhVideoPool.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../libs/PhVideo/PhVideoPool.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhVideoPool.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhVideoPool_t {
    QByteArrayData data[12];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhVideoPool_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhVideoPool_t qt_meta_stringdata_PhVideoPool = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PhVideoPool"
QT_MOC_LITERAL(1, 12, 11), // "decodeFrame"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 14), // "PhVideoBuffer*"
QT_MOC_LITERAL(4, 40, 6), // "buffer"
QT_MOC_LITERAL(5, 47, 18), // "cancelFrameRequest"
QT_MOC_LITERAL(6, 66, 13), // "requestFrames"
QT_MOC_LITERAL(7, 80, 7), // "PhFrame"
QT_MOC_LITERAL(8, 88, 5), // "frame"
QT_MOC_LITERAL(9, 94, 8), // "backward"
QT_MOC_LITERAL(10, 103, 14), // "frameAvailable"
QT_MOC_LITERAL(11, 118, 14) // "frameCancelled"

    },
    "PhVideoPool\0decodeFrame\0\0PhVideoBuffer*\0"
    "buffer\0cancelFrameRequest\0requestFrames\0"
    "PhFrame\0frame\0backward\0frameAvailable\0"
    "frameCancelled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhVideoPool[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,
       5,    1,   42,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    2,   45,    2, 0x0a /* Public */,
      10,    1,   50,    2, 0x0a /* Public */,
      11,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7, QMetaType::Bool,    8,    9,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void PhVideoPool::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PhVideoPool *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->decodeFrame((*reinterpret_cast< PhVideoBuffer*(*)>(_a[1]))); break;
        case 1: _t->cancelFrameRequest((*reinterpret_cast< PhVideoBuffer*(*)>(_a[1]))); break;
        case 2: _t->requestFrames((*reinterpret_cast< PhFrame(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 3: _t->frameAvailable((*reinterpret_cast< PhVideoBuffer*(*)>(_a[1]))); break;
        case 4: _t->frameCancelled((*reinterpret_cast< PhVideoBuffer*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PhVideoPool::*)(PhVideoBuffer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoPool::decodeFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PhVideoPool::*)(PhVideoBuffer * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoPool::cancelFrameRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhVideoPool::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PhVideoPool.data,
    qt_meta_data_PhVideoPool,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhVideoPool::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhVideoPool::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhVideoPool.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PhVideoPool::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void PhVideoPool::decodeFrame(PhVideoBuffer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PhVideoPool::cancelFrameRequest(PhVideoBuffer * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
