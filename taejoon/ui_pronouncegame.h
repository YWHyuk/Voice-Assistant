/********************************************************************************
** Form generated from reading UI file 'pronouncegame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRONOUNCEGAME_H
#define UI_PRONOUNCEGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
	QWidget *verticalLayoutWidget;
	QVBoxLayout *verticalLayout;
	QLabel *words;
	QTableView *tableView;
	QLabel *helper;
	QLabel *result;
	QPushButton *pushButton;
	QWidget *background;
	QWidget *verticalLayoutWidget_2;
	QVBoxLayout *verticalLayout_2;
	QLabel *left_time_label;
	QLabel *left_time;
	QLabel *counter;

	void setupUi(QWidget *Dialog)
	{
		if (Dialog->objectName().isEmpty())
			Dialog->setObjectName(QString::fromUtf8("Dialog"));
		Dialog->resize(442, 340);
		QFont font;
		font.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
		font.setPointSize(12);
		Dialog->setFont(font);
		Dialog->setAutoFillBackground(true);
		Dialog->setStyleSheet(QString::fromUtf8(""));
		verticalLayoutWidget = new QWidget(Dialog);
		verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
		verticalLayoutWidget->setGeometry(QRect(91, 50, 261, 221));
		verticalLayoutWidget->setStyleSheet(QString::fromUtf8("QWidget#verticalLayoutWidget{background:#375D81;}"));
		verticalLayout = new QVBoxLayout(verticalLayoutWidget);
		verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
		verticalLayout->setContentsMargins(0, 0, 0, 0);
		words = new QLabel(verticalLayoutWidget);
		words->setObjectName(QString::fromUtf8("words"));
		QFont font1;
		font1.setFamily(QString::fromUtf8("1HoonJunglebook"));
		font1.setPointSize(22);
		words->setFont(font1);
		words->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"border-style: solid;\n"
			"border-color: #FFFFFF;\n"
			"border-width: 2px;\n"
			"border-radius:14px;\n"
			"color:white;background:#4E7AC7;}"));
		words->setAlignment(Qt::AlignCenter);

		verticalLayout->addWidget(words);

		tableView = new QTableView(verticalLayoutWidget);
		tableView->setObjectName(QString::fromUtf8("tableView"));
		tableView->setStyleSheet(QString::fromUtf8("QTableView{background:white;}"));

		verticalLayout->addWidget(tableView);

		helper = new QLabel(verticalLayoutWidget);
		helper->setObjectName(QString::fromUtf8("helper"));
		helper->setFont(font);
		helper->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"border-style: solid;\n"
			"border-color: #FFFFFF;\n"
			"border-width: 2px;\n"
			"border-radius: 5px;\n"
			"background:#375D81;color:white;}"));
		helper->setAlignment(Qt::AlignCenter);

		verticalLayout->addWidget(helper);

		result = new QLabel(Dialog);
		result->setObjectName(QString::fromUtf8("result"));
		result->setGeometry(QRect(110, 150, 231, 69));
		result->setFont(font);
		result->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"border-style: solid;\n"
			"border-color: #FFFFFF;\n"
			"border-width: 2px;\n"
			"border-radius: 14px;\n"
			"background:#375D81;color:white;}"));
		result->setAlignment(Qt::AlignCenter);
		pushButton = new QPushButton(Dialog);
		pushButton->setObjectName(QString::fromUtf8("pushButton"));
		pushButton->setGeometry(QRect(171, 290, 100, 30));
		QFont font2;
		font2.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
		font2.setPointSize(10);
		pushButton->setFont(font2);
		pushButton->setStyleSheet(QString::fromUtf8("QPushButton{background:#375D81;color:white;}"));
		pushButton->setAutoExclusive(false);
		background = new QWidget(Dialog);
		background->setObjectName(QString::fromUtf8("background"));
		background->setGeometry(QRect(0, 0, 440, 330));
		background->setStyleSheet(QString::fromUtf8("QWidget#background{\n"
			"border-style: solid;\n"
			"border-color: #FFFFFF;\n"
			"border-width: 2px;\n"
			"border-radius: 14px;\n"
			"background:#375D81;color:white;}"));
		verticalLayoutWidget_2 = new QWidget(background);
		verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
		verticalLayoutWidget_2->setGeometry(QRect(10, 10, 81, 81));
		verticalLayoutWidget_2->setStyleSheet(QString::fromUtf8("QWidget#verticalLayoutWidget_2{background:#375D81;}QLabel{background:#375D81;	}"));
		verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
		verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
		verticalLayout_2->setSizeConstraint(QLayout::SetDefaultConstraint);
		verticalLayout_2->setContentsMargins(0, 0, 0, 0);

		left_time_label = new QLabel(verticalLayoutWidget_2);
		left_time_label->setObjectName(QString::fromUtf8("left_time_label"));
		left_time_label->setFont(font2);
		left_time_label->setStyleSheet(QString::fromUtf8("QLabel{color:white;}"));
		left_time_label->setAlignment(Qt::AlignCenter);

		verticalLayout_2->addWidget(left_time_label);

		left_time = new QLabel(verticalLayoutWidget_2);
		left_time->setObjectName(QString::fromUtf8("left_time"));
		QFont font3;
		font3.setFamily(QString::fromUtf8("1HoonJunglebook"));
		font3.setPointSize(16);
		left_time->setFont(font3);
		left_time->setStyleSheet(QString::fromUtf8("QLabel{color:white;}"));
		left_time->setAlignment(Qt::AlignCenter);

		verticalLayout_2->addWidget(left_time);

		counter = new QLabel(background);
		counter->setObjectName(QString::fromUtf8("counter"));
		counter->setGeometry(QRect(340, 10, 91, 31));
		counter->setFont(font);
		counter->setStyleSheet(QString::fromUtf8("QLabel{\n"
			"border-style: solid;\n"
			"border-color: #FFFFFF;\n"
			"border-width: 2px;\n"
			"border-radius: 14px;\n"
			"background:#375D81;color:white;}"));
		counter->setAlignment(Qt::AlignCenter);
		background->raise();
		verticalLayoutWidget->raise();
		result->raise();
		pushButton->raise();

		retranslateUi(Dialog);

		QMetaObject::connectSlotsByName(Dialog);
	} // setupUi

	void retranslateUi(QWidget *Dialog)
	{
		Dialog->setWindowTitle(QApplication::translate("Dialog", "Dialog", nullptr));
		words->setText(QApplication::translate("Dialog", "Word", nullptr));
		helper->setText(QApplication::translate("Dialog", "Waiting for pronouncing...", nullptr));
		result->setText(QApplication::translate("Dialog", "Result", nullptr));
		pushButton->setText(QApplication::translate("Dialog", "PassButton", nullptr));
		left_time_label->setText(QApplication::translate("Dialog", "Left TIme", nullptr));
		left_time->setText(QApplication::translate("Dialog", "30", nullptr));
		counter->setText(QApplication::translate("Dialog", "0/10", nullptr));
	} // retranslateUi

};

namespace Ui {
	class Dialog : public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRONOUNCEGAME_H
