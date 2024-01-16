/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QPushButton *btnClear;
    QPushButton *btnGirlInc;
    QLabel *label_2;
    QLabel *label;
    QSpinBox *spinBoxGirl;
    QPushButton *btnBoyInc;
    QSpinBox *spinBoxBoy;
    QPushButton *btnClassInfo;
    QPushButton *btnBoyDec;
    QPushButton *btnGirlDec;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btnClose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        btnClear->setMinimumSize(QSize(100, 30));
        QFont font;
        font.setFamily(QString::fromUtf8("Microsoft YaHei"));
        font.setPointSize(12);
        btnClear->setFont(font);

        gridLayout->addWidget(btnClear, 1, 4, 1, 1);

        btnGirlInc = new QPushButton(groupBox);
        btnGirlInc->setObjectName(QString::fromUtf8("btnGirlInc"));
        btnGirlInc->setMinimumSize(QSize(100, 30));
        btnGirlInc->setFont(font);

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxGirl = new QSpinBox(groupBox);
        spinBoxGirl->setObjectName(QString::fromUtf8("spinBoxGirl"));
        spinBoxGirl->setMinimumSize(QSize(100, 30));
        spinBoxGirl->setFont(font);
        spinBoxGirl->setMaximum(200);

        gridLayout->addWidget(spinBoxGirl, 1, 1, 1, 1);

        btnBoyInc = new QPushButton(groupBox);
        btnBoyInc->setObjectName(QString::fromUtf8("btnBoyInc"));
        btnBoyInc->setMinimumSize(QSize(100, 30));
        btnBoyInc->setFont(font);

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        spinBoxBoy = new QSpinBox(groupBox);
        spinBoxBoy->setObjectName(QString::fromUtf8("spinBoxBoy"));
        spinBoxBoy->setMinimumSize(QSize(100, 30));
        spinBoxBoy->setFont(font);
        spinBoxBoy->setMaximum(200);

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        btnClassInfo = new QPushButton(groupBox);
        btnClassInfo->setObjectName(QString::fromUtf8("btnClassInfo"));
        btnClassInfo->setMinimumSize(QSize(100, 30));
        btnClassInfo->setFont(font);

        gridLayout->addWidget(btnClassInfo, 0, 4, 1, 1);

        btnBoyDec = new QPushButton(groupBox);
        btnBoyDec->setObjectName(QString::fromUtf8("btnBoyDec"));
        btnBoyDec->setMinimumSize(QSize(100, 30));
        btnBoyDec->setFont(font);

        gridLayout->addWidget(btnBoyDec, 0, 3, 1, 1);

        btnGirlDec = new QPushButton(groupBox);
        btnGirlDec->setObjectName(QString::fromUtf8("btnGirlDec"));
        btnGirlDec->setMinimumSize(QSize(100, 30));
        btnGirlDec->setFont(font);

        gridLayout->addWidget(btnGirlDec, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setFont(font);

        verticalLayout->addWidget(plainTextEdit);

        btnClose = new QPushButton(Widget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        btnClose->setMinimumSize(QSize(100, 30));
        btnClose->setFont(font);

        verticalLayout->addWidget(btnClose);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        btnGirlInc->setText(QCoreApplication::translate("Widget", "\345\245\263\347\224\237\345\212\240\344\270\200\345\262\201", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\245\263\347\224\237", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\224\267\347\224\237", nullptr));
        btnBoyInc->setText(QCoreApplication::translate("Widget", "\347\224\267\347\224\237\345\212\240\344\270\200\345\262\201", nullptr));
        btnClassInfo->setText(QCoreApplication::translate("Widget", "\347\261\273\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        btnBoyDec->setText(QCoreApplication::translate("Widget", "\347\224\267\347\224\237\345\207\217\344\270\200\345\262\201", nullptr));
        btnGirlDec->setText(QCoreApplication::translate("Widget", "\345\245\263\347\224\237\345\207\217\344\270\200\345\262\201", nullptr));
        btnClose->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
