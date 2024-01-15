/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.6.0
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
    QLabel *label;
    QSpinBox *spinBoxBoy;
    QPushButton *btnBoyInc;
    QPushButton *btnClass;
    QLabel *label_2;
    QSpinBox *spinBoxGirl;
    QPushButton *btnGirlInc;
    QPushButton *btnClear;
    QPlainTextEdit *plainTextEdit;
    QPushButton *btnClose;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(800, 600);
        verticalLayout = new QVBoxLayout(Widget);
        verticalLayout->setObjectName("verticalLayout");
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        spinBoxBoy = new QSpinBox(groupBox);
        spinBoxBoy->setObjectName("spinBoxBoy");

        gridLayout->addWidget(spinBoxBoy, 0, 1, 1, 1);

        btnBoyInc = new QPushButton(groupBox);
        btnBoyInc->setObjectName("btnBoyInc");

        gridLayout->addWidget(btnBoyInc, 0, 2, 1, 1);

        btnClass = new QPushButton(groupBox);
        btnClass->setObjectName("btnClass");

        gridLayout->addWidget(btnClass, 0, 3, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        spinBoxGirl = new QSpinBox(groupBox);
        spinBoxGirl->setObjectName("spinBoxGirl");

        gridLayout->addWidget(spinBoxGirl, 1, 1, 1, 1);

        btnGirlInc = new QPushButton(groupBox);
        btnGirlInc->setObjectName("btnGirlInc");

        gridLayout->addWidget(btnGirlInc, 1, 2, 1, 1);

        btnClear = new QPushButton(groupBox);
        btnClear->setObjectName("btnClear");

        gridLayout->addWidget(btnClear, 1, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        plainTextEdit = new QPlainTextEdit(Widget);
        plainTextEdit->setObjectName("plainTextEdit");

        verticalLayout->addWidget(plainTextEdit);

        btnClose = new QPushButton(Widget);
        btnClose->setObjectName("btnClose");

        verticalLayout->addWidget(btnClose);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        groupBox->setTitle(QCoreApplication::translate("Widget", "GroupBox", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\347\224\267\347\224\237", nullptr));
        btnBoyInc->setText(QCoreApplication::translate("Widget", "\347\224\267\347\224\237\345\212\240\344\270\200\345\262\201", nullptr));
        btnClass->setText(QCoreApplication::translate("Widget", "\347\261\273\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\245\263\347\224\237", nullptr));
        btnGirlInc->setText(QCoreApplication::translate("Widget", "\345\245\263\347\224\237\345\212\240\344\270\200\345\262\201", nullptr));
        btnClear->setText(QCoreApplication::translate("Widget", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
        btnClose->setText(QCoreApplication::translate("Widget", "\345\205\263\351\227\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
