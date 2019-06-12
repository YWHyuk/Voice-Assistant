/********************************************************************************
** Form generated from reading UI file 'resourcegathering.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESOURCEGATHERING_H
#define UI_RESOURCEGATHERING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialogs2
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *left_time_label;
    QLabel *left_time;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *count;
    QFormLayout *formLayout;
    QLabel *label_1;
    QLabel *label_4;
    QLabel *label_14;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_2;
    QLabel *label_7;
    QLabel *label_3;
    QLabel *label_8;
    QLabel *label_5;
    QLabel *label_9;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_16;
    QLabel *label_15;
    QLabel *helper;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *result;
    QLabel *score;
    QPushButton *pushButton;
    QWidget *background;

    void setupUi(QWidget *Dialogs2)
    {
        if (Dialogs2->objectName().isEmpty())
            Dialogs2->setObjectName(QString::fromUtf8("Dialogs2"));
        Dialogs2->resize(442, 342);
        Dialogs2->setStyleSheet(QString::fromUtf8("QLabel{color:white;}QWidget{background:#375D81;}"));
        verticalLayoutWidget = new QWidget(Dialogs2);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(5, 5, 81, 81));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        left_time_label = new QLabel(verticalLayoutWidget);
        left_time_label->setObjectName(QString::fromUtf8("left_time_label"));
        QFont font;
        font.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        left_time_label->setFont(font);
        left_time_label->setStyleSheet(QString::fromUtf8("QLabel{color:white;}"));
        left_time_label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(left_time_label);

        left_time = new QLabel(verticalLayoutWidget);
        left_time->setObjectName(QString::fromUtf8("left_time"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("1HoonJunglebook"));
        font1.setPointSize(16);
        left_time->setFont(font1);
        left_time->setStyleSheet(QString::fromUtf8("QLabel{color:white;}"));
        left_time->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(left_time);

        verticalLayoutWidget_2 = new QWidget(Dialogs2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(80, 30, 281, 231));
		//verticalLayoutWidget_2->setStyleSheet("QLabel{background:white;color:black;}");
		verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setSizeConstraint(QLayout::SetMaximumSize);
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
		
		count = new QLabel(verticalLayoutWidget_2);
        count->setObjectName(QString::fromUtf8("count"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        font2.setPointSize(10);
        count->setFont(font2);
        count->setStyleSheet(QString::fromUtf8("QLabel{color:white;}"));
        count->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(count);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMaximumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignCenter);
        formLayout->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label_1 = new QLabel(verticalLayoutWidget_2);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setFont(font);
        label_1->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_1);

        label_4 = new QLabel(verticalLayoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);
        label_4->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, label_4);

        label_14 = new QLabel(verticalLayoutWidget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setFont(font);
        label_14->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_14);

        label_11 = new QLabel(verticalLayoutWidget_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setFont(font);
        label_11->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::FieldRole, label_11);

        label_12 = new QLabel(verticalLayoutWidget_2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font);
        label_12->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_12);

        label_13 = new QLabel(verticalLayoutWidget_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setFont(font);
        label_13->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::FieldRole, label_13);

        label_2 = new QLabel(verticalLayoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_2);

        label_7 = new QLabel(verticalLayoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::FieldRole, label_7);

        label_3 = new QLabel(verticalLayoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_3);

        label_8 = new QLabel(verticalLayoutWidget_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);
        label_8->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, label_8);

        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);
        label_5->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, label_5);

        label_9 = new QLabel(verticalLayoutWidget_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);
        label_9->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(5, QFormLayout::FieldRole, label_9);

        label_6 = new QLabel(verticalLayoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, label_6);

        label_10 = new QLabel(verticalLayoutWidget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setFont(font);
        label_10->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(6, QFormLayout::FieldRole, label_10);

        label_16 = new QLabel(verticalLayoutWidget_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setFont(font);
        label_16->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(7, QFormLayout::LabelRole, label_16);

        label_15 = new QLabel(verticalLayoutWidget_2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setFont(font);
        label_15->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(7, QFormLayout::FieldRole, label_15);


        verticalLayout_2->addLayout(formLayout);

        helper = new QLabel(Dialogs2);
        helper->setObjectName(QString::fromUtf8("helper"));
        helper->setGeometry(QRect(80, 270, 281, 20));
        QFont font3;
        font3.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        font3.setPointSize(11);
        helper->setFont(font3);
        helper->setFocusPolicy(Qt::NoFocus);
        helper->setStyleSheet(QString::fromUtf8("QLabel{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 2px;\n"
"border-radius: 5px;\n"
"background:#375D81;color:white;}"));
        helper->setAlignment(Qt::AlignCenter);
        verticalLayoutWidget_3 = new QWidget(Dialogs2);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(80, 70, 281, 121));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        result = new QLabel(verticalLayoutWidget_3);
        result->setObjectName(QString::fromUtf8("result"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        font4.setPointSize(14);
        result->setFont(font4);
        result->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(result);

        score = new QLabel(verticalLayoutWidget_3);
        score->setObjectName(QString::fromUtf8("score"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("1HoonJunglebook"));
        font5.setPointSize(20);
        score->setFont(font5);
        score->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(score);

        pushButton = new QPushButton(Dialogs2);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(170, 290, 100, 30));
        pushButton->setFont(font2);
        pushButton->setStyleSheet(QString::fromUtf8("QPushButton{background:#375D81;color:white;}"));
        background = new QWidget(Dialogs2);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 440, 330));
        background->setStyleSheet(QString::fromUtf8("QWidget#background{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 2px;\n"
"border-radius: 14px;\n"
"background:#375D81;color:white;}"));
        background->raise();
        verticalLayoutWidget->raise();
        verticalLayoutWidget_2->raise();
        helper->raise();
        verticalLayoutWidget_3->raise();
        pushButton->raise();

        retranslateUi(Dialogs2);

        QMetaObject::connectSlotsByName(Dialogs2);
    } // setupUi

    void retranslateUi(QWidget *Dialogs2)
    {
        Dialogs2->setWindowTitle(QApplication::translate("Dialogs2", "Dialog", nullptr));
        left_time_label->setText(QApplication::translate("Dialogs2", "Left TIme", nullptr));
        left_time->setText(QApplication::translate("Dialogs2", "30", nullptr));
        count->setText(QApplication::translate("Dialogs2", "Words 0/16", nullptr));
        label_1->setText(QString());
        label_4->setText(QString());
        label_14->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_2->setText(QString());
        label_7->setText(QString());
        label_3->setText(QString());
        label_8->setText(QString());
        label_5->setText(QString());
        label_9->setText(QString());
        label_6->setText(QString());
        label_10->setText(QString());
        label_16->setText(QString());
        label_15->setText(QString());
        helper->setText(QApplication::translate("Dialogs2", "Pronounce to remove words", nullptr));
        result->setText(QApplication::translate("Dialogs2", "Result", nullptr));
        score->setText(QApplication::translate("Dialogs2", "0/16, 00s", nullptr));
        pushButton->setText(QApplication::translate("Dialogs2", "PushButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialogs2: public Ui_Dialogs2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESOURCEGATHERING_H
