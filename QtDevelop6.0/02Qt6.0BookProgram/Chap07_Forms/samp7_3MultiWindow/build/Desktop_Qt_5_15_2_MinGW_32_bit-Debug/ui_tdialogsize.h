/********************************************************************************
** Form generated from reading UI file 'tdialogsize.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGSIZE_H
#define UI_TDIALOGSIZE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_TDialogSize
{
public:
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label_2;
    QSpinBox *spinBoxColumn;
    QLabel *label;
    QSpinBox *spinBoxRow;
    QPushButton *btnCancel;
    QPushButton *btnOK;

    void setupUi(QDialog *TDialogSize)
    {
        if (TDialogSize->objectName().isEmpty())
            TDialogSize->setObjectName(QString::fromUtf8("TDialogSize"));
        TDialogSize->resize(275, 116);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TDialogSize->sizePolicy().hasHeightForWidth());
        TDialogSize->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(10);
        TDialogSize->setFont(font);
        groupBox = new QGroupBox(TDialogSize);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 10, 166, 96));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        spinBoxColumn = new QSpinBox(groupBox);
        spinBoxColumn->setObjectName(QString::fromUtf8("spinBoxColumn"));
        spinBoxColumn->setMinimum(1);
        spinBoxColumn->setMaximum(500);
        spinBoxColumn->setValue(6);

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBoxColumn);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        spinBoxRow = new QSpinBox(groupBox);
        spinBoxRow->setObjectName(QString::fromUtf8("spinBoxRow"));
        spinBoxRow->setMinimum(1);
        spinBoxRow->setMaximum(500);
        spinBoxRow->setValue(10);

        formLayout->setWidget(1, QFormLayout::FieldRole, spinBoxRow);

        btnCancel = new QPushButton(TDialogSize);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        btnCancel->setGeometry(QRect(190, 80, 75, 24));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon);
        btnOK = new QPushButton(TDialogSize);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(190, 30, 75, 24));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon1);

        retranslateUi(TDialogSize);
        QObject::connect(btnOK, SIGNAL(clicked()), TDialogSize, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), TDialogSize, SLOT(reject()));

        QMetaObject::connectSlotsByName(TDialogSize);
    } // setupUi

    void retranslateUi(QDialog *TDialogSize)
    {
        TDialogSize->setWindowTitle(QCoreApplication::translate("TDialogSize", "\350\256\276\347\275\256\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogSize", "\350\241\250\346\240\274\350\241\214\346\225\260\345\222\214\345\210\227\346\225\260", nullptr));
        label_2->setText(QCoreApplication::translate("TDialogSize", "\345\210\227  \346\225\260", nullptr));
        label->setText(QCoreApplication::translate("TDialogSize", "\350\241\214  \346\225\260", nullptr));
        btnCancel->setText(QCoreApplication::translate("TDialogSize", "\345\217\226\346\266\210", nullptr));
        btnOK->setText(QCoreApplication::translate("TDialogSize", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogSize: public Ui_TDialogSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGSIZE_H
