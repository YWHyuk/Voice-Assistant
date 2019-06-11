/********************************************************************************
** Form generated from reading UI file 'WordBookSelect.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDBOOKSELECT_H
#define UI_WORDBOOKSELECT_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_WBElement
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;
    QLabel *label;

    void setupUi(QDialog *WBElement)
    {
        if (WBElement->objectName().isEmpty())
            WBElement->setObjectName(QString::fromUtf8("WBElement"));
        WBElement->resize(400, 300);
        QFont font;
        font.setFamily(QString::fromUtf8("Terminal"));
        font.setPointSize(12);
        WBElement->setFont(font);
        WBElement->setStyleSheet(QString::fromUtf8(""));
        buttonBox = new QDialogButtonBox(WBElement);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Gulim"));
        font1.setPointSize(9);
        buttonBox->setFont(font1);
        buttonBox->setStyleSheet(QString::fromUtf8(""));
        buttonBox->setLocale(QLocale(QLocale::English, QLocale::UnitedStates));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(WBElement);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(60, 40, 256, 192));
        listWidget->setStyleSheet(QString::fromUtf8(""));
        label = new QLabel(WBElement);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 10, 151, 16));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel{color: white;}"));

        retranslateUi(WBElement);
        QObject::connect(buttonBox, SIGNAL(accepted()), WBElement, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), WBElement, SLOT(reject()));

        QMetaObject::connectSlotsByName(WBElement);
    } // setupUi

    void retranslateUi(QDialog *WBElement)
    {
        WBElement->setWindowTitle(QApplication::translate("WBElement", "Dialog", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("WBElement", "\353\213\250\354\226\264\354\236\2451", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("WBElement", "\353\213\250\354\226\264\354\236\2452", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        label->setText(QApplication::translate("WBElement", "Select WordBook", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WBElement: public Ui_WBElement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDBOOKSELECT_H
