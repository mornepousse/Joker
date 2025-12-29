/********************************************************************************
** Form generated from reading UI file 'PreferencesDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCESDIALOG_H
#define UI_PREFERENCESDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "PhCommonUI/PhDialogButtonBox.h"
#include "PhCommonUI/PhLockableSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout_0;
    QTabWidget *tabWidget;
    QWidget *tabGeneral;
    QVBoxLayout *verticalLayout;
    QGroupBox *interfaceGroupBox;
    QFormLayout *formLayout_8;
    QLabel *label_5;
    QComboBox *cboBoxLang;
    QGroupBox *delayGroupBox;
    QFormLayout *formLayout_7;
    QLabel *mainDelayLabel;
    PhLockableSpinBox *mainScreenDelayspinBox;
    QLabel *label_2;
    PhLockableSpinBox *secondScreenDelaySpinBox;
    QGroupBox *pipGroupBox;
    QFormLayout *formLayout_6;
    QLabel *pipRatioLabel;
    QLabel *pipOffsetLabel;
    QSpinBox *pipOffsetSpinBox;
    QSlider *pipRatioSlider;
    QRadioButton *pipLeftPositionRadioButton;
    QLabel *pipPositionLabel;
    QRadioButton *pipRightPositionRadioButton;
    QWidget *tabStrip;
    QFormLayout *formLayout;
    QLabel *lblSpeed;
    QSpinBox *spinBoxSpeed;
    QLabel *fontLabel;
    QFontComboBox *fontComboBox;
    QLabel *lblStripHeight;
    QSlider *sliderStripHeight;
    QWidget *tabSynchro;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *noSyncRadioButton;
    QRadioButton *sonyRadioButton;
    QFrame *sonyFrame;
    QFormLayout *formLayout_4;
    QLabel *sonyCommunicationTimeCodeTypeLabel;
    QComboBox *sonyCommunicationTimeCodeTypeComboBox;
    QLabel *sonyVideoSyncTimeCodeTypeLabel;
    QComboBox *sonyVideoSyncTimeCodeTypeComboBox;
    QRadioButton *ltcRadioButton;
    QFrame *ltcFrame;
    QFormLayout *formLayout_2;
    QComboBox *ltcInputPortComboBox;
    QLabel *ltcInputPortLabel;
    QRadioButton *mtcRadioButton;
    QFrame *mtcFrame;
    QFormLayout *formLayout_3;
    QComboBox *mtcExistingInputPortComboBox;
    QRadioButton *mtcExistingInputPortRadioButton;
    QRadioButton *mtcVirtualInputPortRadioButton;
    QLineEdit *mtcVirtualInputPortLineEdit;
    QCheckBox *mtcForce24as2398CheckBox;
    QCheckBox *mmcCheckBox;
    QFrame *mmcFrame;
    QFormLayout *formLayout_5;
    QComboBox *mmcOutputPortComboBox;
    QLabel *mmcOutputPortLabel;
    PhDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(503, 569);
        PreferencesDialog->setModal(true);
        verticalLayout_0 = new QVBoxLayout(PreferencesDialog);
        verticalLayout_0->setSpacing(6);
        verticalLayout_0->setContentsMargins(11, 11, 11, 11);
        verticalLayout_0->setObjectName(QString::fromUtf8("verticalLayout_0"));
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabGeneral = new QWidget();
        tabGeneral->setObjectName(QString::fromUtf8("tabGeneral"));
        verticalLayout = new QVBoxLayout(tabGeneral);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        interfaceGroupBox = new QGroupBox(tabGeneral);
        interfaceGroupBox->setObjectName(QString::fromUtf8("interfaceGroupBox"));
        formLayout_8 = new QFormLayout(interfaceGroupBox);
        formLayout_8->setSpacing(6);
        formLayout_8->setContentsMargins(11, 11, 11, 11);
        formLayout_8->setObjectName(QString::fromUtf8("formLayout_8"));
        label_5 = new QLabel(interfaceGroupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout_8->setWidget(0, QFormLayout::LabelRole, label_5);

        cboBoxLang = new QComboBox(interfaceGroupBox);
        cboBoxLang->setObjectName(QString::fromUtf8("cboBoxLang"));

        formLayout_8->setWidget(0, QFormLayout::FieldRole, cboBoxLang);


        verticalLayout->addWidget(interfaceGroupBox);

        delayGroupBox = new QGroupBox(tabGeneral);
        delayGroupBox->setObjectName(QString::fromUtf8("delayGroupBox"));
        formLayout_7 = new QFormLayout(delayGroupBox);
        formLayout_7->setSpacing(6);
        formLayout_7->setContentsMargins(11, 11, 11, 11);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        mainDelayLabel = new QLabel(delayGroupBox);
        mainDelayLabel->setObjectName(QString::fromUtf8("mainDelayLabel"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, mainDelayLabel);

        mainScreenDelayspinBox = new PhLockableSpinBox(delayGroupBox);
        mainScreenDelayspinBox->setObjectName(QString::fromUtf8("mainScreenDelayspinBox"));
        mainScreenDelayspinBox->setMaximum(1000);
        mainScreenDelayspinBox->setSingleStep(10);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, mainScreenDelayspinBox);

        label_2 = new QLabel(delayGroupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_2);

        secondScreenDelaySpinBox = new PhLockableSpinBox(delayGroupBox);
        secondScreenDelaySpinBox->setObjectName(QString::fromUtf8("secondScreenDelaySpinBox"));
        secondScreenDelaySpinBox->setMaximum(1000);
        secondScreenDelaySpinBox->setSingleStep(10);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, secondScreenDelaySpinBox);


        verticalLayout->addWidget(delayGroupBox);

        pipGroupBox = new QGroupBox(tabGeneral);
        pipGroupBox->setObjectName(QString::fromUtf8("pipGroupBox"));
        formLayout_6 = new QFormLayout(pipGroupBox);
        formLayout_6->setSpacing(6);
        formLayout_6->setContentsMargins(11, 11, 11, 11);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        pipRatioLabel = new QLabel(pipGroupBox);
        pipRatioLabel->setObjectName(QString::fromUtf8("pipRatioLabel"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, pipRatioLabel);

        pipOffsetLabel = new QLabel(pipGroupBox);
        pipOffsetLabel->setObjectName(QString::fromUtf8("pipOffsetLabel"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, pipOffsetLabel);

        pipOffsetSpinBox = new QSpinBox(pipGroupBox);
        pipOffsetSpinBox->setObjectName(QString::fromUtf8("pipOffsetSpinBox"));
        pipOffsetSpinBox->setMaximum(1000);
        pipOffsetSpinBox->setSingleStep(100);
        pipOffsetSpinBox->setValue(1000);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, pipOffsetSpinBox);

        pipRatioSlider = new QSlider(pipGroupBox);
        pipRatioSlider->setObjectName(QString::fromUtf8("pipRatioSlider"));
        pipRatioSlider->setMaximum(50);
        pipRatioSlider->setSingleStep(10);
        pipRatioSlider->setSliderPosition(30);
        pipRatioSlider->setOrientation(Qt::Horizontal);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, pipRatioSlider);

        pipLeftPositionRadioButton = new QRadioButton(pipGroupBox);
        pipLeftPositionRadioButton->setObjectName(QString::fromUtf8("pipLeftPositionRadioButton"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, pipLeftPositionRadioButton);

        pipPositionLabel = new QLabel(pipGroupBox);
        pipPositionLabel->setObjectName(QString::fromUtf8("pipPositionLabel"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, pipPositionLabel);

        pipRightPositionRadioButton = new QRadioButton(pipGroupBox);
        pipRightPositionRadioButton->setObjectName(QString::fromUtf8("pipRightPositionRadioButton"));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, pipRightPositionRadioButton);


        verticalLayout->addWidget(pipGroupBox);

        tabWidget->addTab(tabGeneral, QString());
        tabStrip = new QWidget();
        tabStrip->setObjectName(QString::fromUtf8("tabStrip"));
        formLayout = new QFormLayout(tabStrip);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        lblSpeed = new QLabel(tabStrip);
        lblSpeed->setObjectName(QString::fromUtf8("lblSpeed"));

        formLayout->setWidget(0, QFormLayout::LabelRole, lblSpeed);

        spinBoxSpeed = new QSpinBox(tabStrip);
        spinBoxSpeed->setObjectName(QString::fromUtf8("spinBoxSpeed"));
        spinBoxSpeed->setMinimum(1);
        spinBoxSpeed->setMaximum(100);
        spinBoxSpeed->setValue(12);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxSpeed);

        fontLabel = new QLabel(tabStrip);
        fontLabel->setObjectName(QString::fromUtf8("fontLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, fontLabel);

        fontComboBox = new QFontComboBox(tabStrip);
        fontComboBox->setObjectName(QString::fromUtf8("fontComboBox"));

        formLayout->setWidget(3, QFormLayout::FieldRole, fontComboBox);

        lblStripHeight = new QLabel(tabStrip);
        lblStripHeight->setObjectName(QString::fromUtf8("lblStripHeight"));

        formLayout->setWidget(4, QFormLayout::LabelRole, lblStripHeight);

        sliderStripHeight = new QSlider(tabStrip);
        sliderStripHeight->setObjectName(QString::fromUtf8("sliderStripHeight"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(sliderStripHeight->sizePolicy().hasHeightForWidth());
        sliderStripHeight->setSizePolicy(sizePolicy);
        sliderStripHeight->setMaximumSize(QSize(22, 16777215));
        sliderStripHeight->setLayoutDirection(Qt::LeftToRight);
        sliderStripHeight->setMaximum(100);
        sliderStripHeight->setOrientation(Qt::Vertical);

        formLayout->setWidget(4, QFormLayout::FieldRole, sliderStripHeight);

        tabWidget->addTab(tabStrip, QString());
        tabSynchro = new QWidget();
        tabSynchro->setObjectName(QString::fromUtf8("tabSynchro"));
        verticalLayout_2 = new QVBoxLayout(tabSynchro);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        noSyncRadioButton = new QRadioButton(tabSynchro);
        noSyncRadioButton->setObjectName(QString::fromUtf8("noSyncRadioButton"));

        verticalLayout_2->addWidget(noSyncRadioButton);

        sonyRadioButton = new QRadioButton(tabSynchro);
        sonyRadioButton->setObjectName(QString::fromUtf8("sonyRadioButton"));

        verticalLayout_2->addWidget(sonyRadioButton);

        sonyFrame = new QFrame(tabSynchro);
        sonyFrame->setObjectName(QString::fromUtf8("sonyFrame"));
        sonyFrame->setFrameShape(QFrame::StyledPanel);
        sonyFrame->setFrameShadow(QFrame::Raised);
        formLayout_4 = new QFormLayout(sonyFrame);
        formLayout_4->setSpacing(6);
        formLayout_4->setContentsMargins(11, 11, 11, 11);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        sonyCommunicationTimeCodeTypeLabel = new QLabel(sonyFrame);
        sonyCommunicationTimeCodeTypeLabel->setObjectName(QString::fromUtf8("sonyCommunicationTimeCodeTypeLabel"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, sonyCommunicationTimeCodeTypeLabel);

        sonyCommunicationTimeCodeTypeComboBox = new QComboBox(sonyFrame);
        sonyCommunicationTimeCodeTypeComboBox->addItem(QString());
        sonyCommunicationTimeCodeTypeComboBox->addItem(QString());
        sonyCommunicationTimeCodeTypeComboBox->addItem(QString());
        sonyCommunicationTimeCodeTypeComboBox->addItem(QString());
        sonyCommunicationTimeCodeTypeComboBox->addItem(QString());
        sonyCommunicationTimeCodeTypeComboBox->setObjectName(QString::fromUtf8("sonyCommunicationTimeCodeTypeComboBox"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, sonyCommunicationTimeCodeTypeComboBox);

        sonyVideoSyncTimeCodeTypeLabel = new QLabel(sonyFrame);
        sonyVideoSyncTimeCodeTypeLabel->setObjectName(QString::fromUtf8("sonyVideoSyncTimeCodeTypeLabel"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, sonyVideoSyncTimeCodeTypeLabel);

        sonyVideoSyncTimeCodeTypeComboBox = new QComboBox(sonyFrame);
        sonyVideoSyncTimeCodeTypeComboBox->addItem(QString());
        sonyVideoSyncTimeCodeTypeComboBox->addItem(QString());
        sonyVideoSyncTimeCodeTypeComboBox->addItem(QString());
        sonyVideoSyncTimeCodeTypeComboBox->addItem(QString());
        sonyVideoSyncTimeCodeTypeComboBox->addItem(QString());
        sonyVideoSyncTimeCodeTypeComboBox->setObjectName(QString::fromUtf8("sonyVideoSyncTimeCodeTypeComboBox"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, sonyVideoSyncTimeCodeTypeComboBox);


        verticalLayout_2->addWidget(sonyFrame);

        ltcRadioButton = new QRadioButton(tabSynchro);
        ltcRadioButton->setObjectName(QString::fromUtf8("ltcRadioButton"));

        verticalLayout_2->addWidget(ltcRadioButton);

        ltcFrame = new QFrame(tabSynchro);
        ltcFrame->setObjectName(QString::fromUtf8("ltcFrame"));
        ltcFrame->setFrameShape(QFrame::StyledPanel);
        ltcFrame->setFrameShadow(QFrame::Raised);
        formLayout_2 = new QFormLayout(ltcFrame);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setFieldGrowthPolicy(QFormLayout::FieldsStayAtSizeHint);
        ltcInputPortComboBox = new QComboBox(ltcFrame);
        ltcInputPortComboBox->setObjectName(QString::fromUtf8("ltcInputPortComboBox"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, ltcInputPortComboBox);

        ltcInputPortLabel = new QLabel(ltcFrame);
        ltcInputPortLabel->setObjectName(QString::fromUtf8("ltcInputPortLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, ltcInputPortLabel);


        verticalLayout_2->addWidget(ltcFrame);

        mtcRadioButton = new QRadioButton(tabSynchro);
        mtcRadioButton->setObjectName(QString::fromUtf8("mtcRadioButton"));

        verticalLayout_2->addWidget(mtcRadioButton);

        mtcFrame = new QFrame(tabSynchro);
        mtcFrame->setObjectName(QString::fromUtf8("mtcFrame"));
        mtcFrame->setFrameShape(QFrame::StyledPanel);
        mtcFrame->setFrameShadow(QFrame::Raised);
        formLayout_3 = new QFormLayout(mtcFrame);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        mtcExistingInputPortComboBox = new QComboBox(mtcFrame);
        mtcExistingInputPortComboBox->setObjectName(QString::fromUtf8("mtcExistingInputPortComboBox"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, mtcExistingInputPortComboBox);

        mtcExistingInputPortRadioButton = new QRadioButton(mtcFrame);
        mtcExistingInputPortRadioButton->setObjectName(QString::fromUtf8("mtcExistingInputPortRadioButton"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, mtcExistingInputPortRadioButton);

        mtcVirtualInputPortRadioButton = new QRadioButton(mtcFrame);
        mtcVirtualInputPortRadioButton->setObjectName(QString::fromUtf8("mtcVirtualInputPortRadioButton"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, mtcVirtualInputPortRadioButton);

        mtcVirtualInputPortLineEdit = new QLineEdit(mtcFrame);
        mtcVirtualInputPortLineEdit->setObjectName(QString::fromUtf8("mtcVirtualInputPortLineEdit"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, mtcVirtualInputPortLineEdit);

        mtcForce24as2398CheckBox = new QCheckBox(mtcFrame);
        mtcForce24as2398CheckBox->setObjectName(QString::fromUtf8("mtcForce24as2398CheckBox"));

        formLayout_3->setWidget(2, QFormLayout::SpanningRole, mtcForce24as2398CheckBox);


        verticalLayout_2->addWidget(mtcFrame);

        mmcCheckBox = new QCheckBox(tabSynchro);
        mmcCheckBox->setObjectName(QString::fromUtf8("mmcCheckBox"));

        verticalLayout_2->addWidget(mmcCheckBox);

        mmcFrame = new QFrame(tabSynchro);
        mmcFrame->setObjectName(QString::fromUtf8("mmcFrame"));
        mmcFrame->setFrameShape(QFrame::StyledPanel);
        mmcFrame->setFrameShadow(QFrame::Raised);
        formLayout_5 = new QFormLayout(mmcFrame);
        formLayout_5->setSpacing(6);
        formLayout_5->setContentsMargins(11, 11, 11, 11);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        mmcOutputPortComboBox = new QComboBox(mmcFrame);
        mmcOutputPortComboBox->setObjectName(QString::fromUtf8("mmcOutputPortComboBox"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, mmcOutputPortComboBox);

        mmcOutputPortLabel = new QLabel(mmcFrame);
        mmcOutputPortLabel->setObjectName(QString::fromUtf8("mmcOutputPortLabel"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, mmcOutputPortLabel);


        verticalLayout_2->addWidget(mmcFrame);

        tabWidget->addTab(tabSynchro, QString());

        verticalLayout_0->addWidget(tabWidget);

        buttonBox = new PhDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_0->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QCoreApplication::translate("PreferencesDialog", "Preferences", nullptr));
        interfaceGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Interface:", nullptr));
        label_5->setText(QCoreApplication::translate("PreferencesDialog", "Language:", nullptr));
        delayGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Delay:", nullptr));
        mainDelayLabel->setText(QCoreApplication::translate("PreferencesDialog", "Main screen delay (ms):", nullptr));
        label_2->setText(QCoreApplication::translate("PreferencesDialog", "Second screen delay (ms):", nullptr));
        pipGroupBox->setTitle(QCoreApplication::translate("PreferencesDialog", "Picture in picture:", nullptr));
        pipRatioLabel->setText(QCoreApplication::translate("PreferencesDialog", "Ratio:", nullptr));
        pipOffsetLabel->setText(QCoreApplication::translate("PreferencesDialog", "Offset (ms):", nullptr));
        pipLeftPositionRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "Left", nullptr));
        pipPositionLabel->setText(QCoreApplication::translate("PreferencesDialog", "Position:", nullptr));
        pipRightPositionRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "Right", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabGeneral), QCoreApplication::translate("PreferencesDialog", "General", nullptr));
        lblSpeed->setText(QCoreApplication::translate("PreferencesDialog", "Speed:", nullptr));
        fontLabel->setText(QCoreApplication::translate("PreferencesDialog", "Font:", nullptr));
        lblStripHeight->setText(QCoreApplication::translate("PreferencesDialog", "Strip Height", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabStrip), QCoreApplication::translate("PreferencesDialog", "Strip", nullptr));
        noSyncRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "No sync", nullptr));
        sonyRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "Sony 9 pin", nullptr));
        sonyCommunicationTimeCodeTypeLabel->setText(QCoreApplication::translate("PreferencesDialog", "Communication framerate:", nullptr));
        sonyCommunicationTimeCodeTypeComboBox->setItemText(0, QCoreApplication::translate("PreferencesDialog", "23.98 fps", nullptr));
        sonyCommunicationTimeCodeTypeComboBox->setItemText(1, QCoreApplication::translate("PreferencesDialog", "24 fps", nullptr));
        sonyCommunicationTimeCodeTypeComboBox->setItemText(2, QCoreApplication::translate("PreferencesDialog", "25 fps", nullptr));
        sonyCommunicationTimeCodeTypeComboBox->setItemText(3, QCoreApplication::translate("PreferencesDialog", "29.97 fps", nullptr));
        sonyCommunicationTimeCodeTypeComboBox->setItemText(4, QCoreApplication::translate("PreferencesDialog", "30 fps", nullptr));

        sonyVideoSyncTimeCodeTypeLabel->setText(QCoreApplication::translate("PreferencesDialog", "Video sync framerate:", nullptr));
        sonyVideoSyncTimeCodeTypeComboBox->setItemText(0, QCoreApplication::translate("PreferencesDialog", "23.98 fps", nullptr));
        sonyVideoSyncTimeCodeTypeComboBox->setItemText(1, QCoreApplication::translate("PreferencesDialog", "24 fps", nullptr));
        sonyVideoSyncTimeCodeTypeComboBox->setItemText(2, QCoreApplication::translate("PreferencesDialog", "25 fps", nullptr));
        sonyVideoSyncTimeCodeTypeComboBox->setItemText(3, QCoreApplication::translate("PreferencesDialog", "29.97 fps", nullptr));
        sonyVideoSyncTimeCodeTypeComboBox->setItemText(4, QCoreApplication::translate("PreferencesDialog", "30 fps", nullptr));

        ltcRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "LTC", nullptr));
        ltcInputPortLabel->setText(QCoreApplication::translate("PreferencesDialog", "Audio input port:", nullptr));
        mtcRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "Midi timecode", nullptr));
        mtcExistingInputPortRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "Read from existing port:", nullptr));
        mtcVirtualInputPortRadioButton->setText(QCoreApplication::translate("PreferencesDialog", "Read from virtual port:", nullptr));
        mtcForce24as2398CheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Force 24 fps as 23.98 when reading MTC", nullptr));
        mmcCheckBox->setText(QCoreApplication::translate("PreferencesDialog", "Midi machine control:", nullptr));
        mmcOutputPortLabel->setText(QCoreApplication::translate("PreferencesDialog", "Send MMC message to port:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabSynchro), QCoreApplication::translate("PreferencesDialog", "Synchronization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCESDIALOG_H
