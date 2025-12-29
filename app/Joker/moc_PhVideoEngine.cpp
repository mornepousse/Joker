/****************************************************************************
** Meta object code from reading C++ file 'PhVideoEngine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../libs/PhVideo/PhVideoEngine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhVideoEngine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhVideoEngine_t {
    QByteArrayData data[28];
    char stringdata0[318];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhVideoEngine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhVideoEngine_t qt_meta_stringdata_PhVideoEngine = {
    {
QT_MOC_LITERAL(0, 0, 13), // "PhVideoEngine"
QT_MOC_LITERAL(1, 14, 19), // "timeCodeTypeChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 14), // "PhTimeCodeType"
QT_MOC_LITERAL(4, 50, 6), // "tcType"
QT_MOC_LITERAL(5, 57, 13), // "openInDecoder"
QT_MOC_LITERAL(6, 71, 8), // "fileName"
QT_MOC_LITERAL(7, 80, 14), // "closeInDecoder"
QT_MOC_LITERAL(8, 95, 6), // "opened"
QT_MOC_LITERAL(9, 102, 7), // "success"
QT_MOC_LITERAL(10, 110, 18), // "deinterlaceChanged"
QT_MOC_LITERAL(11, 129, 11), // "deinterlace"
QT_MOC_LITERAL(12, 141, 15), // "newFrameDecoded"
QT_MOC_LITERAL(13, 157, 7), // "PhFrame"
QT_MOC_LITERAL(14, 165, 5), // "frame"
QT_MOC_LITERAL(15, 171, 11), // "stopDecoder"
QT_MOC_LITERAL(16, 183, 14), // "frameAvailable"
QT_MOC_LITERAL(17, 198, 14), // "PhVideoBuffer*"
QT_MOC_LITERAL(18, 213, 6), // "buffer"
QT_MOC_LITERAL(19, 220, 13), // "decoderOpened"
QT_MOC_LITERAL(20, 234, 7), // "frameIn"
QT_MOC_LITERAL(21, 242, 11), // "frameLength"
QT_MOC_LITERAL(22, 254, 5), // "width"
QT_MOC_LITERAL(23, 260, 6), // "height"
QT_MOC_LITERAL(24, 267, 9), // "codecName"
QT_MOC_LITERAL(25, 277, 19), // "openInDecoderFailed"
QT_MOC_LITERAL(26, 297, 13), // "onTimeChanged"
QT_MOC_LITERAL(27, 311, 6) // "PhTime"

    },
    "PhVideoEngine\0timeCodeTypeChanged\0\0"
    "PhTimeCodeType\0tcType\0openInDecoder\0"
    "fileName\0closeInDecoder\0opened\0success\0"
    "deinterlaceChanged\0deinterlace\0"
    "newFrameDecoded\0PhFrame\0frame\0stopDecoder\0"
    "frameAvailable\0PhVideoBuffer*\0buffer\0"
    "decoderOpened\0frameIn\0frameLength\0"
    "width\0height\0codecName\0openInDecoderFailed\0"
    "onTimeChanged\0PhTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhVideoEngine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       7,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   69,    2, 0x06 /* Public */,
       5,    1,   72,    2, 0x06 /* Public */,
       7,    0,   75,    2, 0x06 /* Public */,
       8,    1,   76,    2, 0x06 /* Public */,
      10,    1,   79,    2, 0x06 /* Public */,
      12,    1,   82,    2, 0x06 /* Public */,
      15,    0,   85,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,   86,    2, 0x0a /* Public */,
      19,    6,   89,    2, 0x0a /* Public */,
      25,    0,  102,    2, 0x0a /* Public */,
      26,    1,  103,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 13, 0x80000000 | 13, QMetaType::Int, QMetaType::Int, QMetaType::QString,    4,   20,   21,   22,   23,   24,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 27,    2,

       0        // eod
};

void PhVideoEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PhVideoEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeCodeTypeChanged((*reinterpret_cast< PhTimeCodeType(*)>(_a[1]))); break;
        case 1: _t->openInDecoder((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->closeInDecoder(); break;
        case 3: _t->opened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->deinterlaceChanged((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->newFrameDecoded((*reinterpret_cast< PhFrame(*)>(_a[1]))); break;
        case 6: _t->stopDecoder(); break;
        case 7: _t->frameAvailable((*reinterpret_cast< PhVideoBuffer*(*)>(_a[1]))); break;
        case 8: _t->decoderOpened((*reinterpret_cast< PhTimeCodeType(*)>(_a[1])),(*reinterpret_cast< PhFrame(*)>(_a[2])),(*reinterpret_cast< PhFrame(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 9: _t->openInDecoderFailed(); break;
        case 10: _t->onTimeChanged((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PhVideoEngine::*)(PhTimeCodeType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoEngine::timeCodeTypeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PhVideoEngine::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoEngine::openInDecoder)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PhVideoEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoEngine::closeInDecoder)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PhVideoEngine::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoEngine::opened)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PhVideoEngine::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoEngine::deinterlaceChanged)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PhVideoEngine::*)(PhFrame );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoEngine::newFrameDecoded)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PhVideoEngine::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhVideoEngine::stopDecoder)) {
                *result = 6;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhVideoEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_PhVideoEngine.data,
    qt_meta_data_PhVideoEngine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhVideoEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhVideoEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhVideoEngine.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PhVideoEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void PhVideoEngine::timeCodeTypeChanged(PhTimeCodeType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PhVideoEngine::openInDecoder(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PhVideoEngine::closeInDecoder()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PhVideoEngine::opened(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void PhVideoEngine::deinterlaceChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void PhVideoEngine::newFrameDecoded(PhFrame _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void PhVideoEngine::stopDecoder()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
