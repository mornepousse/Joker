/********************************************************************************
** Form generated from reading UI file 'DocumentWindowSpecWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOCUMENTWINDOWSPECWINDOW_H
#define UI_DOCUMENTWINDOWSPECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DocumentWindowSpecWindow
{
public:
    QAction *actionNone;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuOpen_recent;

    void setupUi(QMainWindow *DocumentWindowSpecWindow)
    {
        if (DocumentWindowSpecWindow->objectName().isEmpty())
            DocumentWindowSpecWindow->setObjectName(QString::fromUtf8("DocumentWindowSpecWindow"));
        DocumentWindowSpecWindow->resize(400, 300);
        actionNone = new QAction(DocumentWindowSpecWindow);
        actionNone->setObjectName(QString::fromUtf8("actionNone"));
        actionNone->setEnabled(false);
        centralwidget = new QWidget(DocumentWindowSpecWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        DocumentWindowSpecWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DocumentWindowSpecWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 400, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen_recent = new QMenu(menuFile);
        menuOpen_recent->setObjectName(QString::fromUtf8("menuOpen_recent"));
        DocumentWindowSpecWindow->setMenuBar(menubar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(menuOpen_recent->menuAction());
        menuOpen_recent->addAction(actionNone);

        retranslateUi(DocumentWindowSpecWindow);

        QMetaObject::connectSlotsByName(DocumentWindowSpecWindow);
    } // setupUi

    void retranslateUi(QMainWindow *DocumentWindowSpecWindow)
    {
        DocumentWindowSpecWindow->setWindowTitle(QCoreApplication::translate("DocumentWindowSpecWindow", "MainWindow", nullptr));
        actionNone->setText(QCoreApplication::translate("DocumentWindowSpecWindow", "None", nullptr));
        menuFile->setTitle(QCoreApplication::translate("DocumentWindowSpecWindow", "File", nullptr));
        menuOpen_recent->setTitle(QCoreApplication::translate("DocumentWindowSpecWindow", "Open recent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DocumentWindowSpecWindow: public Ui_DocumentWindowSpecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOCUMENTWINDOWSPECWINDOW_H
