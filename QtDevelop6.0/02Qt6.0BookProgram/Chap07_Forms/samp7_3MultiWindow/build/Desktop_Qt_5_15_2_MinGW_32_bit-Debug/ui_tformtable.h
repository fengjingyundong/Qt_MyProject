/********************************************************************************
** Form generated from reading UI file 'tformtable.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TFORMTABLE_H
#define UI_TFORMTABLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TFormTable
{
public:
    QAction *actSize;
    QAction *actSetHeader;
    QAction *actClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TFormTable)
    {
        if (TFormTable->objectName().isEmpty())
            TFormTable->setObjectName(QString::fromUtf8("TFormTable"));
        TFormTable->resize(375, 258);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(10);
        TFormTable->setFont(font);
        actSize = new QAction(TFormTable);
        actSize->setObjectName(QString::fromUtf8("actSize"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/230.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSize->setIcon(icon);
        actSetHeader = new QAction(TFormTable);
        actSetHeader->setObjectName(QString::fromUtf8("actSetHeader"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/516.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSetHeader->setIcon(icon1);
        actClose = new QAction(TFormTable);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon2);
        centralwidget = new QWidget(TFormTable);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(3, 3, 3, 3);
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QString::fromUtf8("tableView"));

        verticalLayout->addWidget(tableView);

        TFormTable->setCentralWidget(centralwidget);
        toolBar = new QToolBar(TFormTable);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        toolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        TFormTable->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actSize);
        toolBar->addAction(actSetHeader);
        toolBar->addSeparator();
        toolBar->addAction(actClose);

        retranslateUi(TFormTable);
        QObject::connect(actClose, SIGNAL(triggered()), TFormTable, SLOT(close()));

        QMetaObject::connectSlotsByName(TFormTable);
    } // setupUi

    void retranslateUi(QMainWindow *TFormTable)
    {
        TFormTable->setWindowTitle(QCoreApplication::translate("TFormTable", "MainWindow", nullptr));
        actSize->setText(QCoreApplication::translate("TFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#if QT_CONFIG(tooltip)
        actSize->setToolTip(QCoreApplication::translate("TFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actSize->setStatusTip(QCoreApplication::translate("TFormTable", "\345\256\232\344\271\211\350\241\250\346\240\274\345\244\247\345\260\217", nullptr));
#endif // QT_CONFIG(statustip)
        actSetHeader->setText(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264", nullptr));
#if QT_CONFIG(tooltip)
        actSetHeader->setToolTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actSetHeader->setStatusTip(QCoreApplication::translate("TFormTable", "\350\256\276\347\275\256\350\241\250\345\244\264\346\226\207\345\255\227", nullptr));
#endif // QT_CONFIG(statustip)
        actClose->setText(QCoreApplication::translate("TFormTable", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("TFormTable", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        actClose->setStatusTip(QCoreApplication::translate("TFormTable", "\345\205\263\351\227\255\346\234\254\347\252\227\345\217\243", nullptr));
#endif // QT_CONFIG(statustip)
        toolBar->setWindowTitle(QCoreApplication::translate("TFormTable", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TFormTable: public Ui_TFormTable {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TFORMTABLE_H
