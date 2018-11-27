/********************************************************************************
** Form generated from reading UI file 'mainpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPAGE_H
#define UI_MAINPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mainpage
{
public:
    QPushButton *btnsend;
    QComboBox *comboBox;
    QTextBrowser *textBrowser;

    void setupUi(QWidget *mainpage)
    {
        if (mainpage->objectName().isEmpty())
            mainpage->setObjectName(QString::fromUtf8("mainpage"));
        mainpage->resize(402, 300);
        btnsend = new QPushButton(mainpage);
        btnsend->setObjectName(QString::fromUtf8("btnsend"));
        btnsend->setGeometry(QRect(140, 240, 75, 23));
        comboBox = new QComboBox(mainpage);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(80, 70, 201, 27));
        textBrowser = new QTextBrowser(mainpage);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(120, 20, 151, 31));

        retranslateUi(mainpage);

        QMetaObject::connectSlotsByName(mainpage);
    } // setupUi

    void retranslateUi(QWidget *mainpage)
    {
        mainpage->setWindowTitle(QApplication::translate("mainpage", "Form", 0, QApplication::UnicodeUTF8));
        btnsend->setText(QApplication::translate("mainpage", "\350\277\236\346\216\245", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("mainpage", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\275\223\345\211\215\345\234\250\347\272\277\347\224\250\346\210\267</p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class mainpage: public Ui_mainpage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPAGE_H
