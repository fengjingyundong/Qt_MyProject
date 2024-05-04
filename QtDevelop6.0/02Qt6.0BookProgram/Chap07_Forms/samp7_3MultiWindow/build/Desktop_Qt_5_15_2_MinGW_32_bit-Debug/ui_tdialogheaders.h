/********************************************************************************
** Form generated from reading UI file 'tdialogheaders.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TDIALOGHEADERS_H
#define UI_TDIALOGHEADERS_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_TDialogHeaders
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QListView *listView;
    QFrame *frame;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *btnOK;
    QSpacerItem *verticalSpacer_2;
    QPushButton *btnCancel;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QDialog *TDialogHeaders)
    {
        if (TDialogHeaders->objectName().isEmpty())
            TDialogHeaders->setObjectName(QString::fromUtf8("TDialogHeaders"));
        TDialogHeaders->resize(263, 267);
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(10);
        TDialogHeaders->setFont(font);
        verticalLayout_3 = new QVBoxLayout(TDialogHeaders);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        groupBox = new QGroupBox(TDialogHeaders);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        listView = new QListView(groupBox);
        listView->setObjectName(QString::fromUtf8("listView"));

        verticalLayout->addWidget(listView);


        horizontalLayout->addWidget(groupBox);

        frame = new QFrame(TDialogHeaders);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        btnOK = new QPushButton(frame);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/704.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnOK->setIcon(icon);

        verticalLayout_2->addWidget(btnOK);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        btnCancel = new QPushButton(frame);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/706.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnCancel->setIcon(icon1);

        verticalLayout_2->addWidget(btnCancel);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_6);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        horizontalLayout->addWidget(frame);


        verticalLayout_3->addLayout(horizontalLayout);


        retranslateUi(TDialogHeaders);
        QObject::connect(btnOK, SIGNAL(clicked()), TDialogHeaders, SLOT(accept()));
        QObject::connect(btnCancel, SIGNAL(clicked()), TDialogHeaders, SLOT(reject()));

        QMetaObject::connectSlotsByName(TDialogHeaders);
    } // setupUi

    void retranslateUi(QDialog *TDialogHeaders)
    {
        TDialogHeaders->setWindowTitle(QCoreApplication::translate("TDialogHeaders", "\350\256\276\347\275\256\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TDialogHeaders", "\350\241\250\345\244\264\346\240\207\351\242\230", nullptr));
        btnOK->setText(QCoreApplication::translate("TDialogHeaders", "\347\241\256\345\256\232", nullptr));
        btnCancel->setText(QCoreApplication::translate("TDialogHeaders", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TDialogHeaders: public Ui_TDialogHeaders {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TDIALOGHEADERS_H
