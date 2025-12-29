/********************************************************************************
** Form generated from reading UI file 'PhFeedbackDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHFEEDBACKDIALOG_H
#define UI_PHFEEDBACKDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PhFeedbackDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *problemLabel;
    QLabel *labelMsg;
    QTextEdit *textEditComment;
    QLabel *labelTitle_2;
    QComboBox *comboBoxEmails;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PhFeedbackDialog)
    {
        if (PhFeedbackDialog->objectName().isEmpty())
            PhFeedbackDialog->setObjectName(QString::fromUtf8("PhFeedbackDialog"));
        PhFeedbackDialog->resize(364, 369);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PhFeedbackDialog->sizePolicy().hasHeightForWidth());
        PhFeedbackDialog->setSizePolicy(sizePolicy);
        PhFeedbackDialog->setMinimumSize(QSize(0, 0));
        verticalLayout = new QVBoxLayout(PhFeedbackDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        problemLabel = new QLabel(PhFeedbackDialog);
        problemLabel->setObjectName(QString::fromUtf8("problemLabel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        problemLabel->setFont(font);

        verticalLayout->addWidget(problemLabel);

        labelMsg = new QLabel(PhFeedbackDialog);
        labelMsg->setObjectName(QString::fromUtf8("labelMsg"));
        sizePolicy.setHeightForWidth(labelMsg->sizePolicy().hasHeightForWidth());
        labelMsg->setSizePolicy(sizePolicy);
        labelMsg->setWordWrap(true);

        verticalLayout->addWidget(labelMsg);

        textEditComment = new QTextEdit(PhFeedbackDialog);
        textEditComment->setObjectName(QString::fromUtf8("textEditComment"));
        textEditComment->setMinimumSize(QSize(0, 0));

        verticalLayout->addWidget(textEditComment);

        labelTitle_2 = new QLabel(PhFeedbackDialog);
        labelTitle_2->setObjectName(QString::fromUtf8("labelTitle_2"));
        sizePolicy.setHeightForWidth(labelTitle_2->sizePolicy().hasHeightForWidth());
        labelTitle_2->setSizePolicy(sizePolicy);
        labelTitle_2->setTextFormat(Qt::AutoText);
        labelTitle_2->setScaledContents(false);
        labelTitle_2->setWordWrap(true);

        verticalLayout->addWidget(labelTitle_2);

        comboBoxEmails = new QComboBox(PhFeedbackDialog);
        comboBoxEmails->setObjectName(QString::fromUtf8("comboBoxEmails"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBoxEmails->sizePolicy().hasHeightForWidth());
        comboBoxEmails->setSizePolicy(sizePolicy1);
        comboBoxEmails->setEditable(true);

        verticalLayout->addWidget(comboBoxEmails);

        buttonBox = new QDialogButtonBox(PhFeedbackDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PhFeedbackDialog);

        QMetaObject::connectSlotsByName(PhFeedbackDialog);
    } // setupUi

    void retranslateUi(QDialog *PhFeedbackDialog)
    {
        PhFeedbackDialog->setWindowTitle(QCoreApplication::translate("PhFeedbackDialog", "Feedback report", nullptr));
        problemLabel->setText(QCoreApplication::translate("PhFeedbackDialog", "Having problem with %1 ?", nullptr));
        labelMsg->setText(QCoreApplication::translate("PhFeedbackDialog", "To help us improve this software, please send us this feedback report:", nullptr));
        textEditComment->setPlaceholderText(QCoreApplication::translate("PhFeedbackDialog", "Any information or idea is valuable !", nullptr));
        labelTitle_2->setText(QCoreApplication::translate("PhFeedbackDialog", "Your email address if you would like us to get in touch with you :", nullptr));
        comboBoxEmails->setCurrentText(QString());
    } // retranslateUi

};

namespace Ui {
    class PhFeedbackDialog: public Ui_PhFeedbackDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHFEEDBACKDIALOG_H
