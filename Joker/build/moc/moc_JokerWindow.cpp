/****************************************************************************
** Meta object code from reading C++ file 'JokerWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.18)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../JokerWindow.h"
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
    QByteArrayData data[82];
    char stringdata0[2030];
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
QT_MOC_LITERAL(5, 44, 14), // "toggleTextList"
QT_MOC_LITERAL(6, 59, 14), // "updateTextList"
QT_MOC_LITERAL(7, 74, 26), // "onTextListSelectionChanged"
QT_MOC_LITERAL(8, 101, 27), // "onTextListItemDoubleClicked"
QT_MOC_LITERAL(9, 129, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(10, 146, 4), // "item"
QT_MOC_LITERAL(11, 151, 6), // "column"
QT_MOC_LITERAL(12, 158, 14), // "showMediaPanel"
QT_MOC_LITERAL(13, 173, 14), // "hideMediaPanel"
QT_MOC_LITERAL(14, 188, 7), // "onPaint"
QT_MOC_LITERAL(15, 196, 5), // "width"
QT_MOC_LITERAL(16, 202, 6), // "height"
QT_MOC_LITERAL(17, 209, 11), // "onVideoSync"
QT_MOC_LITERAL(18, 221, 14), // "setCurrentTime"
QT_MOC_LITERAL(19, 236, 4), // "time"
QT_MOC_LITERAL(20, 241, 14), // "setCurrentRate"
QT_MOC_LITERAL(21, 256, 6), // "PhRate"
QT_MOC_LITERAL(22, 263, 4), // "rate"
QT_MOC_LITERAL(23, 268, 21), // "onTimecodeTypeChanged"
QT_MOC_LITERAL(24, 290, 14), // "PhTimeCodeType"
QT_MOC_LITERAL(25, 305, 23), // "on_actionOpen_triggered"
QT_MOC_LITERAL(26, 329, 29), // "on_actionPlay_pause_triggered"
QT_MOC_LITERAL(27, 359, 32), // "on_actionPlay_backward_triggered"
QT_MOC_LITERAL(28, 392, 31), // "on_actionStep_forward_triggered"
QT_MOC_LITERAL(29, 424, 32), // "on_actionStep_backward_triggered"
QT_MOC_LITERAL(30, 457, 36), // "on_actionStep_time_forward_tr..."
QT_MOC_LITERAL(31, 494, 37), // "on_actionStep_time_backward_t..."
QT_MOC_LITERAL(32, 532, 21), // "on_action_3_triggered"
QT_MOC_LITERAL(33, 554, 21), // "on_action_1_triggered"
QT_MOC_LITERAL(34, 576, 23), // "on_action_0_5_triggered"
QT_MOC_LITERAL(35, 600, 20), // "on_action0_triggered"
QT_MOC_LITERAL(36, 621, 22), // "on_action0_5_triggered"
QT_MOC_LITERAL(37, 644, 20), // "on_action1_triggered"
QT_MOC_LITERAL(38, 665, 20), // "on_action3_triggered"
QT_MOC_LITERAL(39, 686, 29), // "on_actionOpen_Video_triggered"
QT_MOC_LITERAL(40, 716, 35), // "on_actionChange_timestamp_tri..."
QT_MOC_LITERAL(41, 752, 24), // "on_actionAbout_triggered"
QT_MOC_LITERAL(42, 777, 30), // "on_actionPreferences_triggered"
QT_MOC_LITERAL(43, 808, 29), // "on_actionClear_list_triggered"
QT_MOC_LITERAL(44, 838, 29), // "on_actionProperties_triggered"
QT_MOC_LITERAL(45, 868, 28), // "on_actionTest_mode_triggered"
QT_MOC_LITERAL(46, 897, 27), // "on_actionTimecode_triggered"
QT_MOC_LITERAL(47, 925, 31), // "on_actionNext_element_triggered"
QT_MOC_LITERAL(48, 957, 35), // "on_actionPrevious_element_tri..."
QT_MOC_LITERAL(49, 993, 23), // "on_actionSave_triggered"
QT_MOC_LITERAL(50, 1017, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(51, 1044, 31), // "on_actionExport_Video_triggered"
QT_MOC_LITERAL(52, 1076, 27), // "on_actionAdd_text_triggered"
QT_MOC_LITERAL(53, 1104, 35), // "on_actionSelect_character_tri..."
QT_MOC_LITERAL(54, 1140, 35), // "on_actionForce_16_9_ratio_tri..."
QT_MOC_LITERAL(55, 1176, 7), // "checked"
QT_MOC_LITERAL(56, 1184, 30), // "on_actionInvert_colors_toggled"
QT_MOC_LITERAL(57, 1215, 31), // "on_actionDisplay_feet_triggered"
QT_MOC_LITERAL(58, 1247, 42), // "on_actionSet_first_foot_timec..."
QT_MOC_LITERAL(59, 1290, 48), // "on_actionSet_distance_between..."
QT_MOC_LITERAL(60, 1339, 22), // "on_actionNew_triggered"
QT_MOC_LITERAL(61, 1362, 30), // "on_actionClose_video_triggered"
QT_MOC_LITERAL(62, 1393, 32), // "on_actionSend_feedback_triggered"
QT_MOC_LITERAL(63, 1426, 36), // "on_actionDeinterlace_video_tr..."
QT_MOC_LITERAL(64, 1463, 34), // "on_actionHide_the_rythmo_trig..."
QT_MOC_LITERAL(65, 1498, 32), // "on_actionPrevious_loop_triggered"
QT_MOC_LITERAL(66, 1531, 28), // "on_actionNext_loop_triggered"
QT_MOC_LITERAL(67, 1560, 33), // "on_actionDisplay_the_cuts_tog..."
QT_MOC_LITERAL(68, 1594, 45), // "on_actionDisplay_the_vertical..."
QT_MOC_LITERAL(69, 1640, 44), // "on_actionDisplay_the_control_..."
QT_MOC_LITERAL(70, 1685, 48), // "on_actionDisplay_the_informat..."
QT_MOC_LITERAL(71, 1734, 40), // "on_actionHide_selected_people..."
QT_MOC_LITERAL(72, 1775, 40), // "on_actionUse_native_video_siz..."
QT_MOC_LITERAL(73, 1816, 28), // "on_actionSet_TC_in_triggered"
QT_MOC_LITERAL(74, 1845, 29), // "on_actionSet_TC_out_triggered"
QT_MOC_LITERAL(75, 1875, 23), // "on_actionLoop_triggered"
QT_MOC_LITERAL(76, 1899, 15), // "videoFileOpened"
QT_MOC_LITERAL(77, 1915, 7), // "success"
QT_MOC_LITERAL(78, 1923, 37), // "on_actionPicture_in_picture_t..."
QT_MOC_LITERAL(79, 1961, 32), // "on_actionSecond_screen_triggered"
QT_MOC_LITERAL(80, 1994, 20), // "onSecondScreenClosed"
QT_MOC_LITERAL(81, 2015, 14) // "closedFromUser"

    },
    "JokerWindow\0timeCounter\0\0PhTime\0"
    "elapsedTime\0toggleTextList\0updateTextList\0"
    "onTextListSelectionChanged\0"
    "onTextListItemDoubleClicked\0"
    "QTreeWidgetItem*\0item\0column\0"
    "showMediaPanel\0hideMediaPanel\0onPaint\0"
    "width\0height\0onVideoSync\0setCurrentTime\0"
    "time\0setCurrentRate\0PhRate\0rate\0"
    "onTimecodeTypeChanged\0PhTimeCodeType\0"
    "on_actionOpen_triggered\0"
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
      66,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,  344,    2, 0x0a /* Public */,
       5,    0,  347,    2, 0x0a /* Public */,
       6,    0,  348,    2, 0x0a /* Public */,
       7,    0,  349,    2, 0x0a /* Public */,
       8,    2,  350,    2, 0x0a /* Public */,
      12,    0,  355,    2, 0x08 /* Private */,
      13,    0,  356,    2, 0x08 /* Private */,
      14,    2,  357,    2, 0x08 /* Private */,
      17,    0,  362,    2, 0x08 /* Private */,
      18,    1,  363,    2, 0x08 /* Private */,
      20,    1,  366,    2, 0x08 /* Private */,
      23,    1,  369,    2, 0x08 /* Private */,
      25,    0,  372,    2, 0x08 /* Private */,
      26,    0,  373,    2, 0x08 /* Private */,
      27,    0,  374,    2, 0x08 /* Private */,
      28,    0,  375,    2, 0x08 /* Private */,
      29,    0,  376,    2, 0x08 /* Private */,
      30,    0,  377,    2, 0x08 /* Private */,
      31,    0,  378,    2, 0x08 /* Private */,
      32,    0,  379,    2, 0x08 /* Private */,
      33,    0,  380,    2, 0x08 /* Private */,
      34,    0,  381,    2, 0x08 /* Private */,
      35,    0,  382,    2, 0x08 /* Private */,
      36,    0,  383,    2, 0x08 /* Private */,
      37,    0,  384,    2, 0x08 /* Private */,
      38,    0,  385,    2, 0x08 /* Private */,
      39,    0,  386,    2, 0x08 /* Private */,
      40,    0,  387,    2, 0x08 /* Private */,
      41,    0,  388,    2, 0x08 /* Private */,
      42,    0,  389,    2, 0x08 /* Private */,
      43,    0,  390,    2, 0x08 /* Private */,
      44,    0,  391,    2, 0x08 /* Private */,
      45,    0,  392,    2, 0x08 /* Private */,
      46,    0,  393,    2, 0x08 /* Private */,
      47,    0,  394,    2, 0x08 /* Private */,
      48,    0,  395,    2, 0x08 /* Private */,
      49,    0,  396,    2, 0x08 /* Private */,
      50,    0,  397,    2, 0x08 /* Private */,
      51,    0,  398,    2, 0x08 /* Private */,
      52,    0,  399,    2, 0x08 /* Private */,
      53,    0,  400,    2, 0x08 /* Private */,
      54,    1,  401,    2, 0x08 /* Private */,
      56,    1,  404,    2, 0x08 /* Private */,
      57,    1,  407,    2, 0x08 /* Private */,
      58,    0,  410,    2, 0x08 /* Private */,
      59,    0,  411,    2, 0x08 /* Private */,
      60,    0,  412,    2, 0x08 /* Private */,
      61,    0,  413,    2, 0x08 /* Private */,
      62,    0,  414,    2, 0x08 /* Private */,
      63,    1,  415,    2, 0x08 /* Private */,
      64,    1,  418,    2, 0x08 /* Private */,
      65,    0,  421,    2, 0x08 /* Private */,
      66,    0,  422,    2, 0x08 /* Private */,
      67,    1,  423,    2, 0x08 /* Private */,
      68,    1,  426,    2, 0x08 /* Private */,
      69,    1,  429,    2, 0x08 /* Private */,
      70,    1,  432,    2, 0x08 /* Private */,
      71,    1,  435,    2, 0x08 /* Private */,
      72,    1,  438,    2, 0x08 /* Private */,
      73,    0,  441,    2, 0x08 /* Private */,
      74,    0,  442,    2, 0x08 /* Private */,
      75,    1,  443,    2, 0x08 /* Private */,
      76,    1,  446,    2, 0x08 /* Private */,
      78,    1,  449,    2, 0x08 /* Private */,
      79,    1,  452,    2, 0x08 /* Private */,
      80,    1,  455,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int,   10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   15,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void, 0x80000000 | 24,    2,
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
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   77,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   55,
    QMetaType::Void, QMetaType::Bool,   81,

       0        // eod
};

void JokerWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JokerWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->timeCounter((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 1: _t->toggleTextList(); break;
        case 2: _t->updateTextList(); break;
        case 3: _t->onTextListSelectionChanged(); break;
        case 4: _t->onTextListItemDoubleClicked((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->showMediaPanel(); break;
        case 6: _t->hideMediaPanel(); break;
        case 7: _t->onPaint((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->onVideoSync(); break;
        case 9: _t->setCurrentTime((*reinterpret_cast< PhTime(*)>(_a[1]))); break;
        case 10: _t->setCurrentRate((*reinterpret_cast< PhRate(*)>(_a[1]))); break;
        case 11: _t->onTimecodeTypeChanged((*reinterpret_cast< PhTimeCodeType(*)>(_a[1]))); break;
        case 12: _t->on_actionOpen_triggered(); break;
        case 13: _t->on_actionPlay_pause_triggered(); break;
        case 14: _t->on_actionPlay_backward_triggered(); break;
        case 15: _t->on_actionStep_forward_triggered(); break;
        case 16: _t->on_actionStep_backward_triggered(); break;
        case 17: _t->on_actionStep_time_forward_triggered(); break;
        case 18: _t->on_actionStep_time_backward_triggered(); break;
        case 19: _t->on_action_3_triggered(); break;
        case 20: _t->on_action_1_triggered(); break;
        case 21: _t->on_action_0_5_triggered(); break;
        case 22: _t->on_action0_triggered(); break;
        case 23: _t->on_action0_5_triggered(); break;
        case 24: _t->on_action1_triggered(); break;
        case 25: _t->on_action3_triggered(); break;
        case 26: _t->on_actionOpen_Video_triggered(); break;
        case 27: _t->on_actionChange_timestamp_triggered(); break;
        case 28: _t->on_actionAbout_triggered(); break;
        case 29: _t->on_actionPreferences_triggered(); break;
        case 30: _t->on_actionClear_list_triggered(); break;
        case 31: _t->on_actionProperties_triggered(); break;
        case 32: _t->on_actionTest_mode_triggered(); break;
        case 33: _t->on_actionTimecode_triggered(); break;
        case 34: _t->on_actionNext_element_triggered(); break;
        case 35: _t->on_actionPrevious_element_triggered(); break;
        case 36: _t->on_actionSave_triggered(); break;
        case 37: _t->on_actionSave_as_triggered(); break;
        case 38: _t->on_actionExport_Video_triggered(); break;
        case 39: _t->on_actionAdd_text_triggered(); break;
        case 40: _t->on_actionSelect_character_triggered(); break;
        case 41: _t->on_actionForce_16_9_ratio_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_actionInvert_colors_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 43: _t->on_actionDisplay_feet_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 44: _t->on_actionSet_first_foot_timecode_triggered(); break;
        case 45: _t->on_actionSet_distance_between_two_feet_triggered(); break;
        case 46: _t->on_actionNew_triggered(); break;
        case 47: _t->on_actionClose_video_triggered(); break;
        case 48: _t->on_actionSend_feedback_triggered(); break;
        case 49: _t->on_actionDeinterlace_video_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 50: _t->on_actionHide_the_rythmo_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->on_actionPrevious_loop_triggered(); break;
        case 52: _t->on_actionNext_loop_triggered(); break;
        case 53: _t->on_actionDisplay_the_cuts_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 54: _t->on_actionDisplay_the_vertical_scale_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 55: _t->on_actionDisplay_the_control_panel_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: _t->on_actionDisplay_the_information_panel_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 57: _t->on_actionHide_selected_peoples_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 58: _t->on_actionUse_native_video_size_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 59: _t->on_actionSet_TC_in_triggered(); break;
        case 60: _t->on_actionSet_TC_out_triggered(); break;
        case 61: _t->on_actionLoop_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 62: _t->videoFileOpened((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 63: _t->on_actionPicture_in_picture_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 64: _t->on_actionSecond_screen_triggered((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->onSecondScreenClosed((*reinterpret_cast< bool(*)>(_a[1]))); break;
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
        if (_id < 66)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 66;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 66)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 66;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
