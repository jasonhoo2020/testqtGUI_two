/********************************************************************************
** Form generated from reading UI file 'testqtgui.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TESTQTGUI_H
#define UI_TESTQTGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_testqtGUIClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *testqtGUIClass)
    {
        if (testqtGUIClass->objectName().isEmpty())
            testqtGUIClass->setObjectName(QStringLiteral("testqtGUIClass"));
        testqtGUIClass->resize(600, 400);
        menuBar = new QMenuBar(testqtGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        testqtGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(testqtGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        testqtGUIClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(testqtGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        testqtGUIClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(testqtGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        testqtGUIClass->setStatusBar(statusBar);

        retranslateUi(testqtGUIClass);

        QMetaObject::connectSlotsByName(testqtGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *testqtGUIClass)
    {
        testqtGUIClass->setWindowTitle(QApplication::translate("testqtGUIClass", "testqtGUI", 0));
    } // retranslateUi

};

namespace Ui {
    class testqtGUIClass: public Ui_testqtGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TESTQTGUI_H
