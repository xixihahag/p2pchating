/********************************************************************************
** Form generated from reading UI file 'chat.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHAT_H
#define UI_CHAT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Chat
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_6;
    QTextEdit *edtRecv_2;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_4;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_3;
    QLineEdit *edtIP_2;
    QLabel *label_4;
    QLineEdit *edtPort_2;
    QPushButton *btnListen;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *btnClear_2;
    QComboBox *cbxConnection_2;
    QPushButton *btnConnect_2;
    QSpacerItem *verticalSpacer_2;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_8;
    QTextEdit *edtSend_2;
    QPushButton *btnSend_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Chat)
    {
        if (Chat->objectName().isEmpty())
            Chat->setObjectName(QString::fromUtf8("Chat"));
        Chat->resize(660, 505);
        centralwidget = new QWidget(Chat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 0, 642, 345));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        groupBox_2 = new QGroupBox(layoutWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_6 = new QHBoxLayout(groupBox_2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        edtRecv_2 = new QTextEdit(groupBox_2);
        edtRecv_2->setObjectName(QString::fromUtf8("edtRecv_2"));
        edtRecv_2->setMinimumSize(QSize(400, 250));
        edtRecv_2->setReadOnly(true);

        horizontalLayout_6->addWidget(edtRecv_2);


        horizontalLayout_5->addWidget(groupBox_2);

        groupBox_4 = new QGroupBox(layoutWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy);
        verticalLayout_4 = new QVBoxLayout(groupBox_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label_3 = new QLabel(groupBox_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_5->addWidget(label_3);

        edtIP_2 = new QLineEdit(groupBox_4);
        edtIP_2->setObjectName(QString::fromUtf8("edtIP_2"));

        verticalLayout_5->addWidget(edtIP_2);

        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_5->addWidget(label_4);

        edtPort_2 = new QLineEdit(groupBox_4);
        edtPort_2->setObjectName(QString::fromUtf8("edtPort_2"));

        verticalLayout_5->addWidget(edtPort_2);

        btnListen = new QPushButton(groupBox_4);
        btnListen->setObjectName(QString::fromUtf8("btnListen"));

        verticalLayout_5->addWidget(btnListen);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        btnClear_2 = new QPushButton(groupBox_4);
        btnClear_2->setObjectName(QString::fromUtf8("btnClear_2"));

        horizontalLayout_7->addWidget(btnClear_2);


        verticalLayout_5->addLayout(horizontalLayout_7);

        cbxConnection_2 = new QComboBox(groupBox_4);
        cbxConnection_2->setObjectName(QString::fromUtf8("cbxConnection_2"));

        verticalLayout_5->addWidget(cbxConnection_2);

        btnConnect_2 = new QPushButton(groupBox_4);
        btnConnect_2->setObjectName(QString::fromUtf8("btnConnect_2"));

        verticalLayout_5->addWidget(btnConnect_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_2);


        verticalLayout_4->addLayout(verticalLayout_5);


        horizontalLayout_5->addWidget(groupBox_4);

        groupBox_5 = new QGroupBox(centralwidget);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 326, 651, 110));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_5->sizePolicy().hasHeightForWidth());
        groupBox_5->setSizePolicy(sizePolicy1);
        groupBox_5->setMinimumSize(QSize(610, 110));
        groupBox_5->setMaximumSize(QSize(16777215, 110));
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        edtSend_2 = new QTextEdit(groupBox_5);
        edtSend_2->setObjectName(QString::fromUtf8("edtSend_2"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(edtSend_2->sizePolicy().hasHeightForWidth());
        edtSend_2->setSizePolicy(sizePolicy2);
        edtSend_2->setMinimumSize(QSize(500, 75));
        edtSend_2->setMaximumSize(QSize(16777215, 75));

        horizontalLayout_8->addWidget(edtSend_2);

        btnSend_2 = new QPushButton(groupBox_5);
        btnSend_2->setObjectName(QString::fromUtf8("btnSend_2"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnSend_2->sizePolicy().hasHeightForWidth());
        btnSend_2->setSizePolicy(sizePolicy3);
        btnSend_2->setMinimumSize(QSize(75, 75));
        btnSend_2->setMaximumSize(QSize(75, 75));

        horizontalLayout_8->addWidget(btnSend_2);


        verticalLayout_6->addLayout(horizontalLayout_8);

        Chat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Chat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 25));
        Chat->setMenuBar(menubar);
        statusbar = new QStatusBar(Chat);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Chat->setStatusBar(statusbar);

        retranslateUi(Chat);

        QMetaObject::connectSlotsByName(Chat);
    } // setupUi

    void retranslateUi(QMainWindow *Chat)
    {
        Chat->setWindowTitle(QApplication::translate("Chat", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Chat", "\346\216\245\346\224\266\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("Chat", "\347\275\221\347\273\234\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Chat", "1\357\274\211\346\234\254\346\234\272IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        edtIP_2->setText(QString());
        label_4->setText(QApplication::translate("Chat", "2\357\274\211\346\234\254\345\234\260\347\253\257\345\217\243\345\217\267", 0, QApplication::UnicodeUTF8));
        edtPort_2->setText(QApplication::translate("Chat", "9878", 0, QApplication::UnicodeUTF8));
        btnListen->setText(QApplication::translate("Chat", "Listen", 0, QApplication::UnicodeUTF8));
        btnClear_2->setText(QApplication::translate("Chat", "\346\270\205\351\231\244\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        btnConnect_2->setText(QApplication::translate("Chat", "Connect", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("Chat", "\345\217\221\351\200\201\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        btnSend_2->setText(QApplication::translate("Chat", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Chat: public Ui_Chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
