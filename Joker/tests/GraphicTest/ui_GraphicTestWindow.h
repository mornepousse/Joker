/********************************************************************************
** Form generated from reading UI file 'GraphicTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICTESTWINDOW_H
#define UI_GRAPHICTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PhGraphic/PhGraphicView.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicTestWindow
{
public:
    QAction *actionChange_font;
    QAction *actionSave;
    QAction *actionImage;
    QAction *actionInfos;
    QAction *actionLoops;
    QAction *actionRectangles;
    QAction *actionArrows;
    QAction *actionDisc;
    QAction *actionCharacters;
    QAction *actionStatic_text;
    QAction *actionMoving_text;
    QAction *actionZoom_in;
    QAction *actionZoom_out;
    QAction *actionMove_up;
    QAction *actionMove_right;
    QAction *actionMove_down;
    QAction *actionMove_left;
    QAction *actionChange_text;
    QAction *actionImage_2;
    QAction *actionImage_1;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    PhGraphicView *graphicView;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuDisplay;
    QMenu *menuEdit;

    void setupUi(QMainWindow *GraphicTestWindow)
    {
        if (GraphicTestWindow->objectName().isEmpty())
            GraphicTestWindow->setObjectName(QString::fromUtf8("GraphicTestWindow"));
        GraphicTestWindow->resize(800, 600);
        actionChange_font = new QAction(GraphicTestWindow);
        actionChange_font->setObjectName(QString::fromUtf8("actionChange_font"));
        actionSave = new QAction(GraphicTestWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionImage = new QAction(GraphicTestWindow);
        actionImage->setObjectName(QString::fromUtf8("actionImage"));
        actionImage->setCheckable(true);
        actionInfos = new QAction(GraphicTestWindow);
        actionInfos->setObjectName(QString::fromUtf8("actionInfos"));
        actionInfos->setCheckable(true);
        actionLoops = new QAction(GraphicTestWindow);
        actionLoops->setObjectName(QString::fromUtf8("actionLoops"));
        actionLoops->setCheckable(true);
        actionRectangles = new QAction(GraphicTestWindow);
        actionRectangles->setObjectName(QString::fromUtf8("actionRectangles"));
        actionRectangles->setCheckable(true);
        actionArrows = new QAction(GraphicTestWindow);
        actionArrows->setObjectName(QString::fromUtf8("actionArrows"));
        actionArrows->setCheckable(true);
        actionDisc = new QAction(GraphicTestWindow);
        actionDisc->setObjectName(QString::fromUtf8("actionDisc"));
        actionDisc->setCheckable(true);
        actionCharacters = new QAction(GraphicTestWindow);
        actionCharacters->setObjectName(QString::fromUtf8("actionCharacters"));
        actionCharacters->setCheckable(true);
        actionStatic_text = new QAction(GraphicTestWindow);
        actionStatic_text->setObjectName(QString::fromUtf8("actionStatic_text"));
        actionStatic_text->setCheckable(true);
        actionMoving_text = new QAction(GraphicTestWindow);
        actionMoving_text->setObjectName(QString::fromUtf8("actionMoving_text"));
        actionMoving_text->setCheckable(true);
        actionZoom_in = new QAction(GraphicTestWindow);
        actionZoom_in->setObjectName(QString::fromUtf8("actionZoom_in"));
        actionZoom_out = new QAction(GraphicTestWindow);
        actionZoom_out->setObjectName(QString::fromUtf8("actionZoom_out"));
        actionMove_up = new QAction(GraphicTestWindow);
        actionMove_up->setObjectName(QString::fromUtf8("actionMove_up"));
        actionMove_right = new QAction(GraphicTestWindow);
        actionMove_right->setObjectName(QString::fromUtf8("actionMove_right"));
        actionMove_down = new QAction(GraphicTestWindow);
        actionMove_down->setObjectName(QString::fromUtf8("actionMove_down"));
        actionMove_left = new QAction(GraphicTestWindow);
        actionMove_left->setObjectName(QString::fromUtf8("actionMove_left"));
        actionChange_text = new QAction(GraphicTestWindow);
        actionChange_text->setObjectName(QString::fromUtf8("actionChange_text"));
        actionImage_2 = new QAction(GraphicTestWindow);
        actionImage_2->setObjectName(QString::fromUtf8("actionImage_2"));
        actionImage_2->setCheckable(true);
        actionImage_1 = new QAction(GraphicTestWindow);
        actionImage_1->setObjectName(QString::fromUtf8("actionImage_1"));
        actionImage_1->setCheckable(true);
        centralwidget = new QWidget(GraphicTestWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicView = new PhGraphicView(centralwidget);
        graphicView->setObjectName(QString::fromUtf8("graphicView"));

        verticalLayout->addWidget(graphicView);

        GraphicTestWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GraphicTestWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuDisplay = new QMenu(menubar);
        menuDisplay->setObjectName(QString::fromUtf8("menuDisplay"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        GraphicTestWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuDisplay->menuAction());
        menuFile->addAction(actionSave);
        menuDisplay->addAction(actionInfos);
        menuDisplay->addAction(actionImage_1);
        menuDisplay->addAction(actionImage_2);
        menuDisplay->addAction(actionRectangles);
        menuDisplay->addAction(actionLoops);
        menuDisplay->addAction(actionArrows);
        menuDisplay->addAction(actionDisc);
        menuDisplay->addAction(actionCharacters);
        menuDisplay->addAction(actionStatic_text);
        menuDisplay->addAction(actionMoving_text);
        menuDisplay->addSeparator();
        menuDisplay->addAction(actionZoom_in);
        menuDisplay->addAction(actionZoom_out);
        menuDisplay->addAction(actionMove_up);
        menuDisplay->addAction(actionMove_right);
        menuDisplay->addAction(actionMove_down);
        menuDisplay->addAction(actionMove_left);
        menuEdit->addAction(actionChange_text);
        menuEdit->addAction(actionChange_font);

        retranslateUi(GraphicTestWindow);

        QMetaObject::connectSlotsByName(GraphicTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GraphicTestWindow)
    {
        GraphicTestWindow->setWindowTitle(QCoreApplication::translate("GraphicTestWindow", "GraphicTest", nullptr));
        actionChange_font->setText(QCoreApplication::translate("GraphicTestWindow", "Change font...", nullptr));
#if QT_CONFIG(shortcut)
        actionChange_font->setShortcut(QCoreApplication::translate("GraphicTestWindow", "Ctrl+F", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("GraphicTestWindow", "Save...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("GraphicTestWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImage->setText(QCoreApplication::translate("GraphicTestWindow", "Image", nullptr));
        actionInfos->setText(QCoreApplication::translate("GraphicTestWindow", "Infos", nullptr));
        actionLoops->setText(QCoreApplication::translate("GraphicTestWindow", "Loops", nullptr));
        actionRectangles->setText(QCoreApplication::translate("GraphicTestWindow", "Rectangles", nullptr));
        actionArrows->setText(QCoreApplication::translate("GraphicTestWindow", "Arrows", nullptr));
        actionDisc->setText(QCoreApplication::translate("GraphicTestWindow", "Disc", nullptr));
        actionCharacters->setText(QCoreApplication::translate("GraphicTestWindow", "Characters", nullptr));
        actionStatic_text->setText(QCoreApplication::translate("GraphicTestWindow", "Static text", nullptr));
        actionMoving_text->setText(QCoreApplication::translate("GraphicTestWindow", "Moving text", nullptr));
        actionZoom_in->setText(QCoreApplication::translate("GraphicTestWindow", "Zoom in", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_in->setShortcut(QCoreApplication::translate("GraphicTestWindow", "J", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_out->setText(QCoreApplication::translate("GraphicTestWindow", "Zoom out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_out->setShortcut(QCoreApplication::translate("GraphicTestWindow", "K", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMove_up->setText(QCoreApplication::translate("GraphicTestWindow", "Move up", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_up->setShortcut(QCoreApplication::translate("GraphicTestWindow", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMove_right->setText(QCoreApplication::translate("GraphicTestWindow", "Move right", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_right->setShortcut(QCoreApplication::translate("GraphicTestWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMove_down->setText(QCoreApplication::translate("GraphicTestWindow", "Move down", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_down->setShortcut(QCoreApplication::translate("GraphicTestWindow", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMove_left->setText(QCoreApplication::translate("GraphicTestWindow", "Move left", nullptr));
#if QT_CONFIG(shortcut)
        actionMove_left->setShortcut(QCoreApplication::translate("GraphicTestWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionChange_text->setText(QCoreApplication::translate("GraphicTestWindow", "Change text...", nullptr));
#if QT_CONFIG(shortcut)
        actionChange_text->setShortcut(QCoreApplication::translate("GraphicTestWindow", "Ctrl+T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionImage_2->setText(QCoreApplication::translate("GraphicTestWindow", "Image 2", nullptr));
        actionImage_1->setText(QCoreApplication::translate("GraphicTestWindow", "Image 1", nullptr));
        menuFile->setTitle(QCoreApplication::translate("GraphicTestWindow", "File", nullptr));
        menuDisplay->setTitle(QCoreApplication::translate("GraphicTestWindow", "Display", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("GraphicTestWindow", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicTestWindow: public Ui_GraphicTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICTESTWINDOW_H
