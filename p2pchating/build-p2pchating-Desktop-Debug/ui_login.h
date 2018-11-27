/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QTextEdit>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QTextBrowser *textBrowser;
    QPushButton *btnlogin1;
    QLineEdit *linename;
    QTextEdit *textshowinfo;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(400, 300);
        textBrowser = new QTextBrowser(login);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(60, 20, 261, 31));
        btnlogin1 = new QPushButton(login);
        btnlogin1->setObjectName(QString::fromUtf8("btnlogin1"));
        btnlogin1->setGeometry(QRect(140, 150, 75, 23));
        linename = new QLineEdit(login);
        linename->setObjectName(QString::fromUtf8("linename"));
        linename->setGeometry(QRect(120, 100, 113, 20));
        textshowinfo = new QTextEdit(login);
        textshowinfo->setObjectName(QString::fromUtf8("textshowinfo"));
        textshowinfo->setGeometry(QRect(80, 190, 221, 71));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QApplication::translate("login", "Form", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:9pt; font-weight:600;\">\344\270\215\346\254\242\350\277\216\344\275\277\347\224\250\302\256 P2P\345\234\250\347\272\277\350\201\212\345\244\251\347\263\273\347\273\237</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        btnlogin1->setText(QApplication::translate("login", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        textshowinfo->setHtml(QApplication::translate("login", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\277\231\346\230\257\344\270\200\344\270\252p2p\350\201\212\345\244\251\350\275\257\344\273\266\347\232\204\344\273\213\347\273\215</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
