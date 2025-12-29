/********************************************************************************
** Form generated from reading UI file 'PhMediaPanel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PHMEDIAPANEL_H
#define UI_PHMEDIAPANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PhMediaPanel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *_hLayoutTop;
    QLabel *_timecodeLabel;
    QLabel *_rateLabel;
    QSlider *_slider;
    QHBoxLayout *_hLayoutBottom;
    QPushButton *_backButton;
    QPushButton *_fastRewindButton;
    QPushButton *_previousFrameButton;
    QPushButton *_playButton;
    QPushButton *_nextFrameButton;
    QPushButton *_fastForwardButton;
    QComboBox *timeCodeTypeCombo;

    void setupUi(QWidget *PhMediaPanel)
    {
        if (PhMediaPanel->objectName().isEmpty())
            PhMediaPanel->setObjectName(QString::fromUtf8("PhMediaPanel"));
        PhMediaPanel->resize(535, 150);
        PhMediaPanel->setWindowTitle(QString::fromUtf8("Form"));
        PhMediaPanel->setStyleSheet(QString::fromUtf8("QLabel {\n"
"	color: white;\n"
"}\n"
"QPushButton, QComboBox {\n"
"	color: white;\n"
"	background: grey;\n"
"	border-style: solid;\n"
"	border-width: 1px;\n"
"	border-radius: 5px;\n"
"	border-color: white;\n"
"}\n"
"\n"
"QComboBox::drop-down {\n"
"	border-style: solid;\n"
"	border-width: 0 0 0 1px;\n"
"	border-color: white;\n"
"}\n"
"\n"
"QComboBox::down-arrow {\n"
"    image: url(:drop);\n"
"	width: 16px;\n"
"}\n"
"\n"
"#PhMediaPanel {\n"
"	background: qlineargradient(spread:pad, x1:0, y1:0, x2:0, y2:1, stop:0 rgba(60, 60, 60, 255), stop:1 rgba(0, 0, 0, 255));\n"
"}"));
        verticalLayout = new QVBoxLayout(PhMediaPanel);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 0, 5, 0);
        _hLayoutTop = new QHBoxLayout();
        _hLayoutTop->setObjectName(QString::fromUtf8("_hLayoutTop"));
        _timecodeLabel = new QLabel(PhMediaPanel);
        _timecodeLabel->setObjectName(QString::fromUtf8("_timecodeLabel"));
        _timecodeLabel->setMinimumSize(QSize(0, 60));
        _timecodeLabel->setMaximumSize(QSize(16777215, 60));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Unicode MS"));
        font.setPointSize(45);
        _timecodeLabel->setFont(font);
        _timecodeLabel->setText(QString::fromUtf8("00:00:00:00"));
        _timecodeLabel->setAlignment(Qt::AlignCenter);
        _timecodeLabel->setMargin(0);

        _hLayoutTop->addWidget(_timecodeLabel);

        _rateLabel = new QLabel(PhMediaPanel);
        _rateLabel->setObjectName(QString::fromUtf8("_rateLabel"));
        _rateLabel->setMinimumSize(QSize(0, 60));
        _rateLabel->setMaximumSize(QSize(16777215, 60));
        QFont font1;
        font1.setPointSize(24);
        _rateLabel->setFont(font1);
        _rateLabel->setText(QString::fromUtf8("x0"));

        _hLayoutTop->addWidget(_rateLabel);

        _hLayoutTop->setStretch(0, 2);

        verticalLayout->addLayout(_hLayoutTop);

        _slider = new QSlider(PhMediaPanel);
        _slider->setObjectName(QString::fromUtf8("_slider"));
        _slider->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(_slider);

        _hLayoutBottom = new QHBoxLayout();
        _hLayoutBottom->setSpacing(10);
        _hLayoutBottom->setObjectName(QString::fromUtf8("_hLayoutBottom"));
        _backButton = new QPushButton(PhMediaPanel);
        _backButton->setObjectName(QString::fromUtf8("_backButton"));
        _backButton->setMinimumSize(QSize(0, 30));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/PhCommonUI/fast-backward"), QSize(), QIcon::Normal, QIcon::On);
        _backButton->setIcon(icon);

        _hLayoutBottom->addWidget(_backButton);

        _fastRewindButton = new QPushButton(PhMediaPanel);
        _fastRewindButton->setObjectName(QString::fromUtf8("_fastRewindButton"));
        _fastRewindButton->setMinimumSize(QSize(0, 30));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/PhCommonUI/backward"), QSize(), QIcon::Normal, QIcon::On);
        _fastRewindButton->setIcon(icon1);

        _hLayoutBottom->addWidget(_fastRewindButton);

        _previousFrameButton = new QPushButton(PhMediaPanel);
        _previousFrameButton->setObjectName(QString::fromUtf8("_previousFrameButton"));
        _previousFrameButton->setMinimumSize(QSize(0, 30));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/PhCommonUI/step-backward"), QSize(), QIcon::Normal, QIcon::On);
        _previousFrameButton->setIcon(icon2);

        _hLayoutBottom->addWidget(_previousFrameButton);

        _playButton = new QPushButton(PhMediaPanel);
        _playButton->setObjectName(QString::fromUtf8("_playButton"));
        _playButton->setMinimumSize(QSize(0, 30));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/PhCommonUI/play"), QSize(), QIcon::Normal, QIcon::On);
        _playButton->setIcon(icon3);

        _hLayoutBottom->addWidget(_playButton);

        _nextFrameButton = new QPushButton(PhMediaPanel);
        _nextFrameButton->setObjectName(QString::fromUtf8("_nextFrameButton"));
        _nextFrameButton->setMinimumSize(QSize(0, 30));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/PhCommonUI/step-forward"), QSize(), QIcon::Normal, QIcon::On);
        _nextFrameButton->setIcon(icon4);

        _hLayoutBottom->addWidget(_nextFrameButton);

        _fastForwardButton = new QPushButton(PhMediaPanel);
        _fastForwardButton->setObjectName(QString::fromUtf8("_fastForwardButton"));
        _fastForwardButton->setMinimumSize(QSize(0, 30));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/PhCommonUI/forward"), QSize(), QIcon::Normal, QIcon::On);
        _fastForwardButton->setIcon(icon5);

        _hLayoutBottom->addWidget(_fastForwardButton);

        timeCodeTypeCombo = new QComboBox(PhMediaPanel);
        timeCodeTypeCombo->addItem(QString());
        timeCodeTypeCombo->addItem(QString());
        timeCodeTypeCombo->addItem(QString());
        timeCodeTypeCombo->addItem(QString());
        timeCodeTypeCombo->addItem(QString());
        timeCodeTypeCombo->setObjectName(QString::fromUtf8("timeCodeTypeCombo"));
        timeCodeTypeCombo->setMinimumSize(QSize(100, 30));
        timeCodeTypeCombo->setMaximumSize(QSize(100, 16777215));

        _hLayoutBottom->addWidget(timeCodeTypeCombo);


        verticalLayout->addLayout(_hLayoutBottom);


        retranslateUi(PhMediaPanel);

        QMetaObject::connectSlotsByName(PhMediaPanel);
    } // setupUi

    void retranslateUi(QWidget *PhMediaPanel)
    {
        _backButton->setText(QString());
        _fastRewindButton->setText(QString());
        _previousFrameButton->setText(QString());
        _playButton->setText(QString());
        _nextFrameButton->setText(QString());
        _fastForwardButton->setText(QString());
        timeCodeTypeCombo->setItemText(0, QCoreApplication::translate("PhMediaPanel", "23.98 fps", nullptr));
        timeCodeTypeCombo->setItemText(1, QCoreApplication::translate("PhMediaPanel", "24 fps", nullptr));
        timeCodeTypeCombo->setItemText(2, QCoreApplication::translate("PhMediaPanel", "25 fps", nullptr));
        timeCodeTypeCombo->setItemText(3, QCoreApplication::translate("PhMediaPanel", "29.97 fps", nullptr));
        timeCodeTypeCombo->setItemText(4, QCoreApplication::translate("PhMediaPanel", "30 fps", nullptr));

        (void)PhMediaPanel;
    } // retranslateUi

};

namespace Ui {
    class PhMediaPanel: public Ui_PhMediaPanel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PHMEDIAPANEL_H
