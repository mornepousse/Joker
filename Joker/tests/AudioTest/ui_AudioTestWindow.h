/********************************************************************************
** Form generated from reading UI file 'AudioTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOTESTWINDOW_H
#define UI_AUDIOTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioTestWindow
{
public:
    QAction *actionSet_TC_In;
    QAction *actionSet_TC_Out;
    QAction *actionPreferences;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QCheckBox *generateCheckBox;
    QGroupBox *generatorGroupBox;
    QVBoxLayout *verticalLayout_3;
    QCheckBox *readCheckBox;
    QGroupBox *readerGroupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *inputLevelLabel;
    QMenuBar *menuBar;
    QMenu *menuControls;

    void setupUi(QMainWindow *AudioTestWindow)
    {
        if (AudioTestWindow->objectName().isEmpty())
            AudioTestWindow->setObjectName(QString::fromUtf8("AudioTestWindow"));
        AudioTestWindow->resize(523, 371);
        actionSet_TC_In = new QAction(AudioTestWindow);
        actionSet_TC_In->setObjectName(QString::fromUtf8("actionSet_TC_In"));
        actionSet_TC_Out = new QAction(AudioTestWindow);
        actionSet_TC_Out->setObjectName(QString::fromUtf8("actionSet_TC_Out"));
        actionPreferences = new QAction(AudioTestWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        centralWidget = new QWidget(AudioTestWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        generateCheckBox = new QCheckBox(centralWidget);
        generateCheckBox->setObjectName(QString::fromUtf8("generateCheckBox"));
        generateCheckBox->setChecked(false);

        verticalLayout->addWidget(generateCheckBox);

        generatorGroupBox = new QGroupBox(centralWidget);
        generatorGroupBox->setObjectName(QString::fromUtf8("generatorGroupBox"));
        verticalLayout_3 = new QVBoxLayout(generatorGroupBox);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));

        verticalLayout->addWidget(generatorGroupBox);

        readCheckBox = new QCheckBox(centralWidget);
        readCheckBox->setObjectName(QString::fromUtf8("readCheckBox"));
        readCheckBox->setChecked(false);

        verticalLayout->addWidget(readCheckBox);

        readerGroupBox = new QGroupBox(centralWidget);
        readerGroupBox->setObjectName(QString::fromUtf8("readerGroupBox"));
        verticalLayout_2 = new QVBoxLayout(readerGroupBox);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        inputLevelLabel = new QLabel(readerGroupBox);
        inputLevelLabel->setObjectName(QString::fromUtf8("inputLevelLabel"));

        verticalLayout_2->addWidget(inputLevelLabel);


        verticalLayout->addWidget(readerGroupBox);

        AudioTestWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(AudioTestWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 523, 21));
        menuControls = new QMenu(menuBar);
        menuControls->setObjectName(QString::fromUtf8("menuControls"));
        AudioTestWindow->setMenuBar(menuBar);

        menuBar->addAction(menuControls->menuAction());
        menuControls->addAction(actionPreferences);

        retranslateUi(AudioTestWindow);

        QMetaObject::connectSlotsByName(AudioTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *AudioTestWindow)
    {
        AudioTestWindow->setWindowTitle(QCoreApplication::translate("AudioTestWindow", "AudioTest", nullptr));
        actionSet_TC_In->setText(QCoreApplication::translate("AudioTestWindow", "Set TC In...", nullptr));
#if QT_CONFIG(shortcut)
        actionSet_TC_In->setShortcut(QCoreApplication::translate("AudioTestWindow", "Ctrl+Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSet_TC_Out->setText(QCoreApplication::translate("AudioTestWindow", "Set TC Out...", nullptr));
#if QT_CONFIG(shortcut)
        actionSet_TC_Out->setShortcut(QCoreApplication::translate("AudioTestWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPreferences->setText(QCoreApplication::translate("AudioTestWindow", "Preferences...", nullptr));
#if QT_CONFIG(shortcut)
        actionPreferences->setShortcut(QCoreApplication::translate("AudioTestWindow", "Ctrl+P", nullptr));
#endif // QT_CONFIG(shortcut)
        generateCheckBox->setText(QCoreApplication::translate("AudioTestWindow", "Generate sound", nullptr));
        generatorGroupBox->setTitle(QCoreApplication::translate("AudioTestWindow", "Generator:", nullptr));
        readCheckBox->setText(QCoreApplication::translate("AudioTestWindow", "Read sound", nullptr));
        readerGroupBox->setTitle(QCoreApplication::translate("AudioTestWindow", "Reader:", nullptr));
        inputLevelLabel->setText(QCoreApplication::translate("AudioTestWindow", "Input level : -", nullptr));
        menuControls->setTitle(QCoreApplication::translate("AudioTestWindow", "Controls", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioTestWindow: public Ui_AudioTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOTESTWINDOW_H
