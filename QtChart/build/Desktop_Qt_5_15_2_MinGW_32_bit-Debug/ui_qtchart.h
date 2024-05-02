/********************************************************************************
** Form generated from reading UI file 'qtchart.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCHART_H
#define UI_QTCHART_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <mygraphicsview.h>

QT_BEGIN_NAMESPACE

class Ui_QtChart
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QSplitter *splitter;
    QLabel *labViewSize;
    QLabel *labSceneRect;
    MyGraphicsView *graphicsView;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *QtChart)
    {
        if (QtChart->objectName().isEmpty())
            QtChart->setObjectName(QString::fromUtf8("QtChart"));
        QtChart->resize(1024, 600);
        centralwidget = new QWidget(QtChart);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setMaximumSize(QSize(16777215, 79));
        splitter->setOrientation(Qt::Vertical);
        labViewSize = new QLabel(splitter);
        labViewSize->setObjectName(QString::fromUtf8("labViewSize"));
        labViewSize->setMaximumSize(QSize(16777215, 37));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(16);
        labViewSize->setFont(font);
        splitter->addWidget(labViewSize);
        labSceneRect = new QLabel(splitter);
        labSceneRect->setObjectName(QString::fromUtf8("labSceneRect"));
        labSceneRect->setMaximumSize(QSize(16777215, 37));
        labSceneRect->setFont(font);
        splitter->addWidget(labSceneRect);

        verticalLayout->addWidget(splitter);

        graphicsView = new MyGraphicsView(centralwidget);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));

        verticalLayout->addWidget(graphicsView);

        QtChart->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(QtChart);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        QtChart->setStatusBar(statusbar);

        retranslateUi(QtChart);

        QMetaObject::connectSlotsByName(QtChart);
    } // setupUi

    void retranslateUi(QMainWindow *QtChart)
    {
        QtChart->setWindowTitle(QCoreApplication::translate("QtChart", "QtChart", nullptr));
        labViewSize->setText(QCoreApplication::translate("QtChart", "Graphics View\345\235\220\346\240\207\357\274\214\345\267\246\344\270\212\350\247\222\346\200\273\346\230\257\357\274\2100,0\357\274\211\357\274\214\345\256\275\345\272\246=\357\274\214\351\225\277\345\272\246=", nullptr));
        labSceneRect->setText(QCoreApplication::translate("QtChart", "QGraphicsView::sceneRect()", nullptr));
    } // retranslateUi

};

namespace Ui {
    class QtChart: public Ui_QtChart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCHART_H
