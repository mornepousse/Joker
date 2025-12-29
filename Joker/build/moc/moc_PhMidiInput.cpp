/****************************************************************************
** Meta object code from reading C++ file 'PhMidiInput.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../libs/PhMidi/PhMidiInput.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhMidiInput.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhMidiInput_t {
    QByteArrayData data[20];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhMidiInput_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhMidiInput_t qt_meta_stringdata_PhMidiInput = {
    {
QT_MOC_LITERAL(0, 0, 11), // "PhMidiInput"
QT_MOC_LITERAL(1, 12, 12), // "quarterFrame"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 4), // "data"
QT_MOC_LITERAL(4, 31, 16), // "timeCodeReceived"
QT_MOC_LITERAL(5, 48, 2), // "hh"
QT_MOC_LITERAL(6, 51, 2), // "mm"
QT_MOC_LITERAL(7, 54, 2), // "ss"
QT_MOC_LITERAL(8, 57, 2), // "ff"
QT_MOC_LITERAL(9, 60, 14), // "PhTimeCodeType"
QT_MOC_LITERAL(10, 75, 6), // "tcType"
QT_MOC_LITERAL(11, 82, 4), // "play"
QT_MOC_LITERAL(12, 87, 4), // "stop"
QT_MOC_LITERAL(13, 92, 9), // "onMessage"
QT_MOC_LITERAL(14, 102, 27), // "std::vector<unsigned char>*"
QT_MOC_LITERAL(15, 130, 7), // "message"
QT_MOC_LITERAL(16, 138, 7), // "onError"
QT_MOC_LITERAL(17, 146, 17), // "RtMidiError::Type"
QT_MOC_LITERAL(18, 164, 4), // "type"
QT_MOC_LITERAL(19, 169, 9) // "errorText"

    },
    "PhMidiInput\0quarterFrame\0\0data\0"
    "timeCodeReceived\0hh\0mm\0ss\0ff\0"
    "PhTimeCodeType\0tcType\0play\0stop\0"
    "onMessage\0std::vector<unsigned char>*\0"
    "message\0onError\0RtMidiError::Type\0"
    "type\0errorText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhMidiInput[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    5,   47,    2, 0x06 /* Public */,
      11,    0,   58,    2, 0x06 /* Public */,
      12,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   60,    2, 0x08 /* Private */,
      16,    2,   63,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::UChar,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int, 0x80000000 | 9,    5,    6,    7,    8,   10,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,   19,

       0        // eod
};

void PhMidiInput::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PhMidiInput *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->quarterFrame((*reinterpret_cast< unsigned char(*)>(_a[1]))); break;
        case 1: _t->timeCodeReceived((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< PhTimeCodeType(*)>(_a[5]))); break;
        case 2: _t->play(); break;
        case 3: _t->stop(); break;
        case 4: _t->onMessage((*reinterpret_cast< std::vector<unsigned char>*(*)>(_a[1]))); break;
        case 5: _t->onError((*reinterpret_cast< RtMidiError::Type(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PhMidiInput::*)(unsigned char );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMidiInput::quarterFrame)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PhMidiInput::*)(int , int , int , int , PhTimeCodeType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMidiInput::timeCodeReceived)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PhMidiInput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMidiInput::play)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PhMidiInput::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMidiInput::stop)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhMidiInput::staticMetaObject = { {
    QMetaObject::SuperData::link<PhMidiObject::staticMetaObject>(),
    qt_meta_stringdata_PhMidiInput.data,
    qt_meta_data_PhMidiInput,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhMidiInput::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhMidiInput::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhMidiInput.stringdata0))
        return static_cast<void*>(this);
    return PhMidiObject::qt_metacast(_clname);
}

int PhMidiInput::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PhMidiObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PhMidiInput::quarterFrame(unsigned char _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PhMidiInput::timeCodeReceived(int _t1, int _t2, int _t3, int _t4, PhTimeCodeType _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void PhMidiInput::play()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PhMidiInput::stop()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
