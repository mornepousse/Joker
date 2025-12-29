/********************************************************************************
** Form generated from reading UI file 'JokerWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_JOKERWINDOW_H
#define UI_JOKERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../../libs/PhCommonUI/PhHelpMenu.h"
#include "PhGraphic/PhGraphicView.h"

QT_BEGIN_NAMESPACE

class Ui_JokerWindow
{
public:
    QAction *actionOpen;
    QAction *actionAdd_text;
    QAction *actionPlay_pause;
    QAction *actionPlay_backward;
    QAction *actionStep_forward;
    QAction *actionStep_backward;
    QAction *actionStep_time_forward;
    QAction *actionStep_time_backward;
    QAction *action_3;
    QAction *action_1;
    QAction *action_0_5;
    QAction *action0;
    QAction *action0_5;
    QAction *action1;
    QAction *action3;
    QAction *actionOpen_Video;
    QAction *actionChange_timestamp;
    QAction *actionChange_font;
    QAction *actionAbout;
    QAction *actionPreferences;
    QAction *actionProperties;
    QAction *actionTest_mode;
    QAction *actionTimecode;
    QAction *actionNext_text;
    QAction *actionPrevious_text;
    QAction *actionNext_element;
    QAction *actionPrevious_element;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionSelect_character;
    QAction *actionForce_16_9_ratio;
    QAction *actionFullscreen;
    QAction *actionEmpty;
    QAction *actionInvert_colors;
    QAction *actionNew;
    QAction *actionClose_video;
    QAction *actionSend_feedback;
    QAction *actionDeinterlace_video;
    QAction *actionHide_the_rythmo;
    QAction *actionNext_loop;
    QAction *actionPrevious_loop;
    QAction *actionDisplay_the_cuts;
    QAction *actionDisplay_the_vertical_scale;
    QAction *actionDisplay_the_information_panel;
    QAction *actionDisplay_the_control_panel;
    QAction *actionHide_selected_peoples;
    QAction *actionDisplay_feet;
    QAction *actionSet_first_foot_timecode;
    QAction *actionSet_distance_between_two_feet;
    QAction *actionUse_native_video_size;
    QAction *actionSet_TC_in;
    QAction *actionSet_TC_out;
    QAction *actionLoop;
    QAction *actionPicture_in_picture;
    QAction *actionSecond_screen;
    QAction *actionExport_Video;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    PhGraphicView *videoStripView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen_recent;
    QMenu *menuEdit;
    QMenu *menuControl;
    QMenu *menuVarial_Speed;
    QMenu *menuGo_to;
    QMenu *menuView;
    PhHelpMenu *menuHelp;
    QMenu *menuVideo;
    QMenu *menuRythmo;

    void setupUi(QMainWindow *JokerWindow)
    {
        if (JokerWindow->objectName().isEmpty())
            JokerWindow->setObjectName(QString::fromUtf8("JokerWindow"));
        JokerWindow->resize(820, 648);
        actionOpen = new QAction(JokerWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionAdd_text = new QAction(JokerWindow);
        actionAdd_text->setObjectName(QString::fromUtf8("actionAdd_text"));
        actionPlay_pause = new QAction(JokerWindow);
        actionPlay_pause->setObjectName(QString::fromUtf8("actionPlay_pause"));
        actionPlay_backward = new QAction(JokerWindow);
        actionPlay_backward->setObjectName(QString::fromUtf8("actionPlay_backward"));
        actionStep_forward = new QAction(JokerWindow);
        actionStep_forward->setObjectName(QString::fromUtf8("actionStep_forward"));
        actionStep_backward = new QAction(JokerWindow);
        actionStep_backward->setObjectName(QString::fromUtf8("actionStep_backward"));
        actionStep_time_forward = new QAction(JokerWindow);
        actionStep_time_forward->setObjectName(QString::fromUtf8("actionStep_time_forward"));
        actionStep_time_backward = new QAction(JokerWindow);
        actionStep_time_backward->setObjectName(QString::fromUtf8("actionStep_time_backward"));
        action_3 = new QAction(JokerWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_3->setText(QString::fromUtf8("-3"));
        action_1 = new QAction(JokerWindow);
        action_1->setObjectName(QString::fromUtf8("action_1"));
        action_1->setText(QString::fromUtf8("-1"));
        action_0_5 = new QAction(JokerWindow);
        action_0_5->setObjectName(QString::fromUtf8("action_0_5"));
        action_0_5->setText(QString::fromUtf8("-0.5"));
        action0 = new QAction(JokerWindow);
        action0->setObjectName(QString::fromUtf8("action0"));
        action0->setText(QString::fromUtf8("0"));
        action0_5 = new QAction(JokerWindow);
        action0_5->setObjectName(QString::fromUtf8("action0_5"));
        action0_5->setText(QString::fromUtf8("0.5"));
        action1 = new QAction(JokerWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        action1->setText(QString::fromUtf8("1"));
        action3 = new QAction(JokerWindow);
        action3->setObjectName(QString::fromUtf8("action3"));
        action3->setText(QString::fromUtf8("3"));
        actionOpen_Video = new QAction(JokerWindow);
        actionOpen_Video->setObjectName(QString::fromUtf8("actionOpen_Video"));
        actionChange_timestamp = new QAction(JokerWindow);
        actionChange_timestamp->setObjectName(QString::fromUtf8("actionChange_timestamp"));
        actionChange_font = new QAction(JokerWindow);
        actionChange_font->setObjectName(QString::fromUtf8("actionChange_font"));
        actionAbout = new QAction(JokerWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionPreferences = new QAction(JokerWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionProperties = new QAction(JokerWindow);
        actionProperties->setObjectName(QString::fromUtf8("actionProperties"));
        actionTest_mode = new QAction(JokerWindow);
        actionTest_mode->setObjectName(QString::fromUtf8("actionTest_mode"));
        actionTest_mode->setCheckable(true);
        actionTimecode = new QAction(JokerWindow);
        actionTimecode->setObjectName(QString::fromUtf8("actionTimecode"));
        actionNext_text = new QAction(JokerWindow);
        actionNext_text->setObjectName(QString::fromUtf8("actionNext_text"));
        actionPrevious_text = new QAction(JokerWindow);
        actionPrevious_text->setObjectName(QString::fromUtf8("actionPrevious_text"));
        actionNext_element = new QAction(JokerWindow);
        actionNext_element->setObjectName(QString::fromUtf8("actionNext_element"));
        actionPrevious_element = new QAction(JokerWindow);
        actionPrevious_element->setObjectName(QString::fromUtf8("actionPrevious_element"));
        actionSave = new QAction(JokerWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(true);
        actionSave_as = new QAction(JokerWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionSave_as->setEnabled(true);
        actionSelect_character = new QAction(JokerWindow);
        actionSelect_character->setObjectName(QString::fromUtf8("actionSelect_character"));
        actionForce_16_9_ratio = new QAction(JokerWindow);
        actionForce_16_9_ratio->setObjectName(QString::fromUtf8("actionForce_16_9_ratio"));
        actionForce_16_9_ratio->setCheckable(true);
        actionFullscreen = new QAction(JokerWindow);
        actionFullscreen->setObjectName(QString::fromUtf8("actionFullscreen"));
        actionFullscreen->setCheckable(true);
        actionEmpty = new QAction(JokerWindow);
        actionEmpty->setObjectName(QString::fromUtf8("actionEmpty"));
        actionEmpty->setEnabled(false);
        actionInvert_colors = new QAction(JokerWindow);
        actionInvert_colors->setObjectName(QString::fromUtf8("actionInvert_colors"));
        actionInvert_colors->setCheckable(true);
        actionNew = new QAction(JokerWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        actionClose_video = new QAction(JokerWindow);
        actionClose_video->setObjectName(QString::fromUtf8("actionClose_video"));
        actionSend_feedback = new QAction(JokerWindow);
        actionSend_feedback->setObjectName(QString::fromUtf8("actionSend_feedback"));
        actionDeinterlace_video = new QAction(JokerWindow);
        actionDeinterlace_video->setObjectName(QString::fromUtf8("actionDeinterlace_video"));
        actionDeinterlace_video->setCheckable(true);
        actionHide_the_rythmo = new QAction(JokerWindow);
        actionHide_the_rythmo->setObjectName(QString::fromUtf8("actionHide_the_rythmo"));
        actionHide_the_rythmo->setCheckable(true);
        actionNext_loop = new QAction(JokerWindow);
        actionNext_loop->setObjectName(QString::fromUtf8("actionNext_loop"));
        actionPrevious_loop = new QAction(JokerWindow);
        actionPrevious_loop->setObjectName(QString::fromUtf8("actionPrevious_loop"));
        actionDisplay_the_cuts = new QAction(JokerWindow);
        actionDisplay_the_cuts->setObjectName(QString::fromUtf8("actionDisplay_the_cuts"));
        actionDisplay_the_cuts->setCheckable(true);
        actionDisplay_the_vertical_scale = new QAction(JokerWindow);
        actionDisplay_the_vertical_scale->setObjectName(QString::fromUtf8("actionDisplay_the_vertical_scale"));
        actionDisplay_the_vertical_scale->setCheckable(true);
        actionDisplay_the_information_panel = new QAction(JokerWindow);
        actionDisplay_the_information_panel->setObjectName(QString::fromUtf8("actionDisplay_the_information_panel"));
        actionDisplay_the_information_panel->setCheckable(true);
        actionDisplay_the_control_panel = new QAction(JokerWindow);
        actionDisplay_the_control_panel->setObjectName(QString::fromUtf8("actionDisplay_the_control_panel"));
        actionDisplay_the_control_panel->setCheckable(true);
        actionHide_selected_peoples = new QAction(JokerWindow);
        actionHide_selected_peoples->setObjectName(QString::fromUtf8("actionHide_selected_peoples"));
        actionHide_selected_peoples->setCheckable(true);
        actionDisplay_feet = new QAction(JokerWindow);
        actionDisplay_feet->setObjectName(QString::fromUtf8("actionDisplay_feet"));
        actionDisplay_feet->setCheckable(true);
        actionSet_first_foot_timecode = new QAction(JokerWindow);
        actionSet_first_foot_timecode->setObjectName(QString::fromUtf8("actionSet_first_foot_timecode"));
        actionSet_distance_between_two_feet = new QAction(JokerWindow);
        actionSet_distance_between_two_feet->setObjectName(QString::fromUtf8("actionSet_distance_between_two_feet"));
        actionUse_native_video_size = new QAction(JokerWindow);
        actionUse_native_video_size->setObjectName(QString::fromUtf8("actionUse_native_video_size"));
        actionUse_native_video_size->setCheckable(true);
        actionSet_TC_in = new QAction(JokerWindow);
        actionSet_TC_in->setObjectName(QString::fromUtf8("actionSet_TC_in"));
        actionSet_TC_out = new QAction(JokerWindow);
        actionSet_TC_out->setObjectName(QString::fromUtf8("actionSet_TC_out"));
        actionLoop = new QAction(JokerWindow);
        actionLoop->setObjectName(QString::fromUtf8("actionLoop"));
        actionLoop->setCheckable(true);
        actionPicture_in_picture = new QAction(JokerWindow);
        actionPicture_in_picture->setObjectName(QString::fromUtf8("actionPicture_in_picture"));
        actionPicture_in_picture->setCheckable(true);
        actionSecond_screen = new QAction(JokerWindow);
        actionSecond_screen->setObjectName(QString::fromUtf8("actionSecond_screen"));
        actionSecond_screen->setCheckable(true);
        actionExport_Video = new QAction(JokerWindow);
        actionExport_Video->setObjectName(QString::fromUtf8("actionExport_Video"));
        centralwidget = new QWidget(JokerWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        videoStripView = new PhGraphicView(centralwidget);
        videoStripView->setObjectName(QString::fromUtf8("videoStripView"));

        verticalLayout->addWidget(videoStripView);

        verticalLayout->setStretch(0, 1);
        JokerWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(JokerWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 820, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen_recent = new QMenu(menuFile);
        menuOpen_recent->setObjectName(QString::fromUtf8("menuOpen_recent"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuControl = new QMenu(menubar);
        menuControl->setObjectName(QString::fromUtf8("menuControl"));
        menuVarial_Speed = new QMenu(menuControl);
        menuVarial_Speed->setObjectName(QString::fromUtf8("menuVarial_Speed"));
        menuGo_to = new QMenu(menuControl);
        menuGo_to->setObjectName(QString::fromUtf8("menuGo_to"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuHelp = new PhHelpMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuVideo = new QMenu(menubar);
        menuVideo->setObjectName(QString::fromUtf8("menuVideo"));
        menuRythmo = new QMenu(menubar);
        menuRythmo->setObjectName(QString::fromUtf8("menuRythmo"));
        JokerWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuControl->menuAction());
        menubar->addAction(menuRythmo->menuAction());
        menubar->addAction(menuVideo->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuOpen_recent->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionOpen_Video);
        menuFile->addAction(actionClose_video);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionExport_Video);
        menuFile->addSeparator();
        menuFile->addAction(actionPreferences);
        menuFile->addAction(actionProperties);
        menuOpen_recent->addAction(actionEmpty);
        menuEdit->addAction(actionAdd_text);
        menuControl->addAction(actionPlay_pause);
        menuControl->addAction(actionPlay_backward);
        menuControl->addAction(actionStep_forward);
        menuControl->addAction(actionStep_backward);
        menuControl->addAction(actionStep_time_forward);
        menuControl->addAction(actionStep_time_backward);
        menuControl->addAction(menuVarial_Speed->menuAction());
        menuControl->addAction(actionChange_timestamp);
        menuControl->addAction(menuGo_to->menuAction());
        menuControl->addSeparator();
        menuControl->addAction(actionSet_TC_in);
        menuControl->addAction(actionSet_TC_out);
        menuControl->addAction(actionLoop);
        menuVarial_Speed->addAction(action_3);
        menuVarial_Speed->addAction(action_1);
        menuVarial_Speed->addAction(action_0_5);
        menuVarial_Speed->addAction(action0);
        menuVarial_Speed->addAction(action0_5);
        menuVarial_Speed->addAction(action1);
        menuVarial_Speed->addAction(action3);
        menuGo_to->addAction(actionTimecode);
        menuGo_to->addAction(actionNext_element);
        menuGo_to->addAction(actionPrevious_element);
        menuGo_to->addAction(actionNext_loop);
        menuGo_to->addAction(actionPrevious_loop);
        menuView->addAction(actionFullscreen);
        menuView->addAction(actionDisplay_the_control_panel);
        menuView->addAction(actionDisplay_the_information_panel);
        menuView->addSeparator();
        menuHelp->addAction(actionSend_feedback);
        menuHelp->addAction(actionAbout);
        menuVideo->addAction(actionForce_16_9_ratio);
        menuVideo->addAction(actionDeinterlace_video);
        menuVideo->addAction(actionUse_native_video_size);
        menuVideo->addAction(actionPicture_in_picture);
        menuVideo->addAction(actionSecond_screen);
        menuRythmo->addAction(actionAdd_text);
        menuRythmo->addAction(actionSelect_character);
        menuRythmo->addAction(actionHide_selected_peoples);
        menuRythmo->addSeparator();
        menuRythmo->addAction(actionHide_the_rythmo);
        menuRythmo->addAction(actionInvert_colors);
        menuRythmo->addAction(actionDisplay_the_cuts);
        menuRythmo->addAction(actionDisplay_the_vertical_scale);
        menuRythmo->addSeparator();
        menuRythmo->addAction(actionDisplay_feet);
        menuRythmo->addAction(actionSet_first_foot_timecode);
        menuRythmo->addAction(actionSet_distance_between_two_feet);

        retranslateUi(JokerWindow);

        QMetaObject::connectSlotsByName(JokerWindow);
    } // setupUi

    void retranslateUi(QMainWindow *JokerWindow)
    {
        JokerWindow->setWindowTitle(QCoreApplication::translate("JokerWindow", "Joker", nullptr));
        actionOpen->setText(QCoreApplication::translate("JokerWindow", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAdd_text->setText(QCoreApplication::translate("JokerWindow", "Add text...", nullptr));
#if QT_CONFIG(shortcut)
        actionAdd_text->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay_pause->setText(QCoreApplication::translate("JokerWindow", "Play/pause", nullptr));
#if QT_CONFIG(shortcut)
        actionPlay_pause->setShortcut(QCoreApplication::translate("JokerWindow", "Space", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay_backward->setText(QCoreApplication::translate("JokerWindow", "Play backward", nullptr));
#if QT_CONFIG(shortcut)
        actionPlay_backward->setShortcut(QCoreApplication::translate("JokerWindow", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_forward->setText(QCoreApplication::translate("JokerWindow", "Step forward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_forward->setShortcut(QCoreApplication::translate("JokerWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_backward->setText(QCoreApplication::translate("JokerWindow", "Step backward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_backward->setShortcut(QCoreApplication::translate("JokerWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_time_forward->setText(QCoreApplication::translate("JokerWindow", "Step time forward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_time_forward->setShortcut(QCoreApplication::translate("JokerWindow", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_time_backward->setText(QCoreApplication::translate("JokerWindow", "Step time backward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_time_backward->setShortcut(QCoreApplication::translate("JokerWindow", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOpen_Video->setText(QCoreApplication::translate("JokerWindow", "Open video file...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen_Video->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChange_timestamp->setText(QCoreApplication::translate("JokerWindow", "Change timestamp...", nullptr));
        actionChange_font->setText(QCoreApplication::translate("JokerWindow", "Change font...", nullptr));
        actionAbout->setText(QCoreApplication::translate("JokerWindow", "About...", nullptr));
        actionPreferences->setText(QCoreApplication::translate("JokerWindow", "Preferences...", nullptr));
        actionProperties->setText(QCoreApplication::translate("JokerWindow", "Properties...", nullptr));
        actionTest_mode->setText(QCoreApplication::translate("JokerWindow", "Test mode", nullptr));
#if QT_CONFIG(tooltip)
        actionTest_mode->setToolTip(QCoreApplication::translate("JokerWindow", "Set Joker on Test mode for syncheck", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionTest_mode->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+Shift+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTimecode->setText(QCoreApplication::translate("JokerWindow", "Timecode...", nullptr));
#if QT_CONFIG(shortcut)
        actionTimecode->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext_text->setText(QCoreApplication::translate("JokerWindow", "Next text", nullptr));
        actionPrevious_text->setText(QCoreApplication::translate("JokerWindow", "Previous text", nullptr));
        actionNext_element->setText(QCoreApplication::translate("JokerWindow", "Next element", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_element->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrevious_element->setText(QCoreApplication::translate("JokerWindow", "Previous element", nullptr));
#if QT_CONFIG(shortcut)
        actionPrevious_element->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("JokerWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("JokerWindow", "Save as...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSelect_character->setText(QCoreApplication::translate("JokerWindow", "Select character...", nullptr));
#if QT_CONFIG(shortcut)
        actionSelect_character->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionForce_16_9_ratio->setText(QCoreApplication::translate("JokerWindow", "Force 16/9 ratio", nullptr));
#if QT_CONFIG(shortcut)
        actionForce_16_9_ratio->setShortcut(QCoreApplication::translate("JokerWindow", "F8", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullscreen->setText(QCoreApplication::translate("JokerWindow", "Fullscreen", nullptr));
#if QT_CONFIG(shortcut)
        actionFullscreen->setShortcut(QCoreApplication::translate("JokerWindow", "F10", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEmpty->setText(QCoreApplication::translate("JokerWindow", "Empty", nullptr));
        actionInvert_colors->setText(QCoreApplication::translate("JokerWindow", "Invert colors", nullptr));
        actionNew->setText(QCoreApplication::translate("JokerWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        actionClose_video->setText(QCoreApplication::translate("JokerWindow", "Close video", nullptr));
        actionSend_feedback->setText(QCoreApplication::translate("JokerWindow", "Send feedback...", nullptr));
        actionDeinterlace_video->setText(QCoreApplication::translate("JokerWindow", "Deinterlace video", nullptr));
        actionHide_the_rythmo->setText(QCoreApplication::translate("JokerWindow", "Hide the rythmo", nullptr));
#if QT_CONFIG(shortcut)
        actionHide_the_rythmo->setShortcut(QCoreApplication::translate("JokerWindow", "F9", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext_loop->setText(QCoreApplication::translate("JokerWindow", "Next loop", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_loop->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrevious_loop->setText(QCoreApplication::translate("JokerWindow", "Previous loop", nullptr));
#if QT_CONFIG(shortcut)
        actionPrevious_loop->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionDisplay_the_cuts->setText(QCoreApplication::translate("JokerWindow", "Display the cuts", nullptr));
        actionDisplay_the_vertical_scale->setText(QCoreApplication::translate("JokerWindow", "Display the vertical scale", nullptr));
        actionDisplay_the_information_panel->setText(QCoreApplication::translate("JokerWindow", "Display the information panel", nullptr));
        actionDisplay_the_control_panel->setText(QCoreApplication::translate("JokerWindow", "Display the control panel", nullptr));
        actionHide_selected_peoples->setText(QCoreApplication::translate("JokerWindow", "Hide selected peoples", nullptr));
        actionDisplay_feet->setText(QCoreApplication::translate("JokerWindow", "Display feet", nullptr));
        actionSet_first_foot_timecode->setText(QCoreApplication::translate("JokerWindow", "Set first foot timecode...", nullptr));
        actionSet_distance_between_two_feet->setText(QCoreApplication::translate("JokerWindow", "Set distance between two feet...", nullptr));
        actionUse_native_video_size->setText(QCoreApplication::translate("JokerWindow", "Use native video size", nullptr));
        actionSet_TC_in->setText(QCoreApplication::translate("JokerWindow", "Set TC in", nullptr));
#if QT_CONFIG(shortcut)
        actionSet_TC_in->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSet_TC_out->setText(QCoreApplication::translate("JokerWindow", "Set TC out", nullptr));
#if QT_CONFIG(shortcut)
        actionSet_TC_out->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLoop->setText(QCoreApplication::translate("JokerWindow", "Loop", nullptr));
#if QT_CONFIG(shortcut)
        actionLoop->setShortcut(QCoreApplication::translate("JokerWindow", "Ctrl+L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPicture_in_picture->setText(QCoreApplication::translate("JokerWindow", "Picture in picture", nullptr));
        actionSecond_screen->setText(QCoreApplication::translate("JokerWindow", "Second screen", nullptr));
        actionExport_Video->setText(QCoreApplication::translate("JokerWindow", "Export Video...", nullptr));
        menuFile->setTitle(QCoreApplication::translate("JokerWindow", "File", nullptr));
        menuOpen_recent->setTitle(QCoreApplication::translate("JokerWindow", "Open recent", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("JokerWindow", "Edit", nullptr));
        menuControl->setTitle(QCoreApplication::translate("JokerWindow", "Control", nullptr));
        menuVarial_Speed->setTitle(QCoreApplication::translate("JokerWindow", "Varispeed", nullptr));
        menuGo_to->setTitle(QCoreApplication::translate("JokerWindow", "Go to", nullptr));
        menuView->setTitle(QCoreApplication::translate("JokerWindow", "View", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("JokerWindow", "Help", nullptr));
        menuVideo->setTitle(QCoreApplication::translate("JokerWindow", "Video", nullptr));
        menuRythmo->setTitle(QCoreApplication::translate("JokerWindow", "Rythmo", nullptr));
    } // retranslateUi

};

namespace Ui {
    class JokerWindow: public Ui_JokerWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_JOKERWINDOW_H
