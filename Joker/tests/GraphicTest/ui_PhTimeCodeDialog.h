/********************************************************************************
** Form generated from reading UI file 'PhTimeCodeDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHTIMECODEDIALOG_H
#define UI_PHTIMECODEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "../../libs/PhCommonUI/PhTimeCodeEdit.h"

QT_BEGIN_NAMESPACE

class Ui_PhTimeCodeDialog
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    PhTimeCodeEdit *_timecodeEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *cancelButton;
    QPushButton *okButton;

    void setupUi(QDialog *PhTimeCodeDialog)
    {
        if (PhTimeCodeDialog->objectName().isEmpty())
            PhTimeCodeDialog->setObjectName(QString::fromUtf8("PhTimeCodeDialog"));
        PhTimeCodeDialog->resize(425, 101);
        horizontalLayout = new QHBoxLayout(PhTimeCodeDialog);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        _timecodeEdit = new PhTimeCodeEdit(PhTimeCodeDialog);
        _timecodeEdit->setObjectName(QString::fromUtf8("_timecodeEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(_timecodeEdit->sizePolicy().hasHeightForWidth());
        _timecodeEdit->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(25);
        _timecodeEdit->setFont(font);
        _timecodeEdit->setInputMask(QString::fromUtf8(""));
        _timecodeEdit->setText(QString::fromUtf8(""));
        _timecodeEdit->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(_timecodeEdit);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        cancelButton = new QPushButton(PhTimeCodeDialog);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout_2->addWidget(cancelButton);

        okButton = new QPushButton(PhTimeCodeDialog);
        okButton->setObjectName(QString::fromUtf8("okButton"));

        horizontalLayout_2->addWidget(okButton);


        verticalLayout->addLayout(horizontalLayout_2);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(PhTimeCodeDialog);

        QMetaObject::connectSlotsByName(PhTimeCodeDialog);
    } // setupUi

    void retranslateUi(QDialog *PhTimeCodeDialog)
    {
        PhTimeCodeDialog->setWindowTitle(QCoreApplication::translate("PhTimeCodeDialog", "Go To", nullptr));
        cancelButton->setText(QCoreApplication::translate("PhTimeCodeDialog", "Cancel", nullptr));
        okButton->setText(QCoreApplication::translate("PhTimeCodeDialog", "Ok", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PhTimeCodeDialog: public Ui_PhTimeCodeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHTIMECODEDIALOG_H
