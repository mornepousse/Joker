/****************************************************************************
** Meta object code from reading C++ file 'PhMediaPanel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../libs/PhCommonUI/PhMediaPanel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PhMediaPanel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PhMediaPanel_t {
    QByteArrayData data[31];
    char stringdata0[398];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PhMediaPanel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PhMediaPanel_t qt_meta_stringdata_PhMediaPanel = {
    {
QT_MOC_LITERAL(0, 0, 12), // "PhMediaPanel"
QT_MOC_LITERAL(1, 13, 11), // "playClicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 12), // "pauseClicked"
QT_MOC_LITERAL(4, 39, 18), // "fastForwardClicked"
QT_MOC_LITERAL(5, 58, 13), // "rewindClicked"
QT_MOC_LITERAL(6, 72, 11), // "backClicked"
QT_MOC_LITERAL(7, 84, 16), // "nextFrameClicked"
QT_MOC_LITERAL(8, 101, 20), // "previousFrameClicked"
QT_MOC_LITERAL(9, 122, 11), // "sliderMoved"
QT_MOC_LITERAL(10, 134, 6), // "PhTime"
QT_MOC_LITERAL(11, 141, 4), // "time"
QT_MOC_LITERAL(12, 146, 19), // "timeCodeTypeChanged"
QT_MOC_LITERAL(13, 166, 14), // "PhTimeCodeType"
QT_MOC_LITERAL(14, 181, 6), // "tcType"
QT_MOC_LITERAL(15, 188, 13), // "onTimeChanged"
QT_MOC_LITERAL(16, 202, 13), // "onRateChanged"
QT_MOC_LITERAL(17, 216, 6), // "PhRate"
QT_MOC_LITERAL(18, 223, 4), // "rate"
QT_MOC_LITERAL(19, 228, 21), // "onTimeCodeTypeChanged"
QT_MOC_LITERAL(20, 250, 11), // "onPlayPause"
QT_MOC_LITERAL(21, 262, 13), // "onFastForward"
QT_MOC_LITERAL(22, 276, 8), // "onRewind"
QT_MOC_LITERAL(23, 285, 6), // "onBack"
QT_MOC_LITERAL(24, 292, 11), // "onNextFrame"
QT_MOC_LITERAL(25, 304, 15), // "onPreviousFrame"
QT_MOC_LITERAL(26, 320, 15), // "onSliderChanged"
QT_MOC_LITERAL(27, 336, 8), // "position"
QT_MOC_LITERAL(28, 345, 12), // "updateSlider"
QT_MOC_LITERAL(29, 358, 20), // "onTCTypeComboChanged"
QT_MOC_LITERAL(30, 379, 18) // "updatePlayingState"

    },
    "PhMediaPanel\0playClicked\0\0pauseClicked\0"
    "fastForwardClicked\0rewindClicked\0"
    "backClicked\0nextFrameClicked\0"
    "previousFrameClicked\0sliderMoved\0"
    "PhTime\0time\0timeCodeTypeChanged\0"
    "PhTimeCodeType\0tcType\0onTimeChanged\0"
    "onRateChanged\0PhRate\0rate\0"
    "onTimeCodeTypeChanged\0onPlayPause\0"
    "onFastForward\0onRewind\0onBack\0onNextFrame\0"
    "onPreviousFrame\0onSliderChanged\0"
    "position\0updateSlider\0onTCTypeComboChanged\0"
    "updatePlayingState"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PhMediaPanel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    0,  126,    2, 0x06 /* Public */,
       5,    0,  127,    2, 0x06 /* Public */,
       6,    0,  128,    2, 0x06 /* Public */,
       7,    0,  129,    2, 0x06 /* Public */,
       8,    0,  130,    2, 0x06 /* Public */,
       9,    1,  131,    2, 0x06 /* Public */,
      12,    1,  134,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      15,    1,  137,    2, 0x0a /* Public */,
      16,    1,  140,    2, 0x0a /* Public */,
      19,    1,  143,    2, 0x0a /* Public */,
      20,    0,  146,    2, 0x08 /* Private */,
      21,    0,  147,    2, 0x08 /* Private */,
      22,    0,  148,    2, 0x08 /* Private */,
      23,    0,  149,    2, 0x08 /* Private */,
      24,    0,  150,    2, 0x08 /* Private */,
      25,    0,  151,    2, 0x08 /* Private */,
      26,    1,  152,    2, 0x08 /* Private */,
      28,    0,  155,    2, 0x08 /* Private */,
      29,    0,  156,    2, 0x08 /* Private */,
      30,    0,  157,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PhMediaPanel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PhMediaPanel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->playClicked(); break;
        case 1: _t->pauseClicked(); break;
        case 2: _t->fastForwardClicked(); break;
        case 3: _t->rewindClicked(); break;
        case 4: _t->backClicked(); break;
        case 5: _t->nextFrameClicked(); break;
        case 6: _t->previousFrameClicked(); break;
        case 7: _t->sliderMoved((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 8: _t->timeCodeTypeChanged((*reinterpret_cast< PhTimeCodeType(*)>(_a[1]))); break;
        case 9: _t->onTimeChanged((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 10: _t->onRateChanged((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        case 11: _t->onTimeCodeTypeChanged((*reinterpret_cast< PhTimeCodeType(*)>(_a[1]))); break;
        case 12: _t->onPlayPause(); break;
        case 13: _t->onFastForward(); break;
        case 14: _t->onRewind(); break;
        case 15: _t->onBack(); break;
        case 16: _t->onNextFrame(); break;
        case 17: _t->onPreviousFrame(); break;
        case 18: _t->onSliderChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->updateSlider(); break;
        case 20: _t->onTCTypeComboChanged(); break;
        case 21: _t->updatePlayingState(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PhMediaPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::playClicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::pauseClicked)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::fastForwardClicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::rewindClicked)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::backClicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::nextFrameClicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::previousFrameClicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)(PhTime );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::sliderMoved)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (PhMediaPanel::*)(PhTimeCodeType );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PhMediaPanel::timeCodeTypeChanged)) {
                *result = 8;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PhMediaPanel::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_PhMediaPanel.data,
    qt_meta_data_PhMediaPanel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PhMediaPanel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PhMediaPanel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PhMediaPanel.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int PhMediaPanel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void PhMediaPanel::playClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void PhMediaPanel::pauseClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void PhMediaPanel::fastForwardClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void PhMediaPanel::rewindClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void PhMediaPanel::backClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void PhMediaPanel::nextFrameClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void PhMediaPanel::previousFrameClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void PhMediaPanel::sliderMoved(PhTime _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void PhMediaPanel::timeCodeTypeChanged(PhTimeCodeType _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
