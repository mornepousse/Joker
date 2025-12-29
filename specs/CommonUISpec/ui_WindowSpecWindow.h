/********************************************************************************
** Form generated from reading UI file 'WindowSpecWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWSPECWINDOW_H
#define UI_WINDOWSPECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowSpecWindow
{
public:
    QAction *actionFull_screen;
    QAction *actionEmpty;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QMenu *menuView;
    QMenu *menuFile;
    QMenu *menuOpen_recent;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowSpecWindow)
    {
        if (WindowSpecWindow->objectName().isEmpty())
            WindowSpecWindow->setObjectName(QString::fromUtf8("WindowSpecWindow"));
        WindowSpecWindow->resize(400, 300);
        actionFull_screen = new QAction(WindowSpecWindow);
        actionFull_screen->setObjectName(QString::fromUtf8("actionFull_screen"));
        actionFull_screen->setCheckable(true);
        actionEmpty = new QAction(WindowSpecWindow);
        actionEmpty->setObjectName(QString::fromUtf8("actionEmpty"));
        actionEmpty->setEnabled(false);
        centralwidget = new QWidget(WindowSpecWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        WindowSpecWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowSpecWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 22));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen_recent = new QMenu(menuFile);
        menuOpen_recent->setObjectName(QString::fromUtf8("menuOpen_recent"));
        WindowSpecWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowSpecWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowSpecWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuView->menuAction());
        menuView->addAction(actionFull_screen);
        menuFile->addAction(menuOpen_recent->menuAction());
        menuOpen_recent->addAction(actionEmpty);

        retranslateUi(WindowSpecWindow);

        QMetaObject::connectSlotsByName(WindowSpecWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WindowSpecWindow)
    {
        WindowSpecWindow->setWindowTitle(QCoreApplication::translate("WindowSpecWindow", "MainWindow", nullptr));
        actionFull_screen->setText(QCoreApplication::translate("WindowSpecWindow", "Full screen", nullptr));
        actionEmpty->setText(QCoreApplication::translate("WindowSpecWindow", "Empty", nullptr));
        menuView->setTitle(QCoreApplication::translate("WindowSpecWindow", "View", nullptr));
        menuFile->setTitle(QCoreApplication::translate("WindowSpecWindow", "File", nullptr));
        menuOpen_recent->setTitle(QCoreApplication::translate("WindowSpecWindow", "Open recent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowSpecWindow: public Ui_WindowSpecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWSPECWINDOW_H
