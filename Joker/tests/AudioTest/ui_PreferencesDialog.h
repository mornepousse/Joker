/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *lblDeviceOut;
    QComboBox *comboBoxOutput;
    QLabel *lblDeviceIn;
    QComboBox *comboBoxInput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(275, 118);
        layoutWidget = new QWidget(PreferencesDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 261, 101));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblDeviceOut = new QLabel(layoutWidget);
        lblDeviceOut->setObjectName(QString::fromUtf8("lblDeviceOut"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblDeviceOut);

        comboBoxOutput = new QComboBox(layoutWidget);
        comboBoxOutput->setObjectName(QString::fromUtf8("comboBoxOutput"));

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBoxOutput);

        lblDeviceIn = new QLabel(layoutWidget);
        lblDeviceIn->setObjectName(QString::fromUtf8("lblDeviceIn"));

        formLayout->setWidget(1, QFormLayout::LabelRole, lblDeviceIn);

        comboBoxInput = new QComboBox(layoutWidget);
        comboBoxInput->setObjectName(QString::fromUtf8("comboBoxInput"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBoxInput);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        lblDeviceOut->setText(QCoreApplication::translate("PreferencesDialog", "Sortie audio", nullptr));
        lblDeviceIn->setText(QCoreApplication::translate("PreferencesDialog", "Entr\303\251e audio", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
