/********************************************************************************
** Form generated from reading UI file 'PeopleDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PEOPLEDIALOG_H
#define UI_PEOPLEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "PhCommonUI/PhDialogButtonBox.h"

QT_BEGIN_NAMESPACE

class Ui_PeopleDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QListWidget *peopleList;
    QPushButton *deselectAllButton;
    QPushButton *changeCharButton;
    PhDialogButtonBox *buttonBox;

    void setupUi(QDialog *PeopleDialog)
    {
        if (PeopleDialog->objectName().isEmpty())
            PeopleDialog->setObjectName(QString::fromUtf8("PeopleDialog"));
        PeopleDialog->resize(392, 356);
        verticalLayout = new QVBoxLayout(PeopleDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(PeopleDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        peopleList = new QListWidget(PeopleDialog);
        peopleList->setObjectName(QString::fromUtf8("peopleList"));
        peopleList->setSelectionMode(QAbstractItemView::ExtendedSelection);

        verticalLayout->addWidget(peopleList);

        deselectAllButton = new QPushButton(PeopleDialog);
        deselectAllButton->setObjectName(QString::fromUtf8("deselectAllButton"));

        verticalLayout->addWidget(deselectAllButton);

        changeCharButton = new QPushButton(PeopleDialog);
        changeCharButton->setObjectName(QString::fromUtf8("changeCharButton"));

        verticalLayout->addWidget(changeCharButton);

        buttonBox = new PhDialogButtonBox(PeopleDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PeopleDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PeopleDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PeopleDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PeopleDialog);
    } // setupUi

    void retranslateUi(QDialog *PeopleDialog)
    {
        PeopleDialog->setWindowTitle(QCoreApplication::translate("PeopleDialog", "Select a character", nullptr));
        label->setText(QCoreApplication::translate("PeopleDialog", "Use command key to select multiple character:", nullptr));
        deselectAllButton->setText(QCoreApplication::translate("PeopleDialog", "Unselect all", nullptr));
        changeCharButton->setText(QCoreApplication::translate("PeopleDialog", "Modify", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PeopleDialog: public Ui_PeopleDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PEOPLEDIALOG_H
