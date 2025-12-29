/****************************************************************************
** Meta object code from reading C++ file 'JokerWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "JokerWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JokerWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.18. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_JokerWindow_t {
    QByteArrayData data[75];
    char stringdata0[1916];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_JokerWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_JokerWindow_t qt_meta_stringdata_JokerWindow = {
    {
QT_MOC_LITERAL(0, 0, 11), // "JokerWindow"
QT_MOC_LITERAL(1, 12, 11), // "timeCounter"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 6), // "PhTime"
QT_MOC_LITERAL(4, 32, 11), // "elapsedTime"
QT_MOC_LITERAL(5, 44, 14), // "showMediaPanel"
QT_MOC_LITERAL(6, 59, 14), // "hideMediaPanel"
QT_MOC_LITERAL(7, 74, 7), // "onPaint"
QT_MOC_LITERAL(8, 82, 5), // "width"
QT_MOC_LITERAL(9, 88, 6), // "height"
QT_MOC_LITERAL(10, 95, 11), // "onVideoSync"
QT_MOC_LITERAL(11, 107, 14), // "setCurrentTime"
QT_MOC_LITERAL(12, 122, 4), // "time"
QT_MOC_LITERAL(13, 127, 14), // "setCurrentRate"
QT_MOC_LITERAL(14, 142, 6), // "PhRate"
QT_MOC_LITERAL(15, 149, 4), // "rate"
QT_MOC_LITERAL(16, 154, 21), // "onTimecodeTypeChanged"
QT_MOC_LITERAL(17, 176, 14), // "PhTimeCodeType"
QT_MOC_LITERAL(18, 191, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(19, 215, 29), // "on_actionPlay_pause_triggered"
QT_MOC_LITERAL(20, 245, 32), // "on_actionPlay_backward_triggered"
QT_MOC_LITERAL(21, 278, 31), // "on_actionStep_forward_triggered"
QT_MOC_LITERAL(22, 310, 32), // "on_actionStep_backward_triggered"
QT_MOC_LITERAL(23, 343, 36), // "on_actionStep_time_forward_tr..."
QT_MOC_LITERAL(24, 380, 37), // "on_actionStep_time_backward_t..."
QT_MOC_LITERAL(25, 418, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(26, 440, 21), // "on_action_1_triggered"
QT_MOC_LITERAL(27, 462, 23), // "on_action_0_5_triggered"
QT_MOC_LITERAL(28, 486, 20), // "on_action0_triggered"
QT_MOC_LITERAL(29, 507, 22), // "on_action0_5_triggered"
QT_MOC_LITERAL(30, 530, 20), // "on_action1_triggered"
QT_MOC_LITERAL(31, 551, 20), // "on_action3_triggered"
QT_MOC_LITERAL(32, 572, 29), // "on_actionOpen_Video_triggered"
QT_MOC_LITERAL(33, 602, 35), // "on_actionChange_timestamp_tri..."
QT_MOC_LITERAL(34, 638, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(35, 663, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(36, 694, 29), // "on_actionClear_list_triggered"
QT_MOC_LITERAL(37, 724, 29), // "on_actionProperties_triggered"
QT_MOC_LITERAL(38, 754, 28), // "on_actionTest_mode_triggered"
QT_MOC_LITERAL(39, 783, 27), // "on_actionTimecode_triggered"
QT_MOC_LITERAL(40, 811, 31), // "on_actionNext_element_triggered"
QT_MOC_LITERAL(41, 843, 35), // "on_actionPrevious_element_tri..."
QT_MOC_LITERAL(42, 879, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(43, 903, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(44, 930, 31), // "on_actionExport_Video_triggered"
QT_MOC_LITERAL(45, 962, 27), // "on_actionAdd_text_triggered"
QT_MOC_LITERAL(46, 990, 35), // "on_actionSelect_character_tri..."
QT_MOC_LITERAL(47, 1026, 35), // "on_actionForce_16_9_ratio_tri..."
QT_MOC_LITERAL(48, 1062, 7), // "checked"
QT_MOC_LITERAL(49, 1070, 30), // "on_actionInvert_colors_toggled"
QT_MOC_LITERAL(50, 1101, 31), // "on_actionDisplay_feet_triggered"
QT_MOC_LITERAL(51, 1133, 42), // "on_actionSet_first_foot_timec..."
QT_MOC_LITERAL(52, 1176, 48), // "on_actionSet_distance_between..."
QT_MOC_LITERAL(53, 1225, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(54, 1248, 30), // "on_actionClose_video_triggered"
QT_MOC_LITERAL(55, 1279, 32), // "on_actionSend_feedback_triggered"
QT_MOC_LITERAL(56, 1312, 36), // "on_actionDeinterlace_video_tr..."
QT_MOC_LITERAL(57, 1349, 34), // "on_actionHide_the_rythmo_trig..."
QT_MOC_LITERAL(58, 1384, 32), // "on_actionPrevious_loop_triggered"
QT_MOC_LITERAL(59, 1417, 28), // "on_actionNext_loop_triggered"
QT_MOC_LITERAL(60, 1446, 33), // "on_actionDisplay_the_cuts_tog..."
QT_MOC_LITERAL(61, 1480, 45), // "on_actionDisplay_the_vertical..."
QT_MOC_LITERAL(62, 1526, 44), // "on_actionDisplay_the_control_..."
QT_MOC_LITERAL(63, 1571, 48), // "on_actionDisplay_the_informat..."
QT_MOC_LITERAL(64, 1620, 40), // "on_actionHide_selected_people..."
QT_MOC_LITERAL(65, 1661, 40), // "on_actionUse_native_video_siz..."
QT_MOC_LITERAL(66, 1702, 28), // "on_actionSet_TC_in_triggered"
QT_MOC_LITERAL(67, 1731, 29), // "on_actionSet_TC_out_triggered"
QT_MOC_LITERAL(68, 1761, 23), // "on_actionLoop_triggered"
QT_MOC_LITERAL(69, 1785, 15), // "videoFileOpened"
QT_MOC_LITERAL(70, 1801, 7), // "success"
QT_MOC_LITERAL(71, 1809, 37), // "on_actionPicture_in_picture_t..."
QT_MOC_LITERAL(72, 1847, 32), // "on_actionSecond_screen_triggered"
QT_MOC_LITERAL(73, 1880, 20), // "onSecondScreenClosed"
QT_MOC_LITERAL(74, 1901, 14) // "closedFromUser"

    },
    "JokerWindow\0timeCounter\0\0PhTime\0"
    "elapsedTime\0showMediaPanel\0hideMediaPanel\0"
    "onPaint\0width\0height\0onVideoSync\0"
    "setCurrentTime\0time\0setCurrentRate\0"
    "PhRate\0rate\0onTimecodeTypeChanged\0"
    "PhTimeCodeType\0on_actionOpen_triggered\0"
    "on_actionPlay_pause_triggered\0"
    "on_actionPlay_backward_triggered\0"
    "on_actionStep_forward_triggered\0"
    "on_actionStep_backward_triggered\0"
    "on_actionStep_time_forward_triggered\0"
    "on_actionStep_time_backward_triggered\0"
    "on_action_3_triggered\0on_action_1_triggered\0"
    "on_action_0_5_triggered\0on_action0_triggered\0"
    "on_action0_5_triggered\0on_action1_triggered\0"
    "on_action3_triggered\0on_actionOpen_Video_triggered\0"
    "on_actionChange_timestamp_triggered\0"
    "on_actionAbout_triggered\0"
    "on_actionPreferences_triggered\0"
    "on_actionClear_list_triggered\0"
    "on_actionProperties_triggered\0"
    "on_actionTest_mode_triggered\0"
    "on_actionTimecode_triggered\0"
    "on_actionNext_element_triggered\0"
    "on_actionPrevious_element_triggered\0"
    "on_actionSave_triggered\0"
    "on_actionSave_as_triggered\0"
    "on_actionExport_Video_triggered\0"
    "on_actionAdd_text_triggered\0"
    "on_actionSelect_character_triggered\0"
    "on_actionForce_16_9_ratio_triggered\0"
    "checked\0on_actionInvert_colors_toggled\0"
    "on_actionDisplay_feet_triggered\0"
    "on_actionSet_first_foot_timecode_triggered\0"
    "on_actionSet_distance_between_two_feet_triggered\0"
    "on_actionNew_triggered\0"
    "on_actionClose_video_triggered\0"
    "on_actionSend_feedback_triggered\0"
    "on_actionDeinterlace_video_triggered\0"
    "on_actionHide_the_rythmo_triggered\0"
    "on_actionPrevious_loop_triggered\0"
    "on_actionNext_loop_triggered\0"
    "on_actionDisplay_the_cuts_toggled\0"
    "on_actionDisplay_the_vertical_scale_triggered\0"
    "on_actionDisplay_the_control_panel_triggered\0"
    "on_actionDisplay_the_information_panel_triggered\0"
    "on_actionHide_selected_peoples_triggered\0"
    "on_actionUse_native_video_size_triggered\0"
    "on_actionSet_TC_in_triggered\0"
    "on_actionSet_TC_out_triggered\0"
    "on_actionLoop_triggered\0videoFileOpened\0"
    "success\0on_actionPicture_in_picture_triggered\0"
    "on_actionSecond_screen_triggered\0"
    "onSecondScreenClosed\0closedFromUser"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_JokerWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      62,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  324,    2, 0x0a /* Public */,
       5,    0,  327,    2, 0x08 /* Private */,
       6,    0,  328,    2, 0x08 /* Private */,
       7,    2,  329,    2, 0x08 /* Private */,
      10,    0,  334,    2, 0x08 /* Private */,
      11,    1,  335,    2, 0x08 /* Private */,
      13,    1,  338,    2, 0x08 /* Private */,
      16,    1,  341,    2, 0x08 /* Private */,
      18,    0,  344,    2, 0x08 /* Private */,
      19,    0,  345,    2, 0x08 /* Private */,
      20,    0,  346,    2, 0x08 /* Private */,
      21,    0,  347,    2, 0x08 /* Private */,
      22,    0,  348,    2, 0x08 /* Private */,
      23,    0,  349,    2, 0x08 /* Private */,
      24,    0,  350,    2, 0x08 /* Private */,
      25,    0,  351,    2, 0x08 /* Private */,
      26,    0,  352,    2, 0x08 /* Private */,
      27,    0,  353,    2, 0x08 /* Private */,
      28,    0,  354,    2, 0x08 /* Private */,
      29,    0,  355,    2, 0x08 /* Private */,
      30,    0,  356,    2, 0x08 /* Private */,
      31,    0,  357,    2, 0x08 /* Private */,
      32,    0,  358,    2, 0x08 /* Private */,
      33,    0,  359,    2, 0x08 /* Private */,
      34,    0,  360,    2, 0x08 /* Private */,
      35,    0,  361,    2, 0x08 /* Private */,
      36,    0,  362,    2, 0x08 /* Private */,
      37,    0,  363,    2, 0x08 /* Private */,
      38,    0,  364,    2, 0x08 /* Private */,
      39,    0,  365,    2, 0x08 /* Private */,
      40,    0,  366,    2, 0x08 /* Private */,
      41,    0,  367,    2, 0x08 /* Private */,
      42,    0,  368,    2, 0x08 /* Private */,
      43,    0,  369,    2, 0x08 /* Private */,
      44,    0,  370,    2, 0x08 /* Private */,
      45,    0,  371,    2, 0x08 /* Private */,
      46,    0,  372,    2, 0x08 /* Private */,
      47,    1,  373,    2, 0x08 /* Private */,
      49,    1,  376,    2, 0x08 /* Private */,
      50,    1,  379,    2, 0x08 /* Private */,
      51,    0,  382,    2, 0x08 /* Private */,
      52,    0,  383,    2, 0x08 /* Private */,
      53,    0,  384,    2, 0x08 /* Private */,
      54,    0,  385,    2, 0x08 /* Private */,
      55,    0,  386,    2, 0x08 /* Private */,
      56,    1,  387,    2, 0x08 /* Private */,
      57,    1,  390,    2, 0x08 /* Private */,
      58,    0,  393,    2, 0x08 /* Private */,
      59,    0,  394,    2, 0x08 /* Private */,
      60,    1,  395,    2, 0x08 /* Private */,
      61,    1,  398,    2, 0x08 /* Private */,
      62,    1,  401,    2, 0x08 /* Private */,
      63,    1,  404,    2, 0x08 /* Private */,
      64,    1,  407,    2, 0x08 /* Private */,
      65,    1,  410,    2, 0x08 /* Private */,
      66,    0,  413,    2, 0x08 /* Private */,
      67,    0,  414,    2, 0x08 /* Private */,
      68,    1,  415,    2, 0x08 /* Private */,
      69,    1,  418,    2, 0x08 /* Private */,
      71,    1,  421,    2, 0x08 /* Private */,
      72,    1,  424,    2, 0x08 /* Private */,
      73,    1,  427,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    8,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 17,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   70,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   48,
    QMetaType::Void, QMetaType::Bool,   74,

       0        // eod
};

void JokerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JokerWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeCounter((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 1: _t->showMediaPanel(); break;
        case 2: _t->hideMediaPanel(); break;
        case 3: _t->onPaint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->onVideoSync(); break;
        case 5: _t->setCurrentTime((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 6: _t->setCurrentRate((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        case 7: _t->onTimecodeTypeChanged((*reinterpret_cast< PhTimeCodeType(*)>(_a[1]))); break;
        case 8: _t->on_actionOpen_triggered(); break;
        case 9: _t->on_actionPlay_pause_triggered(); break;
        case 10: _t->on_actionPlay_backward_triggered(); break;
        case 11: _t->on_actionStep_forward_triggered(); break;
        case 12: _t->on_actionStep_backward_triggered(); break;
        case 13: _t->on_actionStep_time_forward_triggered(); break;
        case 14: _t->on_actionStep_time_backward_triggered(); break;
        case 15: _t->on_action_3_triggered(); break;
        case 16: _t->on_action_1_triggered(); break;
        case 17: _t->on_action_0_5_triggered(); break;
        case 18: _t->on_action0_triggered(); break;
        case 19: _t->on_action0_5_triggered(); break;
        case 20: _t->on_action1_triggered(); break;
        case 21: _t->on_action3_triggered(); break;
        case 22: _t->on_actionOpen_Video_triggered(); break;
        case 23: _t->on_actionChange_timestamp_triggered(); break;
        case 24: _t->on_actionAbout_triggered(); break;
        case 25: _t->on_actionPreferences_triggered(); break;
        case 26: _t->on_actionClear_list_triggered(); break;
        case 27: _t->on_actionProperties_triggered(); break;
        case 28: _t->on_actionTest_mode_triggered(); break;
        case 29: _t->on_actionTimecode_triggered(); break;
        case 30: _t->on_actionNext_element_triggered(); break;
        case 31: _t->on_actionPrevious_element_triggered(); break;
        case 32: _t->on_actionSave_triggered(); break;
        case 33: _t->on_actionSave_as_triggered(); break;
        case 34: _t->on_actionExport_Video_triggered(); break;
        case 35: _t->on_actionAdd_text_triggered(); break;
        case 36: _t->on_actionSelect_character_triggered(); break;
        case 37: _t->on_actionForce_16_9_ratio_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 38: _t->on_actionInvert_colors_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 39: _t->on_actionDisplay_feet_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 40: _t->on_actionSet_first_foot_timecode_triggered(); break;
        case 41: _t->on_actionSet_distance_between_two_feet_triggered(); break;
        case 42: _t->on_actionNew_triggered(); break;
        case 43: _t->on_actionClose_video_triggered(); break;
        case 44: _t->on_actionSend_feedback_triggered(); break;
        case 45: _t->on_actionDeinterlace_video_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->on_actionHide_the_rythmo_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 47: _t->on_actionPrevious_loop_triggered(); break;
        case 48: _t->on_actionNext_loop_triggered(); break;
        case 49: _t->on_actionDisplay_the_cuts_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->on_actionDisplay_the_vertical_scale_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->on_actionDisplay_the_control_panel_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 52: _t->on_actionDisplay_the_information_panel_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 53: _t->on_actionHide_selected_peoples_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->on_actionUse_native_video_size_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_actionSet_TC_in_triggered(); break;
        case 56: _t->on_actionSet_TC_out_triggered(); break;
        case 57: _t->on_actionLoop_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->videoFileOpened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->on_actionPicture_in_picture_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 60: _t->on_actionSecond_screen_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 61: _t->onSecondScreenClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject JokerWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<PhEditableDocumentWindow::staticMetaObject>(),
    qt_meta_stringdata_JokerWindow.data,
    qt_meta_data_JokerWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *JokerWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JokerWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_JokerWindow.stringdata0))
        return static_cast<void*>(this);
    return PhEditableDocumentWindow::qt_metacast(_clname);
}

int JokerWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PhEditableDocumentWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 62)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 62;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 62)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 62;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
