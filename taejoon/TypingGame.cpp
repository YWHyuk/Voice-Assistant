#include "TypingGame.h"

TypingGame::TypingGame(QWidget *parent, std::vector<Data_Set> data_set)
	: QWidget(parent), timer(NULL), ds(data_set),remain_time(100),total_count(data_set.size()),error_count(0)
{
	ui.setupUi(this);
	ui.inputLine->setFocus();
	/* �ʱ�ȭ ���� */
	if(ds.size()!=0)
		ds.push_back(Data_Set("",""));
	/* Ÿ�̸� ���� */
	timer = new QTimer(this);
	setWord();
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	connect(ui.inputLine, SIGNAL(returnPressed()), this, SLOT(check()));
	timer->start(20);
	ui.progressBar->setRange(0,total_count);
	ui.wrongBar->setRange(0,total_count);
}

TypingGame::~TypingGame()
{
}
void TypingGame::update() {
	if (remain_time != 0) {
		if (ds.size() > 1)
			ui.timeBar->setValue(remain_time--);
		else {
			timer->start(0);
			/*
			��� �˷��ִ� ���̾�α� �����.
			*/
			return;
		}
	}
	else {
		ui.timeBar->setValue(remain_time);
		
		
		nextProcess(false);
		setWord();
		if (ds.size() <= 1) {
			timer->start(0);
			return;
		}
		remain_time = 100;
	}
	timer->start(20);
}
void TypingGame::check() {
	QString input = ui.inputLine->text();
	//ui.inputLine->setText(QString(""));
	if (ds.size() < 2)
		return;
	int ret = QString::compare(input, QString::fromLocal8Bit(ds.at(ds.size() - 2).Data_getWord().c_str()));
	if (ret != 0)
		nextProcess(false);
	else
		nextProcess(true);
	setWord();
	remain_time = 100;
}
void TypingGame::setWord() {
	if (ds.size() == 0)
		return;
	/* before word ���� */
	Data_Set temp = ds.at(ds.size() - 1);
	QString word = QString::fromLocal8Bit(temp.Data_getWord().c_str());
	word += "\n" + QString::fromLocal8Bit(temp.Data_getMeaning().c_str());
	ui.beforeWord->setText(word);

	if (ds.size() < 2) {
		ui.CurrentWord->setText("");
		ui.nextWord->setText("");
		return;
	}
	/* ���� ��ġ */
	Data_Set temp1 = ds.at(ds.size() - 2);
	word = QString::fromLocal8Bit(temp1.Data_getWord().c_str());
	ui.CurrentWord->setText(word);
	
	if (ds.size() < 3) {
		ui.nextWord->setText("");
		return;
	}
	Data_Set temp2 = ds.at(ds.size() - 3);
	word = QString::fromLocal8Bit(temp2.Data_getWord().c_str());
	ui.nextWord->setText(word);
}
void TypingGame::nextProcess(bool right) {
	if (ds.size() != 0)
		ds.pop_back();
	if (ds.size() == 0) {
		ui.wrongBar->setValue(error_count);
		ui.progressBar->setValue(total_count + 1 - ds.size());
		return;
	}
	if (!right) {
		error_count++;
		ui.wrongBar->setValue(error_count);
		ui.beforeWord->setStyleSheet("color:#D91111;border-width: 0px;");
	}else
		ui.beforeWord->setStyleSheet("color:#055902;border-width: 0px;");
	ui.progressBar->setValue(total_count + 1 - ds.size());
}