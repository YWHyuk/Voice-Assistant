/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QTabWidget *tabWidget;
    QWidget *tab_1;
    QWidget *tab_2;
    QWidget *tab_3;
    QPushButton *pushButton;
    QLabel *WordBookName;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName(QString::fromUtf8("Form"));
        Form->resize(1024, 512);
        QFont font;
        font.setFamily(QString::fromUtf8("Terminal"));
        Form->setFont(font);
        Form->setStyleSheet(QString::fromUtf8("QWidget {\n"
"    background: #4E7AC7;	\n"
"    color : white;\n"
"}"));
        tabWidget = new QTabWidget(Form);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setGeometry(QRect(0, 0, 1021, 511));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        font1.setPointSize(12);
        tabWidget->setFont(font1);
        tabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #FFFFFF;\n"
"}\n"
"\n"
"/* Style the tab using the tab sub-control. Note that\n"
"    it reads QTabBar _not_ QTabWidget */\n"
"QTabBar::tab {\n"
"    background: #4E7AC7;	\n"
"    width: 255px;\n"
"    height: 90px;\n"
"    color: white;\n"
"}\n"
"\n"
"QTabBar::tab:selected, QTabBar::tab:hover {\n"
"    background: #35478C;\n"
"}"));
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        tab_1->setEnabled(true);
        tab_1->setStyleSheet(QString::fromUtf8("QWidget{background: #C4D7ED;}"));
        tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tab_2->setStyleSheet(QString::fromUtf8("QWidget{background: #C4D7ED;}"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tab_3->setStyleSheet(QString::fromUtf8("QWidget{background: #C4D7ED;}"));
        tabWidget->addTab(tab_3, QString());
        pushButton = new QPushButton(Form);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(810, 12, 180, 35));
        pushButton->setFont(font1);
        pushButton->setStyleSheet(QString::fromUtf8(""));
        WordBookName = new QLabel(Form);
        WordBookName->setObjectName(QString::fromUtf8("WordBookName"));
        WordBookName->setGeometry(QRect(789, 50, 221, 35));
        QFont font2;
        font2.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        font2.setPointSize(11);
        WordBookName->setFont(font2);
        WordBookName->setAlignment(Qt::AlignCenter);

        retranslateUi(Form);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QApplication::translate("Form", "Form", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_1), QApplication::translate("Form", "Typing Game", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("Form", "resource gathering", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("Form", "Pronounce Game", nullptr));
        pushButton->setText(QApplication::translate("Form", "Select WordBook", nullptr));
        WordBookName->setText(QApplication::translate("Form", "Unselected...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Form: public Ui_Form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
