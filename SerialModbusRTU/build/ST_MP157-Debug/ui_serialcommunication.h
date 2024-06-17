/********************************************************************************
** Form generated from reading UI file 'serialcommunication.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERIALCOMMUNICATION_H
#define UI_SERIALCOMMUNICATION_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SerialCommunication
{
public:
    QAction *actNew;
    QAction *actExit;
    QAction *actClearRx;
    QAction *actClearTx;
    QWidget *centralwidget;
    QGridLayout *gridLayout_2;
    QTextEdit *textEditReceive;
    QHBoxLayout *horizontalLayout;
    QLabel *label1;
    QLabel *labelAin1;
    QLabel *label2;
    QLabel *labelAin2;
    QLabel *label3;
    QLabel *labelAin3;
    QLabel *label4;
    QLabel *labelAin4;
    QLabel *label5;
    QLabel *labelAin5;
    QLabel *label6;
    QLabel *labelAin6;
    QLabel *label_12;
    QLabel *labelAin7;
    QLabel *label8;
    QLabel *labelAin8;
    QLabel *label9;
    QLabel *labelAin9;
    QTextEdit *textEditSend;
    QGridLayout *gridLayout;
    QComboBox *cboxSerialDataBits;
    QLabel *label_4;
    QComboBox *cboxSerialStopBits;
    QLabel *label_5;
    QPushButton *btnSend;
    QComboBox *cboxSerialNum;
    QPushButton *btnOpenSerial;
    QComboBox *cboxSerialBaudRate;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QComboBox *cboxSerialParityBit;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SerialCommunication)
    {
        if (SerialCommunication->objectName().isEmpty())
            SerialCommunication->setObjectName(QString::fromUtf8("SerialCommunication"));
        SerialCommunication->resize(1024, 600);
        QFont font;
        font.setStyleStrategy(QFont::PreferAntialias);
        SerialCommunication->setFont(font);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/SpaceX.ico"), QSize(), QIcon::Normal, QIcon::Off);
        SerialCommunication->setWindowIcon(icon);
        actNew = new QAction(SerialCommunication);
        actNew->setObjectName(QString::fromUtf8("actNew"));
        QIcon icon1(QIcon::fromTheme(QString::fromUtf8("application-exit")));
        actNew->setIcon(icon1);
        actNew->setMenuRole(QAction::NoRole);
        actExit = new QAction(SerialCommunication);
        actExit->setObjectName(QString::fromUtf8("actExit"));
        actClearRx = new QAction(SerialCommunication);
        actClearRx->setObjectName(QString::fromUtf8("actClearRx"));
        actClearRx->setMenuRole(QAction::NoRole);
        actClearTx = new QAction(SerialCommunication);
        actClearTx->setObjectName(QString::fromUtf8("actClearTx"));
        actClearTx->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(SerialCommunication);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout_2 = new QGridLayout(centralwidget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        textEditReceive = new QTextEdit(centralwidget);
        textEditReceive->setObjectName(QString::fromUtf8("textEditReceive"));
        textEditReceive->setMinimumSize(QSize(0, 320));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font1.setPointSize(12);
        font1.setStyleStrategy(QFont::PreferAntialias);
        textEditReceive->setFont(font1);

        gridLayout_2->addWidget(textEditReceive, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        QFont font2;
        font2.setStyleStrategy(QFont::PreferDefault);
        label1->setFont(font2);

        horizontalLayout->addWidget(label1);

        labelAin1 = new QLabel(centralwidget);
        labelAin1->setObjectName(QString::fromUtf8("labelAin1"));
        labelAin1->setFont(font);

        horizontalLayout->addWidget(labelAin1);

        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setFont(font);

        horizontalLayout->addWidget(label2);

        labelAin2 = new QLabel(centralwidget);
        labelAin2->setObjectName(QString::fromUtf8("labelAin2"));
        labelAin2->setFont(font);

        horizontalLayout->addWidget(labelAin2);

        label3 = new QLabel(centralwidget);
        label3->setObjectName(QString::fromUtf8("label3"));
        label3->setFont(font);

        horizontalLayout->addWidget(label3);

        labelAin3 = new QLabel(centralwidget);
        labelAin3->setObjectName(QString::fromUtf8("labelAin3"));
        labelAin3->setFont(font);

        horizontalLayout->addWidget(labelAin3);

        label4 = new QLabel(centralwidget);
        label4->setObjectName(QString::fromUtf8("label4"));
        label4->setFont(font);

        horizontalLayout->addWidget(label4);

        labelAin4 = new QLabel(centralwidget);
        labelAin4->setObjectName(QString::fromUtf8("labelAin4"));
        labelAin4->setFont(font);

        horizontalLayout->addWidget(labelAin4);

        label5 = new QLabel(centralwidget);
        label5->setObjectName(QString::fromUtf8("label5"));
        label5->setFont(font);

        horizontalLayout->addWidget(label5);

        labelAin5 = new QLabel(centralwidget);
        labelAin5->setObjectName(QString::fromUtf8("labelAin5"));
        labelAin5->setFont(font);

        horizontalLayout->addWidget(labelAin5);

        label6 = new QLabel(centralwidget);
        label6->setObjectName(QString::fromUtf8("label6"));
        label6->setFont(font);

        horizontalLayout->addWidget(label6);

        labelAin6 = new QLabel(centralwidget);
        labelAin6->setObjectName(QString::fromUtf8("labelAin6"));
        labelAin6->setFont(font);

        horizontalLayout->addWidget(labelAin6);

        label_12 = new QLabel(centralwidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);

        horizontalLayout->addWidget(label_12);

        labelAin7 = new QLabel(centralwidget);
        labelAin7->setObjectName(QString::fromUtf8("labelAin7"));
        labelAin7->setFont(font);

        horizontalLayout->addWidget(labelAin7);

        label8 = new QLabel(centralwidget);
        label8->setObjectName(QString::fromUtf8("label8"));
        label8->setFont(font);

        horizontalLayout->addWidget(label8);

        labelAin8 = new QLabel(centralwidget);
        labelAin8->setObjectName(QString::fromUtf8("labelAin8"));
        labelAin8->setFont(font);

        horizontalLayout->addWidget(labelAin8);

        label9 = new QLabel(centralwidget);
        label9->setObjectName(QString::fromUtf8("label9"));
        label9->setFont(font);

        horizontalLayout->addWidget(label9);

        labelAin9 = new QLabel(centralwidget);
        labelAin9->setObjectName(QString::fromUtf8("labelAin9"));
        labelAin9->setFont(font);

        horizontalLayout->addWidget(labelAin9);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);

        textEditSend = new QTextEdit(centralwidget);
        textEditSend->setObjectName(QString::fromUtf8("textEditSend"));
        textEditSend->setFont(font1);

        gridLayout_2->addWidget(textEditSend, 2, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        cboxSerialDataBits = new QComboBox(centralwidget);
        cboxSerialDataBits->setObjectName(QString::fromUtf8("cboxSerialDataBits"));
        cboxSerialDataBits->setMinimumSize(QSize(120, 35));
        cboxSerialDataBits->setFont(font1);

        gridLayout->addWidget(cboxSerialDataBits, 1, 2, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 0, 4, 1, 1);

        cboxSerialStopBits = new QComboBox(centralwidget);
        cboxSerialStopBits->setObjectName(QString::fromUtf8("cboxSerialStopBits"));
        cboxSerialStopBits->setMinimumSize(QSize(120, 35));
        cboxSerialStopBits->setFont(font1);

        gridLayout->addWidget(cboxSerialStopBits, 1, 4, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font1);

        gridLayout->addWidget(label_5, 0, 3, 1, 1);

        btnSend = new QPushButton(centralwidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        btnSend->setMinimumSize(QSize(135, 40));
        btnSend->setFont(font1);

        gridLayout->addWidget(btnSend, 0, 5, 1, 1);

        cboxSerialNum = new QComboBox(centralwidget);
        cboxSerialNum->setObjectName(QString::fromUtf8("cboxSerialNum"));
        cboxSerialNum->setMinimumSize(QSize(120, 35));
        QFont font3;
        font3.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font3.setPointSize(10);
        font3.setStyleStrategy(QFont::PreferAntialias);
        cboxSerialNum->setFont(font3);

        gridLayout->addWidget(cboxSerialNum, 1, 0, 1, 1);

        btnOpenSerial = new QPushButton(centralwidget);
        btnOpenSerial->setObjectName(QString::fromUtf8("btnOpenSerial"));
        btnOpenSerial->setMinimumSize(QSize(135, 40));
        btnOpenSerial->setFont(font1);

        gridLayout->addWidget(btnOpenSerial, 1, 5, 1, 1);

        cboxSerialBaudRate = new QComboBox(centralwidget);
        cboxSerialBaudRate->setObjectName(QString::fromUtf8("cboxSerialBaudRate"));
        cboxSerialBaudRate->setMinimumSize(QSize(120, 35));
        cboxSerialBaudRate->setFont(font1);

        gridLayout->addWidget(cboxSerialBaudRate, 1, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font1);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font1);

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font1);

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        cboxSerialParityBit = new QComboBox(centralwidget);
        cboxSerialParityBit->setObjectName(QString::fromUtf8("cboxSerialParityBit"));
        cboxSerialParityBit->setMinimumSize(QSize(120, 35));
        cboxSerialParityBit->setFont(font1);

        gridLayout->addWidget(cboxSerialParityBit, 1, 3, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 1);

        SerialCommunication->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SerialCommunication);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1024, 27));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        SerialCommunication->setMenuBar(menubar);
        statusbar = new QStatusBar(SerialCommunication);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SerialCommunication->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(actNew);
        menu->addAction(actExit);
        menu_2->addAction(actClearTx);
        menu_2->addAction(actClearRx);

        retranslateUi(SerialCommunication);

        QMetaObject::connectSlotsByName(SerialCommunication);
    } // setupUi

    void retranslateUi(QMainWindow *SerialCommunication)
    {
        SerialCommunication->setWindowTitle(QApplication::translate("SerialCommunication", "SerialCommunication", nullptr));
        actNew->setText(QApplication::translate("SerialCommunication", "\346\226\260\345\273\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actNew->setToolTip(QApplication::translate("SerialCommunication", "\346\226\260\345\273\272\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        actExit->setText(QApplication::translate("SerialCommunication", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actExit->setToolTip(QApplication::translate("SerialCommunication", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        actClearRx->setText(QApplication::translate("SerialCommunication", "\346\270\205\351\231\244Rx", nullptr));
#ifndef QT_NO_TOOLTIP
        actClearRx->setToolTip(QApplication::translate("SerialCommunication", "\346\270\205\351\231\244\346\216\245\346\224\266\345\214\272", nullptr));
#endif // QT_NO_TOOLTIP
        actClearTx->setText(QApplication::translate("SerialCommunication", "\346\270\205\351\231\244Tx", nullptr));
#ifndef QT_NO_TOOLTIP
        actClearTx->setToolTip(QApplication::translate("SerialCommunication", "\346\270\205\351\231\244\345\217\221\351\200\201\345\214\272", nullptr));
#endif // QT_NO_TOOLTIP
        label1->setText(QApplication::translate("SerialCommunication", "AIN1:", nullptr));
        labelAin1->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label2->setText(QApplication::translate("SerialCommunication", "AIN2:", nullptr));
        labelAin2->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label3->setText(QApplication::translate("SerialCommunication", "AIN3:", nullptr));
        labelAin3->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label4->setText(QApplication::translate("SerialCommunication", "AIN4:", nullptr));
        labelAin4->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label5->setText(QApplication::translate("SerialCommunication", "AIN5:", nullptr));
        labelAin5->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label6->setText(QApplication::translate("SerialCommunication", "AIN6:", nullptr));
        labelAin6->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label_12->setText(QApplication::translate("SerialCommunication", "AIN7:", nullptr));
        labelAin7->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label8->setText(QApplication::translate("SerialCommunication", "AIN8:", nullptr));
        labelAin8->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label9->setText(QApplication::translate("SerialCommunication", "AIN9:", nullptr));
        labelAin9->setText(QApplication::translate("SerialCommunication", "0000", nullptr));
        label_4->setText(QApplication::translate("SerialCommunication", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        label_5->setText(QApplication::translate("SerialCommunication", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        btnSend->setText(QApplication::translate("SerialCommunication", "\345\217\221\351\200\201", nullptr));
        btnOpenSerial->setText(QApplication::translate("SerialCommunication", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        label->setText(QApplication::translate("SerialCommunication", "\344\270\262\345\217\243\345\217\267\357\274\232", nullptr));
        label_3->setText(QApplication::translate("SerialCommunication", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        label_2->setText(QApplication::translate("SerialCommunication", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        menu->setTitle(QApplication::translate("SerialCommunication", "\346\226\207\344\273\266", nullptr));
        menu_2->setTitle(QApplication::translate("SerialCommunication", "\347\274\226\350\276\221", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SerialCommunication: public Ui_SerialCommunication {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERIALCOMMUNICATION_H
