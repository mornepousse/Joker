/********************************************************************************
** Form generated from reading UI file 'FormTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMTESTWINDOW_H
#define UI_FORMTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PhCommonUI/PhLockableSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_FormTestWindow
{
public:
    QAction *actionAbout;
    QAction *actionDocumentation;
    QAction *actionOpen;
    QAction *actionGenerate_YUV_pattern;
    QAction *actionGenerate_RGB_pattern;
    QAction *actionEmpty;
    QAction *actionFull_screen;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton;
    PhLockableSpinBox *spinBox;
    QLabel *labelFrequency;
    QMenuBar *menuBar;
    QMenu *menuAbout;
    QMenu *menuView;

    void setupUi(QMainWindow *FormTestWindow)
    {
        if (FormTestWindow->objectName().isEmpty())
            FormTestWindow->setObjectName(QString::fromUtf8("FormTestWindow"));
        FormTestWindow->resize(935, 580);
        actionAbout = new QAction(FormTestWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionDocumentation = new QAction(FormTestWindow);
        actionDocumentation->setObjectName(QString::fromUtf8("actionDocumentation"));
        actionOpen = new QAction(FormTestWindow);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        actionGenerate_YUV_pattern = new QAction(FormTestWindow);
        actionGenerate_YUV_pattern->setObjectName(QString::fromUtf8("actionGenerate_YUV_pattern"));
        actionGenerate_RGB_pattern = new QAction(FormTestWindow);
        actionGenerate_RGB_pattern->setObjectName(QString::fromUtf8("actionGenerate_RGB_pattern"));
        actionEmpty = new QAction(FormTestWindow);
        actionEmpty->setObjectName(QString::fromUtf8("actionEmpty"));
        actionEmpty->setEnabled(false);
        actionFull_screen = new QAction(FormTestWindow);
        actionFull_screen->setObjectName(QString::fromUtf8("actionFull_screen"));
        actionFull_screen->setCheckable(true);
        centralWidget = new QWidget(FormTestWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        spinBox = new PhLockableSpinBox(centralWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));

        verticalLayout->addWidget(spinBox);

        labelFrequency = new QLabel(centralWidget);
        labelFrequency->setObjectName(QString::fromUtf8("labelFrequency"));

        verticalLayout->addWidget(labelFrequency);

        FormTestWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(FormTestWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 935, 22));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        menuView = new QMenu(menuBar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        FormTestWindow->setMenuBar(menuBar);

        menuBar->addAction(menuView->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuAbout->addAction(actionAbout);
        menuAbout->addAction(actionDocumentation);
        menuView->addAction(actionFull_screen);

        retranslateUi(FormTestWindow);

        QMetaObject::connectSlotsByName(FormTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *FormTestWindow)
    {
        FormTestWindow->setWindowTitle(QCoreApplication::translate("FormTestWindow", "FormTest", nullptr));
        actionAbout->setText(QCoreApplication::translate("FormTestWindow", "About", nullptr));
        actionDocumentation->setText(QCoreApplication::translate("FormTestWindow", "Documentation", nullptr));
        actionOpen->setText(QCoreApplication::translate("FormTestWindow", "Open...", nullptr));
#if QT_CONFIG(shortcut)
        actionOpen->setShortcut(QCoreApplication::translate("FormTestWindow", "Ctrl+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionGenerate_YUV_pattern->setText(QCoreApplication::translate("FormTestWindow", "Generate YUV pattern", nullptr));
        actionGenerate_RGB_pattern->setText(QCoreApplication::translate("FormTestWindow", "Generate RGB pattern", nullptr));
        actionEmpty->setText(QCoreApplication::translate("FormTestWindow", "Empty", nullptr));
        actionFull_screen->setText(QCoreApplication::translate("FormTestWindow", "Full screen", nullptr));
        pushButton->setText(QCoreApplication::translate("FormTestWindow", "PushButton", nullptr));
        labelFrequency->setText(QCoreApplication::translate("FormTestWindow", "TextLabel", nullptr));
        menuAbout->setTitle(QCoreApplication::translate("FormTestWindow", "Help", nullptr));
        menuView->setTitle(QCoreApplication::translate("FormTestWindow", "View", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormTestWindow: public Ui_FormTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMTESTWINDOW_H
