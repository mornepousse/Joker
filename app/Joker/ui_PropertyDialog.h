/********************************************************************************
** Form generated from reading UI file 'PropertyDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROPERTYDIALOG_H
#define UI_PROPERTYDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PropertyDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *titleLabel;
    QLabel *label_2;
    QLabel *authorLabel;
    QLabel *label_4;
    QLabel *tcInLabel;
    QLabel *label_5;
    QLabel *tcOutLabel;
    QLabel *label_8;
    QLabel *peopleNumberLabel;
    QLabel *label_10;
    QLabel *charNumberLabel;
    QFrame *line_2;
    QLabel *label_7;
    QLabel *label_9;
    QLabel *label_3;
    QLabel *videoFileLabel;
    QLabel *label_6;
    QLabel *videoTCInLabel;
    QLabel *label_11;
    QLabel *resolutionLabel;
    QLabel *label_13;
    QLabel *codecNameLabel;
    QLabel *label_15;
    QLabel *fpsLabel;
    QLabel *label_12;
    QLabel *videoTCOutLabel;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PropertyDialog)
    {
        if (PropertyDialog->objectName().isEmpty())
            PropertyDialog->setObjectName(QString::fromUtf8("PropertyDialog"));
        PropertyDialog->resize(301, 409);
        verticalLayout = new QVBoxLayout(PropertyDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        label = new QLabel(PropertyDialog);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        titleLabel = new QLabel(PropertyDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        QFont font;
        font.setItalic(true);
        titleLabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, titleLabel);

        label_2 = new QLabel(PropertyDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        authorLabel = new QLabel(PropertyDialog);
        authorLabel->setObjectName(QString::fromUtf8("authorLabel"));
        authorLabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, authorLabel);

        label_4 = new QLabel(PropertyDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        tcInLabel = new QLabel(PropertyDialog);
        tcInLabel->setObjectName(QString::fromUtf8("tcInLabel"));
        tcInLabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, tcInLabel);

        label_5 = new QLabel(PropertyDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        tcOutLabel = new QLabel(PropertyDialog);
        tcOutLabel->setObjectName(QString::fromUtf8("tcOutLabel"));
        tcOutLabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, tcOutLabel);

        label_8 = new QLabel(PropertyDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_8);

        peopleNumberLabel = new QLabel(PropertyDialog);
        peopleNumberLabel->setObjectName(QString::fromUtf8("peopleNumberLabel"));
        peopleNumberLabel->setFont(font);

        formLayout->setWidget(5, QFormLayout::FieldRole, peopleNumberLabel);

        label_10 = new QLabel(PropertyDialog);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_10);

        charNumberLabel = new QLabel(PropertyDialog);
        charNumberLabel->setObjectName(QString::fromUtf8("charNumberLabel"));
        charNumberLabel->setFont(font);

        formLayout->setWidget(6, QFormLayout::FieldRole, charNumberLabel);

        line_2 = new QFrame(PropertyDialog);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        formLayout->setWidget(14, QFormLayout::LabelRole, line_2);

        label_7 = new QLabel(PropertyDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        QFont font1;
        font1.setBold(true);
        font1.setWeight(75);
        label_7->setFont(font1);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        label_9 = new QLabel(PropertyDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font1);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_9);

        label_3 = new QLabel(PropertyDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_3);

        videoFileLabel = new QLabel(PropertyDialog);
        videoFileLabel->setObjectName(QString::fromUtf8("videoFileLabel"));
        videoFileLabel->setFont(font);

        formLayout->setWidget(8, QFormLayout::FieldRole, videoFileLabel);

        label_6 = new QLabel(PropertyDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_6);

        videoTCInLabel = new QLabel(PropertyDialog);
        videoTCInLabel->setObjectName(QString::fromUtf8("videoTCInLabel"));
        videoTCInLabel->setFont(font);

        formLayout->setWidget(9, QFormLayout::FieldRole, videoTCInLabel);

        label_11 = new QLabel(PropertyDialog);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        formLayout->setWidget(11, QFormLayout::LabelRole, label_11);

        resolutionLabel = new QLabel(PropertyDialog);
        resolutionLabel->setObjectName(QString::fromUtf8("resolutionLabel"));
        resolutionLabel->setFont(font);

        formLayout->setWidget(11, QFormLayout::FieldRole, resolutionLabel);

        label_13 = new QLabel(PropertyDialog);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        formLayout->setWidget(13, QFormLayout::LabelRole, label_13);

        codecNameLabel = new QLabel(PropertyDialog);
        codecNameLabel->setObjectName(QString::fromUtf8("codecNameLabel"));
        codecNameLabel->setFont(font);

        formLayout->setWidget(13, QFormLayout::FieldRole, codecNameLabel);

        label_15 = new QLabel(PropertyDialog);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(12, QFormLayout::LabelRole, label_15);

        fpsLabel = new QLabel(PropertyDialog);
        fpsLabel->setObjectName(QString::fromUtf8("fpsLabel"));
        fpsLabel->setFont(font);

        formLayout->setWidget(12, QFormLayout::FieldRole, fpsLabel);

        label_12 = new QLabel(PropertyDialog);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        formLayout->setWidget(10, QFormLayout::LabelRole, label_12);

        videoTCOutLabel = new QLabel(PropertyDialog);
        videoTCOutLabel->setObjectName(QString::fromUtf8("videoTCOutLabel"));
        videoTCOutLabel->setFont(font);

        formLayout->setWidget(10, QFormLayout::FieldRole, videoTCOutLabel);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(PropertyDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PropertyDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PropertyDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PropertyDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PropertyDialog);
    } // setupUi

    void retranslateUi(QDialog *PropertyDialog)
    {
        PropertyDialog->setWindowTitle(QCoreApplication::translate("PropertyDialog", "Properties", nullptr));
        label->setText(QCoreApplication::translate("PropertyDialog", "Title:", nullptr));
        titleLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_2->setText(QCoreApplication::translate("PropertyDialog", "Author:", nullptr));
        authorLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_4->setText(QCoreApplication::translate("PropertyDialog", "TC In:", nullptr));
        tcInLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_5->setText(QCoreApplication::translate("PropertyDialog", "TC Out:", nullptr));
        tcOutLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_8->setText(QCoreApplication::translate("PropertyDialog", "People number:", nullptr));
        peopleNumberLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_10->setText(QCoreApplication::translate("PropertyDialog", "Text character number:", nullptr));
        charNumberLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_7->setText(QCoreApplication::translate("PropertyDialog", "Strip:", nullptr));
        label_9->setText(QCoreApplication::translate("PropertyDialog", "Video:", nullptr));
        label_3->setText(QCoreApplication::translate("PropertyDialog", "Video file:", nullptr));
        videoFileLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_6->setText(QCoreApplication::translate("PropertyDialog", "TC In:", nullptr));
        videoTCInLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_11->setText(QCoreApplication::translate("PropertyDialog", "Resolution:", nullptr));
        resolutionLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_13->setText(QCoreApplication::translate("PropertyDialog", "Codec name:", nullptr));
        codecNameLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_15->setText(QCoreApplication::translate("PropertyDialog", "FPS:", nullptr));
        fpsLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
        label_12->setText(QCoreApplication::translate("PropertyDialog", "TC Out:", nullptr));
        videoTCOutLabel->setText(QCoreApplication::translate("PropertyDialog", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PropertyDialog: public Ui_PropertyDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROPERTYDIALOG_H
