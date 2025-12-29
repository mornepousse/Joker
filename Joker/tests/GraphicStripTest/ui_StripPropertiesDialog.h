/********************************************************************************
** Form generated from reading UI file 'StripPropertiesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRIPPROPERTIESDIALOG_H
#define UI_STRIPPROPERTIESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_StripPropertiesDialog
{
public:
    QGridLayout *gridLayout;
    QLabel *pathLabel;
    QLabel *fpsLabel;
    QLabel *pathContentLabel;
    QLabel *titleContentLabel;
    QLabel *fpsContentLabel;
    QLabel *titleLabel;
    QLabel *videoPathLabel;
    QLabel *videoPathContentLabel;

    void setupUi(QDialog *StripPropertiesDialog)
    {
        if (StripPropertiesDialog->objectName().isEmpty())
            StripPropertiesDialog->setObjectName(QString::fromUtf8("StripPropertiesDialog"));
        StripPropertiesDialog->resize(300, 112);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        StripPropertiesDialog->setFont(font);
        gridLayout = new QGridLayout(StripPropertiesDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pathLabel = new QLabel(StripPropertiesDialog);
        pathLabel->setObjectName(QString::fromUtf8("pathLabel"));
        pathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(pathLabel, 2, 0, 1, 1);

        fpsLabel = new QLabel(StripPropertiesDialog);
        fpsLabel->setObjectName(QString::fromUtf8("fpsLabel"));
        fpsLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(fpsLabel, 3, 0, 1, 1);

        pathContentLabel = new QLabel(StripPropertiesDialog);
        pathContentLabel->setObjectName(QString::fromUtf8("pathContentLabel"));
        pathContentLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(pathContentLabel, 2, 1, 1, 1);

        titleContentLabel = new QLabel(StripPropertiesDialog);
        titleContentLabel->setObjectName(QString::fromUtf8("titleContentLabel"));
        QFont font1;
        font1.setPointSize(13);
        font1.setBold(false);
        font1.setWeight(50);
        titleContentLabel->setFont(font1);
        titleContentLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(titleContentLabel, 0, 1, 1, 1);

        fpsContentLabel = new QLabel(StripPropertiesDialog);
        fpsContentLabel->setObjectName(QString::fromUtf8("fpsContentLabel"));
        fpsContentLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout->addWidget(fpsContentLabel, 3, 1, 1, 1);

        titleLabel = new QLabel(StripPropertiesDialog);
        titleLabel->setObjectName(QString::fromUtf8("titleLabel"));
        titleLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(titleLabel, 0, 0, 1, 1);

        videoPathLabel = new QLabel(StripPropertiesDialog);
        videoPathLabel->setObjectName(QString::fromUtf8("videoPathLabel"));
        videoPathLabel->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(videoPathLabel, 1, 0, 1, 1);

        videoPathContentLabel = new QLabel(StripPropertiesDialog);
        videoPathContentLabel->setObjectName(QString::fromUtf8("videoPathContentLabel"));

        gridLayout->addWidget(videoPathContentLabel, 1, 1, 1, 1);


        retranslateUi(StripPropertiesDialog);

        QMetaObject::connectSlotsByName(StripPropertiesDialog);
    } // setupUi

    void retranslateUi(QDialog *StripPropertiesDialog)
    {
        StripPropertiesDialog->setWindowTitle(QCoreApplication::translate("StripPropertiesDialog", "Properties", nullptr));
        pathLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "Path : ", nullptr));
        fpsLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "FPS : ", nullptr));
        pathContentLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "PathContentLabel", nullptr));
        titleContentLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "TitleContentLabel", nullptr));
        fpsContentLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "FPSContentLabel", nullptr));
        titleLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "Title : ", nullptr));
        videoPathLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "Video Path : ", nullptr));
        videoPathContentLabel->setText(QCoreApplication::translate("StripPropertiesDialog", "VideoPathContentLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StripPropertiesDialog: public Ui_StripPropertiesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRIPPROPERTIESDIALOG_H
