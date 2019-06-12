#include "pronouncegame.h"

pronouncegame::pronouncegame(QWidget *parent, vector<Data_Set>& wordlist)
	: QWidget(parent),words(wordlist)
{
	ui.setupUi(this);
	ui.result->hide();
	count = 0;
	correct = 0;
	DataSetLength = wordlist.size();
	remain_time = (5 * DataSetLength) * 100;
	ui.counter->setText(QString::number(count) + QString::fromStdString("/") + QString::number(DataSetLength));
	ui.left_time->setText(QString::number(remain_time));
	ui.words->setText(QString::fromStdString(words.at(0).Data_getWord()));

	timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(update2()));
	timer->start(100);

	assistant = new SpeechT();
	connect(assistant, SIGNAL(resultReady(QString)), this, SLOT(handleResults(QString)));
	assistant->start();
}

void pronouncegame::on_pushButton_clicked() {
	//correct answer
	if (QString::compare(ui.helper->text(), ui.words->text()) == 0)
		correct++;
	else
		return;
	count++;
	if (count < DataSetLength) {
		ui.counter->setText(QString::number(count) + QString::fromStdString("/") + QString::number(DataSetLength));
		//if(count != Data)
		ui.words->setText(QString::fromStdString(words.at(count).Data_getWord()));
	}
	else {
		ui.counter->hide();
		ui.helper->hide();
		ui.result->show();

		ui.words->setText(QString::number(correct) + QString::fromStdString("/") + QString::number(DataSetLength));
		ui.pushButton->setEnabled(false);
		timer->stop();
		assistant->exit();
		QMessageBox msgBox;
		QString result = QString("Problem count: ") + QString::number(DataSetLength)\
			+ QString("\nRight Answer: ") + QString::number(correct)\
			+ QString("\nWrong Answer: ") + QString::number(DataSetLength - correct);
		msgBox.setWindowTitle("Result");
		msgBox.setText(result);
		msgBox.setStyleSheet(QString::fromUtf8("QWidget {\n"
			"    background: #4E7AC7;	\n"
			"    color : white;\n"
			"	 min-width: 300px;\n"
			"}"));
		QFont font1;
		font1.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
		font1.setPointSize(12);
		msgBox.setFont(font1);
		msgBox.setMinimumSize(450, 300);
		msgBox.setStandardButtons(QMessageBox::Ok);
		msgBox.setDefaultButton(QMessageBox::Ok);
		msgBox.exec();
	}
}
void pronouncegame::update2() {
	if (remain_time == 0) {
		timer->stop();
		on_pushButton_clicked();
		return;
	}
	remain_time -= 10;
	ui.left_time->setText(QString::number(remain_time/100));
	timer->start(100);
}
void pronouncegame::handleResults(const QString rec) {
	if (rec.size() != 0) {
		ui.helper->setText(rec);
		on_pushButton_clicked();
	}
	else {
		ui.helper->setText(QString("Pronounce to remove words..."));
	}
}