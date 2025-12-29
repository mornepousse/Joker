/********************************************************************************
** Form generated from reading UI file 'TimeBetweenTwoFeetDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMEBETWEENTWOFEETDIALOG_H
#define UI_TIMEBETWEENTWOFEETDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include "PhCommonUI/PhDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_TimeBetweenTwoFeetDialog
{
public:
    PhDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QDialog *TimeBetweenTwoFeetDialog)
    {
        if (TimeBetweenTwoFeetDialog->objectName().isEmpty())
            TimeBetweenTwoFeetDialog->setObjectName(QString::fromUtf8("TimeBetweenTwoFeetDialog"));
        TimeBetweenTwoFeetDialog->resize(411, 138);
        buttonBox = new PhDialogButtonBox(TimeBetweenTwoFeetDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(60, 100, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalSlider = new QSlider(TimeBetweenTwoFeetDialog);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setGeometry(QRect(20, 60, 371, 22));
        horizontalSlider->setMaximum(10000);
        horizontalSlider->setSingleStep(100);
        horizontalSlider->setPageStep(1000);
        horizontalSlider->setOrientation(Qt::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TicksBothSides);
        horizontalSlider->setTickInterval(1000);
        spinBox = new QSpinBox(TimeBetweenTwoFeetDialog);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setGeometry(QRect(290, 20, 111, 24));
        spinBox->setSuffix(QString::fromUtf8("ms"));
        spinBox->setMaximum(10000);
        spinBox->setSingleStep(100);
        label = new QLabel(TimeBetweenTwoFeetDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 181, 16));

        retranslateUi(TimeBetweenTwoFeetDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), TimeBetweenTwoFeetDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), TimeBetweenTwoFeetDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(TimeBetweenTwoFeetDialog);
    } // setupUi

    void retranslateUi(QDialog *TimeBetweenTwoFeetDialog)
    {
        TimeBetweenTwoFeetDialog->setWindowTitle(QCoreApplication::translate("TimeBetweenTwoFeetDialog", "Time between two feet", nullptr));
        label->setText(QCoreApplication::translate("TimeBetweenTwoFeetDialog", "Current time :", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TimeBetweenTwoFeetDialog: public Ui_TimeBetweenTwoFeetDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMEBETWEENTWOFEETDIALOG_H
