#include "resourcegathering.h"
#include<vector>
#include<string>
#include<Windows.h>
#include<QTimer>

using namespace std;

resourcegathering::resourcegathering(QWidget *parent, vector<Data_Set>& wordlist)
	: QWidget(parent)
{
	//16���� �ܾ �������͸� �����ϰ� �޾ƿ�
	words = wordlist;

	//Ÿ�̸�
	ui.setupUi(this);
	timerId = startTimer(1000);

	time = 30;	//�����ð�
	count = 0;	//������� ���� ����

	ui.result->hide();
	ui.score->hide();

	//�ܾ� ����


	//���� Ǭ ����
	for (int i = 0; i < 16; i++)
		solved[i] = false;
}

//���ϴ� �������� ��ü
void resourcegathering::on_pushButton_clicked() {
	//���Ѱ��߿� ������ ���� ���
	for (int i = 0; i < 16; i++) {
		if (/*���� && ��Ǯ����*/1) {
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
	//����
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