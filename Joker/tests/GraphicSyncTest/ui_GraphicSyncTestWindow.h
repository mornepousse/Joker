/********************************************************************************
** Form generated from reading UI file 'GraphicSyncTestWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.18
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GRAPHICSYNCTESTWINDOW_H
#define UI_GRAPHICSYNCTESTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "GraphicSyncTestView.h"

QT_BEGIN_NAMESPACE

class Ui_GraphicSyncTestWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    GraphicSyncTestView *graphicView;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *GraphicSyncTestWindow)
    {
        if (GraphicSyncTestWindow->objectName().isEmpty())
            GraphicSyncTestWindow->setObjectName(QString::fromUtf8("GraphicSyncTestWindow"));
        GraphicSyncTestWindow->resize(400, 300);
        centralWidget = new QWidget(GraphicSyncTestWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        graphicView = new GraphicSyncTestView(centralWidget);
        graphicView->setObjectName(QString::fromUtf8("graphicView"));

        verticalLayout->addWidget(graphicView);

        GraphicSyncTestWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(GraphicSyncTestWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 400, 22));
        GraphicSyncTestWindow->setMenuBar(menuBar);

        retranslateUi(GraphicSyncTestWindow);

        QMetaObject::connectSlotsByName(GraphicSyncTestWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GraphicSyncTestWindow)
    {
        GraphicSyncTestWindow->setWindowTitle(QCoreApplication::translate("GraphicSyncTestWindow", "GraphicSyncTestWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GraphicSyncTestWindow: public Ui_GraphicSyncTestWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GRAPHICSYNCTESTWINDOW_H
