/********************************************************************************
** Form generated from reading UI file 'FFmpegTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FFMPEGTESTWINDOW_H
#define UI_FFMPEGTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FFmpegTestWindow
{
public:
    QAction *actionOpen;
    QAction *actionPlay_pause;
    QAction *actionNext_frame;
    QAction *actionPrevious_frame;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuControl;

    void setupUi(QMainWindow *FFmpegTestWindow)
    {
        if (FFmpegTestWindow->objectName().isEmpty())
            FFmpegTestWindow->setObjectName(QString::fromUtf8("FFmpegTestWindow"));
        FFmpegTestWindow->resize(438, 347);
        actionOpen = new QAction(FFmpegTestWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionPlay_pause = new QAction(FFmpegTestWindow);
        actionPlay_pause->setObjectName(QString::fromUtf8("actionPlay_pause"));
        actionNext_frame = new QAction(FFmpegTestWindow);
        actionNext_frame->setObjectName(QString::fromUtf8("actionNext_frame"));
        actionPrevious_frame = new QAction(FFmpegTestWindow);
        actionPrevious_frame->setObjectName(QString::fromUtf8("actionPrevious_frame"));
        centralWidget = new QWidget(FFmpegTestWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));

        verticalLayout_2->addLayout(verticalLayout);

        FFmpegTestWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FFmpegTestWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 438, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuControl = new QMenu(menuBar);
        menuControl->setObjectName(QString::fromUtf8("menuControl"));
        FFmpegTestWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuControl->menuAction());
        menuFile->addAction(actionOpen);
        menuControl->addAction(actionPlay_pause);
        menuControl->addAction(actionNext_frame);
        menuControl->addAction(actionPrevious_frame);

        retranslateUi(FFmpegTestWindow);

        QMetaObject::connectSlotsByName(FFmpegTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FFmpegTestWindow)
    {
        FFmpegTestWindow->setWindowTitle(QCoreApplication::translate("FFmpegTestWindow", "FFmpegTest", nullptr));
        actionOpen->setText(QCoreApplication::translate("FFmpegTestWindow", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("FFmpegTestWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPlay_pause->setText(QCoreApplication::translate("FFmpegTestWindow", "Play/pause", nullptr));
#if QT_CONFIG(shortcut)
        actionPlay_pause->setShortcut(QCoreApplication::translate("FFmpegTestWindow", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext_frame->setText(QCoreApplication::translate("FFmpegTestWindow", "Next frame", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_frame->setShortcut(QCoreApplication::translate("FFmpegTestWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrevious_frame->setText(QCoreApplication::translate("FFmpegTestWindow", "Previous frame", nullptr));
#if QT_CONFIG(shortcut)
        actionPrevious_frame->setShortcut(QCoreApplication::translate("FFmpegTestWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("FFmpegTestWindow", "File", nullptr));
        menuControl->setTitle(QCoreApplication::translate("FFmpegTestWindow", "Control", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FFmpegTestWindow: public Ui_FFmpegTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FFMPEGTESTWINDOW_H
