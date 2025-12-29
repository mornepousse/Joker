/********************************************************************************
** Form generated from reading UI file 'TextEditTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTEDITTESTWINDOW_H
#define UI_TEXTEDITTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextEditTestWindow
{
public:
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_as;
    QAction *actionEmpty;
    QAction *actionNew;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuOpen_recent;

    void setupUi(QMainWindow *TextEditTestWindow)
    {
        if (TextEditTestWindow->objectName().isEmpty())
            TextEditTestWindow->setObjectName(QString::fromUtf8("TextEditTestWindow"));
        TextEditTestWindow->resize(400, 300);
        actionOpen = new QAction(TextEditTestWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionSave = new QAction(TextEditTestWindow);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave_as = new QAction(TextEditTestWindow);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        actionEmpty = new QAction(TextEditTestWindow);
        actionEmpty->setObjectName(QString::fromUtf8("actionEmpty"));
        actionEmpty->setEnabled(false);
        actionNew = new QAction(TextEditTestWindow);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        centralWidget = new QWidget(TextEditTestWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        TextEditTestWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(TextEditTestWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuOpen_recent = new QMenu(menuFile);
        menuOpen_recent->setObjectName(QString::fromUtf8("menuOpen_recent"));
        TextEditTestWindow->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(menuOpen_recent->menuAction());
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_as);
        menuFile->addSeparator();
        menuOpen_recent->addAction(actionEmpty);

        retranslateUi(TextEditTestWindow);

        QMetaObject::connectSlotsByName(TextEditTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TextEditTestWindow)
    {
        TextEditTestWindow->setWindowTitle(QCoreApplication::translate("TextEditTestWindow", "TextEditTestWindow", nullptr));
        actionOpen->setText(QCoreApplication::translate("TextEditTestWindow", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("TextEditTestWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave->setText(QCoreApplication::translate("TextEditTestWindow", "Save", nullptr));
#if QT_CONFIG(shortcut)
        actionSave->setShortcut(QCoreApplication::translate("TextEditTestWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("TextEditTestWindow", "Save as...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("TextEditTestWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEmpty->setText(QCoreApplication::translate("TextEditTestWindow", "Empty", nullptr));
        actionNew->setText(QCoreApplication::translate("TextEditTestWindow", "New", nullptr));
#if QT_CONFIG(shortcut)
        actionNew->setShortcut(QCoreApplication::translate("TextEditTestWindow", "Ctrl+N", nullptr));
#endif // QT_CONFIG(shortcut)
        menuFile->setTitle(QCoreApplication::translate("TextEditTestWindow", "File", nullptr));
        menuOpen_recent->setTitle(QCoreApplication::translate("TextEditTestWindow", "Open recent", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextEditTestWindow: public Ui_TextEditTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTEDITTESTWINDOW_H
