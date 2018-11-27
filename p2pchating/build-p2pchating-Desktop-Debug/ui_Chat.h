/********************************************************************************
** Form generated from reading UI file 'Chat.ui'
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

class Ui_chat
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QTextEdit *edtRecv;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLineEdit *edtIP;
    QLabel *label_2;
    QLineEdit *edtPort;
    QPushButton *btnConnect;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnClear;
    QComboBox *cbxConnection;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_3;
    QTextEdit *edtSend;
    QPushButton *btnSend;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *chat)
    {
        if (chat->objectName().isEmpty())
            chat->setObjectName(QString::fromUtf8("chat"));
        chat->resize(660, 505);
        centralwidget = new QWidget(chat);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 642, 345));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(layoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        edtRecv = new QTextEdit(groupBox);
        edtRecv->setObjectName(QString::fromUtf8("edtRecv"));
        edtRecv->setMinimumSize(QSize(400, 250));
        edtRecv->setReadOnly(true);

        horizontalLayout_2->addWidget(edtRecv);


        horizontalLayout_4->addWidget(groupBox);

        groupBox_3 = new QGroupBox(layoutWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        edtIP = new QLineEdit(groupBox_3);
        edtIP->setObjectName(QString::fromUtf8("edtIP"));

        verticalLayout->addWidget(edtIP);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        edtPort = new QLineEdit(groupBox_3);
        edtPort->setObjectName(QString::fromUtf8("edtPort"));

        verticalLayout->addWidget(edtPort);

        btnConnect = new QPushButton(groupBox_3);
        btnConnect->setObjectName(QString::fromUtf8("btnConnect"));

        verticalLayout->addWidget(btnConnect);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnClear = new QPushButton(groupBox_3);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));

        horizontalLayout->addWidget(btnClear);


        verticalLayout->addLayout(horizontalLayout);

        cbxConnection = new QComboBox(groupBox_3);
        cbxConnection->setObjectName(QString::fromUtf8("cbxConnection"));

        verticalLayout->addWidget(cbxConnection);

        pushButton = new QPushButton(groupBox_3);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        verticalLayout_2->addLayout(verticalLayout);


        horizontalLayout_4->addWidget(groupBox_3);

        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(9, 336, 642, 110));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(610, 110));
        groupBox_2->setMaximumSize(QSize(16777215, 110));
        verticalLayout_3 = new QVBoxLayout(groupBox_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        edtSend = new QTextEdit(groupBox_2);
        edtSend->setObjectName(QString::fromUtf8("edtSend"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(edtSend->sizePolicy().hasHeightForWidth());
        edtSend->setSizePolicy(sizePolicy2);
        edtSend->setMinimumSize(QSize(500, 75));
        edtSend->setMaximumSize(QSize(16777215, 75));

        horizontalLayout_3->addWidget(edtSend);

        btnSend = new QPushButton(groupBox_2);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(btnSend->sizePolicy().hasHeightForWidth());
        btnSend->setSizePolicy(sizePolicy3);
        btnSend->setMinimumSize(QSize(75, 75));
        btnSend->setMaximumSize(QSize(75, 75));

        horizontalLayout_3->addWidget(btnSend);


        verticalLayout_3->addLayout(horizontalLayout_3);

        chat->setCentralWidget(centralwidget);
        menubar = new QMenuBar(chat);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 660, 25));
        chat->setMenuBar(menubar);
        statusbar = new QStatusBar(chat);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        chat->setStatusBar(statusbar);

        retranslateUi(chat);

        QMetaObject::connectSlotsByName(chat);
    } // setupUi

    void retranslateUi(QMainWindow *chat)
    {
        chat->setWindowTitle(QApplication::translate("chat", "MainWindow", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("chat", "\346\216\245\346\224\266\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("chat", "\347\275\221\347\273\234\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("chat", "1\357\274\211\346\234\254\346\234\272IP\345\234\260\345\235\200", 0, QApplication::UnicodeUTF8));
        edtIP->setText(QString());
        label_2->setText(QApplication::translate("chat", "2\357\274\211\346\234\254\345\234\260\347\253\257\345\217\243\345\217\267", 0, QApplication::UnicodeUTF8));
        edtPort->setText(QApplication::translate("chat", "8000", 0, QApplication::UnicodeUTF8));
        btnConnect->setText(QApplication::translate("chat", "Listen", 0, QApplication::UnicodeUTF8));
        btnClear->setText(QApplication::translate("chat", "\346\270\205\351\231\244\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        cbxConnection->clear();
        cbxConnection->insertItems(0, QStringList()
         << QApplication::translate("chat", "\345\217\257\350\277\236\346\216\245\350\212\202\347\202\271", 0, QApplication::UnicodeUTF8)
        );
        pushButton->setText(QApplication::translate("chat", "Connect", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("chat", "\345\217\221\351\200\201\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
        btnSend->setText(QApplication::translate("chat", "\345\217\221\351\200\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class chat: public Ui_chat {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHAT_H
