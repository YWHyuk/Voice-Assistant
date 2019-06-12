#include "pronouncegame.h"
#include<vector>
#include<string>
using namespace std;

pronouncegame::pronouncegame(QWidget *parent, vector<Data_Set>& wordlist)
	: QWidget(parent),words(wordlist)
{
	ui.setupUi(this);
	ui.result->hide();
	count = 0;
	correct = 0;
	DataSetLength = wordlist.size();
	ui.counter->setText(QString::number(count) + QString::fromStdString("/") + QString::number(DataSetLength));

}

void pronouncegame::on_pushButton_clicked() {
	if (count < DataSetLength - 1) {
		count++;
		ui.counter->setText(QString::number(count) + QString::fromStdString("/") + QString::number(DataSetLength));
		ui.words->setText(QString::fromStdString(words.at(count).Data_getWord()));

		//correct answer
		if (1)
			correct++;
	}
	else {
		ui.counter->hide();
		ui.helper->hide();
		ui.result->show();

		ui.words->setText(QString::number(correct) + QString::fromStdString("/") + QString::number(DataSetLength));
	}
}