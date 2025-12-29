/********************************************************************************
** Form generated from reading UI file 'ChangeTextDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGETEXTDIALOG_H
#define UI_CHANGETEXTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ChangeTextDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLineEdit *lineEdit;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ChangeTextDialog)
    {
        if (ChangeTextDialog->objectName().isEmpty())
            ChangeTextDialog->setObjectName(QString::fromUtf8("ChangeTextDialog"));
        ChangeTextDialog->resize(372, 73);
        verticalLayout = new QVBoxLayout(ChangeTextDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lineEdit = new QLineEdit(ChangeTextDialog);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        verticalLayout->addWidget(lineEdit);

        buttonBox = new QDialogButtonBox(ChangeTextDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ChangeTextDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChangeTextDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChangeTextDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChangeTextDialog);
    } // setupUi

    void retranslateUi(QDialog *ChangeTextDialog)
    {
        ChangeTextDialog->setWindowTitle(QCoreApplication::translate("ChangeTextDialog", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChangeTextDialog: public Ui_ChangeTextDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGETEXTDIALOG_H
