#include "resourcegathering.h"
#include<vector>
#include<string>
#include<Windows.h>
#include<QTimer>

using namespace std;

resourcegathering::resourcegathering(QWidget *parent, vector<Data_Set>& wordlist)
	: QWidget(parent)
{
	//16개의 단어를 가진벡터를 랜덤하게 받아옴
	words = wordlist;

	//타이머
	ui.setupUi(this);
	timerId = startTimer(1000);

	time = 30;	//남은시간
	count = 0;	//현재까지 맞춘 개수

	ui.result->hide();
	ui.score->hide();

	//단어 설정


	//문제 푼 여부
	for (int i = 0; i < 16; i++)
		solved[i] = false;
}

//말하는 동작으로 대체
void resourcegathering::on_pushButton_clicked() {
	//말한것중에 정답이 있을 경우
	for (int i = 0; i < 16; i++) {
		if (/*정답 && 안풀었음*/1) {
			count++;
			solved[i] = true;
			ui.count->setText(QString::number(count) + QString::fromStdString("/16"));
		}
	}
	if (count == 16) {
		end();
	}
}

void resourcegathering::timerEvent(QTimerEvent *event)
{
	if (time == 0)
		end();
	ui.left_time->setText(QString::number(time--));
}

void resourcegathering::end() {
	//숨김
	killTimer(timerId);
	ui.helper->hide();
	ui.left_time->hide();
	ui.left_time_label->hide();
	ui.pushButton->hide();
	ui.count->hide();


	ui.result->show();
	ui.score->setText(QString::number(count) + QString::fromStdString("/16, ")+ QString::number(time)+ QString::fromStdString("s"));
	ui.score->show();
}