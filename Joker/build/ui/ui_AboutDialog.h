/********************************************************************************
** Form generated from reading UI file 'AboutDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDIALOG_H
#define UI_ABOUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_AboutDialog
{
public:
    QLabel *labelCpRight;
    QLabel *labelVersion;
    QPushButton *pushButton;
    QGraphicsView *graphicsViewIcon;
    QLabel *labelContact;
    QLabel *label;
    QLabel *labelOpenGL;
    QLabel *labelFFMPEG;
    QLabel *revisionLabel;
    QLabel *timePlayedLabel;

    void setupUi(QDialog *AboutDialog)
    {
        if (AboutDialog->objectName().isEmpty())
            AboutDialog->setObjectName(QString::fromUtf8("AboutDialog"));
        AboutDialog->resize(387, 322);
        labelCpRight = new QLabel(AboutDialog);
        labelCpRight->setObjectName(QString::fromUtf8("labelCpRight"));
        labelCpRight->setGeometry(QRect(10, 140, 351, 16));
        labelVersion = new QLabel(AboutDialog);
        labelVersion->setObjectName(QString::fromUtf8("labelVersion"));
        labelVersion->setGeometry(QRect(150, 40, 221, 16));
        labelVersion->setText(QString::fromUtf8("Joker vX.X.X"));
        pushButton = new QPushButton(AboutDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(140, 280, 114, 32));
        graphicsViewIcon = new QGraphicsView(AboutDialog);
        graphicsViewIcon->setObjectName(QString::fromUtf8("graphicsViewIcon"));
        graphicsViewIcon->setGeometry(QRect(30, 20, 100, 100));
        graphicsViewIcon->setFrameShape(QFrame::StyledPanel);
        graphicsViewIcon->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsViewIcon->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 0));
        brush.setStyle(Qt::NoBrush);
        graphicsViewIcon->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 0, 0, 0));
        brush1.setStyle(Qt::NoBrush);
        graphicsViewIcon->setForegroundBrush(brush1);
        labelContact = new QLabel(AboutDialog);
        labelContact->setObjectName(QString::fromUtf8("labelContact"));
        labelContact->setGeometry(QRect(150, 100, 211, 16));
        labelContact->setText(QString::fromUtf8("support@phonations.com"));
        labelContact->setOpenExternalLinks(true);
        label = new QLabel(AboutDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 170, 341, 16));
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);
        labelOpenGL = new QLabel(AboutDialog);
        labelOpenGL->setObjectName(QString::fromUtf8("labelOpenGL"));
        labelOpenGL->setGeometry(QRect(10, 210, 341, 16));
        labelOpenGL->setText(QString::fromUtf8("<html><head/><body><p><a href=\"http://www.opengl.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">OpenGL</span></a></p></body></html>"));
        labelOpenGL->setOpenExternalLinks(true);
        labelFFMPEG = new QLabel(AboutDialog);
        labelFFMPEG->setObjectName(QString::fromUtf8("labelFFMPEG"));
        labelFFMPEG->setGeometry(QRect(10, 190, 341, 16));
        labelFFMPEG->setText(QString::fromUtf8("<html><head/><body><p><a href=\"http://ffmpeg.org/\"><span style=\" text-decoration: underline; color:#0000ff;\">FFMPEG</span></a></p></body></html>"));
        labelFFMPEG->setOpenExternalLinks(true);
        revisionLabel = new QLabel(AboutDialog);
        revisionLabel->setObjectName(QString::fromUtf8("revisionLabel"));
        revisionLabel->setGeometry(QRect(150, 70, 181, 16));
        revisionLabel->setOpenExternalLinks(true);
        timePlayedLabel = new QLabel(AboutDialog);
        timePlayedLabel->setObjectName(QString::fromUtf8("timePlayedLabel"));
        timePlayedLabel->setGeometry(QRect(10, 240, 341, 16));

        retranslateUi(AboutDialog);

        QMetaObject::connectSlotsByName(AboutDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDialog)
    {
        AboutDialog->setWindowTitle(QCoreApplication::translate("AboutDialog", "About Joker", nullptr));
        labelCpRight->setText(QCoreApplication::translate("AboutDialog", "Copyright 2013-2016 Phonations, All rights reserved.", nullptr));
        pushButton->setText(QCoreApplication::translate("AboutDialog", "Close", nullptr));
        label->setText(QCoreApplication::translate("AboutDialog", "Joker is based on the following libraries:", nullptr));
        revisionLabel->setText(QCoreApplication::translate("AboutDialog", "Revision: ", nullptr));
        timePlayedLabel->setText(QCoreApplication::translate("AboutDialog", "Synchronous playback time: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AboutDialog: public Ui_AboutDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDIALOG_H
