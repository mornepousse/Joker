/********************************************************************************
** Form generated from reading UI file 'GenerateDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GENERATEDIALOG_H
#define UI_GENERATEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include "PhCommonUI/PhTimeCodeEdit.h"

QT_BEGIN_NAMESPACE

class Ui_GenerateDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout_2;
    QLabel *labelNbPeople;
    QSpinBox *spinBoxNbPeople;
    QLabel *labelNbText;
    QSpinBox *spinBoxNbText;
    QLabel *labelNbTrack;
    QSpinBox *spinBoxNbTrack;
    QLabel *labelNbLoop;
    QSpinBox *spinBoxNbLoop;
    QLabel *labelText;
    QLineEdit *lineEditText;
    QLabel *labelTimeCode;
    PhTimeCodeEdit *lineEditTimeCode;
    QLabel *labelInfoTxt;
    QLabel *labelInfoDuration;
    QLabel *spaceBetweenTextLabel;
    QSpinBox *spaceBetweenTextSpinBox;
    QCheckBox *checkBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *GenerateDialog)
    {
        if (GenerateDialog->objectName().isEmpty())
            GenerateDialog->setObjectName(QString::fromUtf8("GenerateDialog"));
        GenerateDialog->resize(443, 340);
        GenerateDialog->setMinimumSize(QSize(64, 48));
        GenerateDialog->setFocusPolicy(Qt::StrongFocus);
        verticalLayout = new QVBoxLayout(GenerateDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        labelNbPeople = new QLabel(GenerateDialog);
        labelNbPeople->setObjectName(QString::fromUtf8("labelNbPeople"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, labelNbPeople);

        spinBoxNbPeople = new QSpinBox(GenerateDialog);
        spinBoxNbPeople->setObjectName(QString::fromUtf8("spinBoxNbPeople"));
        spinBoxNbPeople->setMinimum(1);
        spinBoxNbPeople->setMaximum(999);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, spinBoxNbPeople);

        labelNbText = new QLabel(GenerateDialog);
        labelNbText->setObjectName(QString::fromUtf8("labelNbText"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, labelNbText);

        spinBoxNbText = new QSpinBox(GenerateDialog);
        spinBoxNbText->setObjectName(QString::fromUtf8("spinBoxNbText"));
        spinBoxNbText->setMaximum(99999);
        spinBoxNbText->setValue(1);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, spinBoxNbText);

        labelNbTrack = new QLabel(GenerateDialog);
        labelNbTrack->setObjectName(QString::fromUtf8("labelNbTrack"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, labelNbTrack);

        spinBoxNbTrack = new QSpinBox(GenerateDialog);
        spinBoxNbTrack->setObjectName(QString::fromUtf8("spinBoxNbTrack"));
        spinBoxNbTrack->setMinimum(1);
        spinBoxNbTrack->setMaximum(4);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, spinBoxNbTrack);

        labelNbLoop = new QLabel(GenerateDialog);
        labelNbLoop->setObjectName(QString::fromUtf8("labelNbLoop"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, labelNbLoop);

        spinBoxNbLoop = new QSpinBox(GenerateDialog);
        spinBoxNbLoop->setObjectName(QString::fromUtf8("spinBoxNbLoop"));
        spinBoxNbLoop->setMaximum(99999);

        formLayout_2->setWidget(4, QFormLayout::FieldRole, spinBoxNbLoop);

        labelText = new QLabel(GenerateDialog);
        labelText->setObjectName(QString::fromUtf8("labelText"));

        formLayout_2->setWidget(5, QFormLayout::LabelRole, labelText);

        lineEditText = new QLineEdit(GenerateDialog);
        lineEditText->setObjectName(QString::fromUtf8("lineEditText"));

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEditText);

        labelTimeCode = new QLabel(GenerateDialog);
        labelTimeCode->setObjectName(QString::fromUtf8("labelTimeCode"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, labelTimeCode);

        lineEditTimeCode = new PhTimeCodeEdit(GenerateDialog);
        lineEditTimeCode->setObjectName(QString::fromUtf8("lineEditTimeCode"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, lineEditTimeCode);

        labelInfoTxt = new QLabel(GenerateDialog);
        labelInfoTxt->setObjectName(QString::fromUtf8("labelInfoTxt"));

        formLayout_2->setWidget(7, QFormLayout::LabelRole, labelInfoTxt);

        labelInfoDuration = new QLabel(GenerateDialog);
        labelInfoDuration->setObjectName(QString::fromUtf8("labelInfoDuration"));

        formLayout_2->setWidget(7, QFormLayout::FieldRole, labelInfoDuration);

        spaceBetweenTextLabel = new QLabel(GenerateDialog);
        spaceBetweenTextLabel->setObjectName(QString::fromUtf8("spaceBetweenTextLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, spaceBetweenTextLabel);

        spaceBetweenTextSpinBox = new QSpinBox(GenerateDialog);
        spaceBetweenTextSpinBox->setObjectName(QString::fromUtf8("spaceBetweenTextSpinBox"));
        spaceBetweenTextSpinBox->setMaximum(2400000);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, spaceBetweenTextSpinBox);

        checkBox = new QCheckBox(GenerateDialog);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, checkBox);


        verticalLayout->addLayout(formLayout_2);

        buttonBox = new QDialogButtonBox(GenerateDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(buttonBox, spinBoxNbPeople);
        QWidget::setTabOrder(spinBoxNbPeople, spinBoxNbText);
        QWidget::setTabOrder(spinBoxNbText, spaceBetweenTextSpinBox);
        QWidget::setTabOrder(spaceBetweenTextSpinBox, spinBoxNbTrack);
        QWidget::setTabOrder(spinBoxNbTrack, spinBoxNbLoop);
        QWidget::setTabOrder(spinBoxNbLoop, lineEditText);
        QWidget::setTabOrder(lineEditText, lineEditTimeCode);

        retranslateUi(GenerateDialog);

        QMetaObject::connectSlotsByName(GenerateDialog);
    } // setupUi

    void retranslateUi(QDialog *GenerateDialog)
    {
        GenerateDialog->setWindowTitle(QCoreApplication::translate("GenerateDialog", "Generate a file", nullptr));
        labelNbPeople->setText(QCoreApplication::translate("GenerateDialog", "Number of character(s)", nullptr));
        labelNbText->setText(QCoreApplication::translate("GenerateDialog", "Number of sentence(s)", nullptr));
        labelNbTrack->setText(QCoreApplication::translate("GenerateDialog", "Number of track(s)", nullptr));
        labelNbLoop->setText(QCoreApplication::translate("GenerateDialog", "Number of loop(s)", nullptr));
        labelText->setText(QCoreApplication::translate("GenerateDialog", "Text ", nullptr));
        labelTimeCode->setText(QCoreApplication::translate("GenerateDialog", "TimeCode", nullptr));
        labelInfoTxt->setText(QCoreApplication::translate("GenerateDialog", "Strip duration : ", nullptr));
        labelInfoDuration->setText(QCoreApplication::translate("GenerateDialog", "TextLabel", nullptr));
        spaceBetweenTextLabel->setText(QCoreApplication::translate("GenerateDialog", "Space between text", nullptr));
        checkBox->setText(QCoreApplication::translate("GenerateDialog", "Run for tests", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GenerateDialog: public Ui_GenerateDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GENERATEDIALOG_H
