/********************************************************************************
** Form generated from reading UI file 'GraphicStripTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSTRIPTESTWINDOW_H
#define UI_GRAPHICSTRIPTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PhGraphic/PhGraphicView.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicStripTestWindow
{
public:
    QAction *actionOpen;
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
    QAction *actionGo_to;
    QAction *actionChange_font;
    QAction *actionPrevious_Element;
    QAction *actionNext_Element;
    QAction *actionStrip_Properties;
    QAction *actionGenerate;
    QAction *actionPreferences;
    QAction *actionEmpty;
    QAction *actionFull_screen;
    QAction *actionInvert_colors;
    QAction *actionRuler;
    QAction *actionChange_ruler_timestamp;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionNew;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_3;
    PhGraphicView *stripView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen_recent;
    QMenu *menuControl;
    QMenu *menuVarial_Speed;
    QMenu *menuGo;
    QMenu *menuDisplay;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *GraphicStripTestWindow)
    {
        if (GraphicStripTestWindow->objectName().isEmpty())
            GraphicStripTestWindow->setObjectName(QString::fromUtf8("GraphicStripTestWindow"));
        GraphicStripTestWindow->resize(991, 340);
        actionOpen = new QAction(GraphicStripTestWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionPlay_pause = new QAction(GraphicStripTestWindow);
        actionPlay_pause->setObjectName(QString::fromUtf8("actionPlay_pause"));
        actionPlay_backward = new QAction(GraphicStripTestWindow);
        actionPlay_backward->setObjectName(QString::fromUtf8("actionPlay_backward"));
        actionStep_forward = new QAction(GraphicStripTestWindow);
        actionStep_forward->setObjectName(QString::fromUtf8("actionStep_forward"));
        actionStep_backward = new QAction(GraphicStripTestWindow);
        actionStep_backward->setObjectName(QString::fromUtf8("actionStep_backward"));
        actionStep_time_forward = new QAction(GraphicStripTestWindow);
        actionStep_time_forward->setObjectName(QString::fromUtf8("actionStep_time_forward"));
        actionStep_time_backward = new QAction(GraphicStripTestWindow);
        actionStep_time_backward->setObjectName(QString::fromUtf8("actionStep_time_backward"));
        action_3 = new QAction(GraphicStripTestWindow);
        action_3->setObjectName(QString::fromUtf8("action_3"));
        action_1 = new QAction(GraphicStripTestWindow);
        action_1->setObjectName(QString::fromUtf8("action_1"));
        action_0_5 = new QAction(GraphicStripTestWindow);
        action_0_5->setObjectName(QString::fromUtf8("action_0_5"));
        action0 = new QAction(GraphicStripTestWindow);
        action0->setObjectName(QString::fromUtf8("action0"));
        action0_5 = new QAction(GraphicStripTestWindow);
        action0_5->setObjectName(QString::fromUtf8("action0_5"));
        action1 = new QAction(GraphicStripTestWindow);
        action1->setObjectName(QString::fromUtf8("action1"));
        action3 = new QAction(GraphicStripTestWindow);
        action3->setObjectName(QString::fromUtf8("action3"));
        actionGo_to = new QAction(GraphicStripTestWindow);
        actionGo_to->setObjectName(QString::fromUtf8("actionGo_to"));
        actionChange_font = new QAction(GraphicStripTestWindow);
        actionChange_font->setObjectName(QString::fromUtf8("actionChange_font"));
        actionPrevious_Element = new QAction(GraphicStripTestWindow);
        actionPrevious_Element->setObjectName(QString::fromUtf8("actionPrevious_Element"));
        actionNext_Element = new QAction(GraphicStripTestWindow);
        actionNext_Element->setObjectName(QString::fromUtf8("actionNext_Element"));
        actionStrip_Properties = new QAction(GraphicStripTestWindow);
        actionStrip_Properties->setObjectName(QString::fromUtf8("actionStrip_Properties"));
        actionGenerate = new QAction(GraphicStripTestWindow);
        actionGenerate->setObjectName(QString::fromUtf8("actionGenerate"));
        actionPreferences = new QAction(GraphicStripTestWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionEmpty = new QAction(GraphicStripTestWindow);
        actionEmpty->setObjectName(QString::fromUtf8("actionEmpty"));
        actionEmpty->setEnabled(false);
        actionFull_screen = new QAction(GraphicStripTestWindow);
        actionFull_screen->setObjectName(QString::fromUtf8("actionFull_screen"));
        actionInvert_colors = new QAction(GraphicStripTestWindow);
        actionInvert_colors->setObjectName(QString::fromUtf8("actionInvert_colors"));
        actionInvert_colors->setCheckable(true);
        actionRuler = new QAction(GraphicStripTestWindow);
        actionRuler->setObjectName(QString::fromUtf8("actionRuler"));
        actionRuler->setCheckable(true);
        actionChange_ruler_timestamp = new QAction(GraphicStripTestWindow);
        actionChange_ruler_timestamp->setObjectName(QString::fromUtf8("actionChange_ruler_timestamp"));
        actionSave = new QAction(GraphicStripTestWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(GraphicStripTestWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionNew = new QAction(GraphicStripTestWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        centralwidget = new QWidget(GraphicStripTestWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(5, -1, 5, -1);
        stripView = new PhGraphicView(centralwidget);
        stripView->setObjectName(QString::fromUtf8("stripView"));

        verticalLayout_3->addWidget(stripView);


        horizontalLayout->addLayout(verticalLayout_3);

        GraphicStripTestWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GraphicStripTestWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 991, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen_recent = new QMenu(menuFile);
        menuOpen_recent->setObjectName(QString::fromUtf8("menuOpen_recent"));
        menuControl = new QMenu(menubar);
        menuControl->setObjectName(QString::fromUtf8("menuControl"));
        menuVarial_Speed = new QMenu(menuControl);
        menuVarial_Speed->setObjectName(QString::fromUtf8("menuVarial_Speed"));
        menuGo = new QMenu(menuControl);
        menuGo->setObjectName(QString::fromUtf8("menuGo"));
        menuDisplay = new QMenu(menubar);
        menuDisplay->setObjectName(QString::fromUtf8("menuDisplay"));
        GraphicStripTestWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(GraphicStripTestWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        GraphicStripTestWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuControl->menuAction());
        menubar->addAction(menuDisplay->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addSeparator();
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuOpen_recent->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuFile->addAction(actionGenerate);
        menuFile->addAction(actionStrip_Properties);
        menuOpen_recent->addAction(actionEmpty);
        menuControl->addAction(actionPlay_pause);
        menuControl->addAction(actionPlay_backward);
        menuControl->addAction(actionStep_forward);
        menuControl->addAction(actionStep_backward);
        menuControl->addAction(actionStep_time_forward);
        menuControl->addAction(actionStep_time_backward);
        menuControl->addAction(menuVarial_Speed->menuAction());
        menuControl->addAction(menuGo->menuAction());
        menuVarial_Speed->addAction(action_3);
        menuVarial_Speed->addAction(action_1);
        menuVarial_Speed->addAction(action_0_5);
        menuVarial_Speed->addAction(action0);
        menuVarial_Speed->addAction(action0_5);
        menuVarial_Speed->addAction(action1);
        menuVarial_Speed->addAction(action3);
        menuGo->addAction(actionGo_to);
        menuGo->addAction(actionPrevious_Element);
        menuGo->addAction(actionNext_Element);
        menuDisplay->addAction(actionInvert_colors);
        menuDisplay->addAction(actionChange_font);
        menuDisplay->addAction(actionFull_screen);
        menuDisplay->addSeparator();
        menuDisplay->addAction(actionRuler);
        menuDisplay->addAction(actionChange_ruler_timestamp);

        retranslateUi(GraphicStripTestWindow);

        QMetaObject::connectSlotsByName(GraphicStripTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GraphicStripTestWindow)
    {
        GraphicStripTestWindow->setWindowTitle(QCoreApplication::translate("GraphicStripTestWindow", "GraphicStripTest", nullptr));
        actionOpen->setText(QCoreApplication::translate("GraphicStripTestWindow", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay_pause->setText(QCoreApplication::translate("GraphicStripTestWindow", "Play/pause", nullptr));
#if QT_CONFIG(shortcut)
        actionPlay_pause->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay_backward->setText(QCoreApplication::translate("GraphicStripTestWindow", "Play backward", nullptr));
#if QT_CONFIG(shortcut)
        actionPlay_backward->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_forward->setText(QCoreApplication::translate("GraphicStripTestWindow", "Step forward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_forward->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_backward->setText(QCoreApplication::translate("GraphicStripTestWindow", "Step backward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_backward->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_time_forward->setText(QCoreApplication::translate("GraphicStripTestWindow", "Step time forward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_time_forward->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStep_time_backward->setText(QCoreApplication::translate("GraphicStripTestWindow", "Step time backward", nullptr));
#if QT_CONFIG(shortcut)
        actionStep_time_backward->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        action_3->setText(QCoreApplication::translate("GraphicStripTestWindow", "-3", nullptr));
        action_1->setText(QCoreApplication::translate("GraphicStripTestWindow", "-1", nullptr));
        action_0_5->setText(QCoreApplication::translate("GraphicStripTestWindow", "-0.5", nullptr));
        action0->setText(QCoreApplication::translate("GraphicStripTestWindow", "0", nullptr));
        action0_5->setText(QCoreApplication::translate("GraphicStripTestWindow", "0.5", nullptr));
        action1->setText(QCoreApplication::translate("GraphicStripTestWindow", "1", nullptr));
        action3->setText(QCoreApplication::translate("GraphicStripTestWindow", "3", nullptr));
        actionGo_to->setText(QCoreApplication::translate("GraphicStripTestWindow", "Go to", nullptr));
#if QT_CONFIG(shortcut)
        actionGo_to->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+G", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChange_font->setText(QCoreApplication::translate("GraphicStripTestWindow", "Change font...", nullptr));
#if QT_CONFIG(shortcut)
        actionChange_font->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrevious_Element->setText(QCoreApplication::translate("GraphicStripTestWindow", "Previous Element", nullptr));
#if QT_CONFIG(shortcut)
        actionPrevious_Element->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext_Element->setText(QCoreApplication::translate("GraphicStripTestWindow", "Next Element", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_Element->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionStrip_Properties->setText(QCoreApplication::translate("GraphicStripTestWindow", "Properties...", nullptr));
        actionGenerate->setText(QCoreApplication::translate("GraphicStripTestWindow", "Generate...", nullptr));
#if QT_CONFIG(shortcut)
        actionGenerate->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreferences->setText(QCoreApplication::translate("GraphicStripTestWindow", "Preferences...", nullptr));
        actionEmpty->setText(QCoreApplication::translate("GraphicStripTestWindow", "Empty", nullptr));
        actionFull_screen->setText(QCoreApplication::translate("GraphicStripTestWindow", "Full screen", nullptr));
        actionInvert_colors->setText(QCoreApplication::translate("GraphicStripTestWindow", "Invert colors", nullptr));
        actionRuler->setText(QCoreApplication::translate("GraphicStripTestWindow", "Ruler", nullptr));
        actionChange_ruler_timestamp->setText(QCoreApplication::translate("GraphicStripTestWindow", "Change ruler timestamp...", nullptr));
        actionSave->setText(QCoreApplication::translate("GraphicStripTestWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("GraphicStripTestWindow", "Save as...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNew->setText(QCoreApplication::translate("GraphicStripTestWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("GraphicStripTestWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("GraphicStripTestWindow", "File", nullptr));
        menuOpen_recent->setTitle(QCoreApplication::translate("GraphicStripTestWindow", "Open recent", nullptr));
        menuControl->setTitle(QCoreApplication::translate("GraphicStripTestWindow", "Control", nullptr));
        menuVarial_Speed->setTitle(QCoreApplication::translate("GraphicStripTestWindow", "Varial Speed", nullptr));
        menuGo->setTitle(QCoreApplication::translate("GraphicStripTestWindow", "Go", nullptr));
        menuDisplay->setTitle(QCoreApplication::translate("GraphicStripTestWindow", "Display", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicStripTestWindow: public Ui_GraphicStripTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSTRIPTESTWINDOW_H
