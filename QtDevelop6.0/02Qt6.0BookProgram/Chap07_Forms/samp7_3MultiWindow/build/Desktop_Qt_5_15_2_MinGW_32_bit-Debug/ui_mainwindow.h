/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actWindowInsite;
    QAction *actWidgetInsite;
    QAction *actQuit;
    QAction *actWindow;
    QAction *actWidget;
    QWidget *centralWidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(731, 493);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actWindowInsite = new QAction(MainWindow);
        actWindowInsite->setObjectName(QString::fromUtf8("actWindowInsite"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/2.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actWindowInsite->setIcon(icon);
        actWidgetInsite = new QAction(MainWindow);
        actWidgetInsite->setObjectName(QString::fromUtf8("actWidgetInsite"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/100.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actWidgetInsite->setIcon(icon1);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        actWindow = new QAction(MainWindow);
        actWindow->setObjectName(QString::fromUtf8("actWindow"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/3.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actWindow->setIcon(icon3);
        actWidget = new QAction(MainWindow);
        actWidget->setObjectName(QString::fromUtf8("actWidget"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/804.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actWidget->setIcon(icon4);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(140, 80, 361, 241));
        tabWidget->setTabsClosable(true);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setAutoFillBackground(false);
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actWidgetInsite);
        mainToolBar->addAction(actWidget);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actWindowInsite);
        mainToolBar->addAction(actWindow);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);
        QObject::connect(actQuit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\244\232\347\252\227\345\217\243\345\272\224\347\224\250\347\250\213\345\272\217", nullptr));
        actWindowInsite->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#if QT_CONFIG(tooltip)
        actWindowInsite->setToolTip(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217MainWindow", nullptr));
#endif // QT_CONFIG(tooltip)
        actWidgetInsite->setText(QCoreApplication::translate("MainWindow", "\345\265\214\345\205\245\345\274\217Widget", nullptr));
#if QT_CONFIG(tooltip)
        actWidgetInsite->setToolTip(QCoreApplication::translate("MainWindow", "Widget\345\265\214\345\205\245\345\274\217\347\252\227\344\275\223", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272\346\234\254\347\263\273\347\273\237", nullptr));
#endif // QT_CONFIG(tooltip)
        actWindow->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        actWindow->setToolTip(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213MainWindow\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        actWidget->setText(QCoreApplication::translate("MainWindow", "\347\213\254\347\253\213Widget\347\252\227\345\217\243", nullptr));
#if QT_CONFIG(tooltip)
        actWidget->setToolTip(QCoreApplication::translate("MainWindow", "\346\226\260\345\273\272Widget\347\213\254\347\253\213\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
