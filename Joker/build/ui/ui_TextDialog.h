/********************************************************************************
** Form generated from reading UI file 'TextDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTDIALOG_H
#define UI_TEXTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "PhCommonUI/PhTimeCodeEdit.h"

QT_BEGIN_NAMESPACE

class Ui_TextDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelContent;
    QLineEdit *editContent;
    QLabel *labelCharacter;
    QComboBox *comboCharacter;
    QLabel *labelTimeIn;
    PhTimeCodeEdit *editTimeIn;
    QLabel *labelTimeOut;
    PhTimeCodeEdit *editTimeOut;
    QLabel *labelTrack;
    QSpinBox *spinTrack;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TextDialog)
    {
        if (TextDialog->objectName().isEmpty())
            TextDialog->setObjectName(QString::fromUtf8("TextDialog"));
        TextDialog->resize(400, 200);
        verticalLayout = new QVBoxLayout(TextDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        labelContent = new QLabel(TextDialog);
        labelContent->setObjectName(QString::fromUtf8("labelContent"));

        formLayout->setWidget(0, QFormLayout::LabelRole, labelContent);

        editContent = new QLineEdit(TextDialog);
        editContent->setObjectName(QString::fromUtf8("editContent"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editContent);

        labelCharacter = new QLabel(TextDialog);
        labelCharacter->setObjectName(QString::fromUtf8("labelCharacter"));

        formLayout->setWidget(1, QFormLayout::LabelRole, labelCharacter);

        comboCharacter = new QComboBox(TextDialog);
        comboCharacter->setObjectName(QString::fromUtf8("comboCharacter"));

        formLayout->setWidget(1, QFormLayout::FieldRole, comboCharacter);

        labelTimeIn = new QLabel(TextDialog);
        labelTimeIn->setObjectName(QString::fromUtf8("labelTimeIn"));

        formLayout->setWidget(2, QFormLayout::LabelRole, labelTimeIn);

        editTimeIn = new PhTimeCodeEdit(TextDialog);
        editTimeIn->setObjectName(QString::fromUtf8("editTimeIn"));

        formLayout->setWidget(2, QFormLayout::FieldRole, editTimeIn);

        labelTimeOut = new QLabel(TextDialog);
        labelTimeOut->setObjectName(QString::fromUtf8("labelTimeOut"));

        formLayout->setWidget(3, QFormLayout::LabelRole, labelTimeOut);

        editTimeOut = new PhTimeCodeEdit(TextDialog);
        editTimeOut->setObjectName(QString::fromUtf8("editTimeOut"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editTimeOut);

        labelTrack = new QLabel(TextDialog);
        labelTrack->setObjectName(QString::fromUtf8("labelTrack"));

        formLayout->setWidget(4, QFormLayout::LabelRole, labelTrack);

        spinTrack = new QSpinBox(TextDialog);
        spinTrack->setObjectName(QString::fromUtf8("spinTrack"));
        spinTrack->setMinimum(0);
        spinTrack->setMaximum(10);

        formLayout->setWidget(4, QFormLayout::FieldRole, spinTrack);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(TextDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(TextDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TextDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TextDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TextDialog);
    } // setupUi

    void retranslateUi(QDialog *TextDialog)
    {
        TextDialog->setWindowTitle(QCoreApplication::translate("TextDialog", "Add Text", nullptr));
        labelContent->setText(QCoreApplication::translate("TextDialog", "Content:", nullptr));
        labelCharacter->setText(QCoreApplication::translate("TextDialog", "Character:", nullptr));
        labelTimeIn->setText(QCoreApplication::translate("TextDialog", "Time In:", nullptr));
        labelTimeOut->setText(QCoreApplication::translate("TextDialog", "Time Out:", nullptr));
        labelTrack->setText(QCoreApplication::translate("TextDialog", "Track Index:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextDialog: public Ui_TextDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTDIALOG_H
