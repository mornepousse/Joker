/********************************************************************************
** Form generated from reading UI file 'PeopleEditionDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLEEDITIONDIALOG_H
#define UI_PEOPLEEDITIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "PhCommonUI/PhDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_PhColorPickerDialog
{
public:
    PhDialogButtonBox *buttonBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *labelName;
    QPushButton *pbColor;

    void setupUi(QDialog *PhColorPickerDialog)
    {
        if (PhColorPickerDialog->objectName().isEmpty())
            PhColorPickerDialog->setObjectName(QString::fromUtf8("PhColorPickerDialog"));
        PhColorPickerDialog->resize(275, 120);
        PhColorPickerDialog->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new PhDialogButtonBox(PhColorPickerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(-70, 80, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        horizontalLayoutWidget = new QWidget(PhColorPickerDialog);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 0, 257, 80));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        labelName = new QLabel(horizontalLayoutWidget);
        labelName->setObjectName(QString::fromUtf8("labelName"));
        labelName->setText(QString::fromUtf8("TextLabel"));

        horizontalLayout->addWidget(labelName);

        pbColor = new QPushButton(horizontalLayoutWidget);
        pbColor->setObjectName(QString::fromUtf8("pbColor"));
        pbColor->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(pbColor);


        retranslateUi(PhColorPickerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PhColorPickerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PhColorPickerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PhColorPickerDialog);
    } // setupUi

    void retranslateUi(QDialog *PhColorPickerDialog)
    {
        PhColorPickerDialog->setWindowTitle(QCoreApplication::translate("PhColorPickerDialog", "Modify", nullptr));
        pbColor->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PhColorPickerDialog: public Ui_PhColorPickerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLEEDITIONDIALOG_H
