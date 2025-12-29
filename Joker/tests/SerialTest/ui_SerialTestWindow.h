/********************************************************************************
** Form generated from reading UI file 'SerialTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALTESTWINDOW_H
#define UI_SERIALTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialTestWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QCheckBox *checkA;
    QHBoxLayout *horizontalLayout;
    QLineEdit *inputA;
    QPushButton *sendButton1;
    QTextEdit *receiveA;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QCheckBox *checkB;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *inputB;
    QPushButton *sendButton2;
    QTextEdit *receiveB;
    QLabel *ctsLabel;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *SerialTestWindow)
    {
        if (SerialTestWindow->objectName().isEmpty())
            SerialTestWindow->setObjectName(QString::fromUtf8("SerialTestWindow"));
        SerialTestWindow->resize(488, 481);
        centralWidget = new QWidget(SerialTestWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_3->addWidget(label_2);

        checkA = new QCheckBox(centralWidget);
        checkA->setObjectName(QString::fromUtf8("checkA"));
        checkA->setChecked(true);

        horizontalLayout_3->addWidget(checkA);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        inputA = new QLineEdit(centralWidget);
        inputA->setObjectName(QString::fromUtf8("inputA"));

        horizontalLayout->addWidget(inputA);

        sendButton1 = new QPushButton(centralWidget);
        sendButton1->setObjectName(QString::fromUtf8("sendButton1"));

        horizontalLayout->addWidget(sendButton1);


        verticalLayout->addLayout(horizontalLayout);

        receiveA = new QTextEdit(centralWidget);
        receiveA->setObjectName(QString::fromUtf8("receiveA"));

        verticalLayout->addWidget(receiveA);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        checkB = new QCheckBox(centralWidget);
        checkB->setObjectName(QString::fromUtf8("checkB"));
        checkB->setChecked(true);

        horizontalLayout_4->addWidget(checkB);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        inputB = new QLineEdit(centralWidget);
        inputB->setObjectName(QString::fromUtf8("inputB"));

        horizontalLayout_2->addWidget(inputB);

        sendButton2 = new QPushButton(centralWidget);
        sendButton2->setObjectName(QString::fromUtf8("sendButton2"));

        horizontalLayout_2->addWidget(sendButton2);


        verticalLayout->addLayout(horizontalLayout_2);

        receiveB = new QTextEdit(centralWidget);
        receiveB->setObjectName(QString::fromUtf8("receiveB"));

        verticalLayout->addWidget(receiveB);

        ctsLabel = new QLabel(centralWidget);
        ctsLabel->setObjectName(QString::fromUtf8("ctsLabel"));

        verticalLayout->addWidget(ctsLabel);

        SerialTestWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(SerialTestWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 488, 22));
        SerialTestWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(inputA, sendButton1);
        QWidget::setTabOrder(sendButton1, inputB);
        QWidget::setTabOrder(inputB, sendButton2);
        QWidget::setTabOrder(sendButton2, checkA);
        QWidget::setTabOrder(checkA, checkB);
        QWidget::setTabOrder(checkB, receiveA);
        QWidget::setTabOrder(receiveA, receiveB);

        retranslateUi(SerialTestWindow);

        QMetaObject::connectSlotsByName(SerialTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SerialTestWindow)
    {
        SerialTestWindow->setWindowTitle(QCoreApplication::translate("SerialTestWindow", "SerialTest", nullptr));
        label_2->setText(QCoreApplication::translate("SerialTestWindow", "Serial A", nullptr));
        checkA->setText(QCoreApplication::translate("SerialTestWindow", "Activate", nullptr));
        sendButton1->setText(QCoreApplication::translate("SerialTestWindow", "Send", nullptr));
        label->setText(QCoreApplication::translate("SerialTestWindow", "Serial B", nullptr));
        checkB->setText(QCoreApplication::translate("SerialTestWindow", "Activate", nullptr));
        sendButton2->setText(QCoreApplication::translate("SerialTestWindow", "Send", nullptr));
        ctsLabel->setText(QCoreApplication::translate("SerialTestWindow", "no CTS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialTestWindow: public Ui_SerialTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALTESTWINDOW_H
