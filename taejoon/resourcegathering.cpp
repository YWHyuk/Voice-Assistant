#include "resourcegathering.h"
#include<vector>
#include<string>
#include<Windows.h>
#include<QTimer>

using namespace std;

resourcegathering::resourcegathering(QWidget *parent, vector<Data_Set>& wordlist)
	: QWidget(parent), words(wordlist)
{
	//16개의 단어를 가진벡터를 랜덤하게 받아옴

	//타이머
	ui.setupUi(this);
	timerId = startTimer(1000);

	total_count = words.size() > 16 ? 16 : words.size();
	time = 30;	//남은시간
	count = 0;	//현재까지 맞춘 개수
	ui.verticalLayoutWidget_3->hide();
	ui.result->hide();
	ui.score->hide();

	//단어 설정
	switch (total_count) {
	case 16:
		ui.label_16->setText(QString::fromStdString(words.at(15).Data_getWord()));
	case 15:
		ui.label_15->setText(QString::fromStdString(words.at(14).Data_getWord()));
	case 14:
		ui.label_14->setText(QString::fromStdString(words.at(13).Data_getWord()));
	case 13:
		ui.label_13->setText(QString::fromStdString(words.at(12).Data_getWord()));
	case 12:
		ui.label_12->setText(QString::fromStdString(words.at(11).Data_getWord()));
	case 11:
		ui.label_11->setText(QString::fromStdString(words.at(10).Data_getWord()));
	case 10:
		ui.label_10->setText(QString::fromStdString(words.at(9).Data_getWord()));
	case 9:
		ui.label_9->setText(QString::fromStdString(words.at(8).Data_getWord()));
	case 8:
		ui.label_8->setText(QString::fromStdString(words.at(7).Data_getWord()));
	case 7:
		ui.label_7->setText(QString::fromStdString(words.at(6).Data_getWord()));
	case 6:
		ui.label_6->setText(QString::fromStdString(words.at(5).Data_getWord()));
	case 5:
		ui.label_5->setText(QString::fromStdString(words.at(4).Data_getWord()));
	case 4:
		ui.label_4->setText(QString::fromStdString(words.at(3).Data_getWord()));
	case 3:
		ui.label_3->setText(QString::fromStdString(words.at(2).Data_getWord()));
	case 2:
		ui.label_2->setText(QString::fromStdString(words.at(1).Data_getWord()));
	case 1:
		ui.label_1->setText(QString::fromStdString(words.at(0).Data_getWord()));
		break;
	default:
		break;
	}
	ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
	//문제 푼 여부
	for (int i = 0; i < total_count; i++)
		solved[i] = false;
	assistant = new SpeechT();
	assistant->flags = true;
	connect(assistant, SIGNAL(resultReady(QString)), this, SLOT(handleResults(QString)));
	assistant->start();	
}

//말하는 동작으로 대체
void resourcegathering::on_pushButton_clicked() {
	//말한것중에 정답이 있을 경우
	
	switch (total_count) {
	case 16:
		if (QString::compare(ui.helper->text(), ui.label_16->text()) == 0) {
			if (solved[15] != true) {
				count++;
				solved[15] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_16->setText(QString(""));
				break;
			}
		}
	case 15:
		if (QString::compare(ui.helper->text(), ui.label_15->text()) == 0) {
			if (solved[14] != true) {
				count++;
				solved[14] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_15->setText(QString(""));
				break;
			}
		}
	case 14:
		if (QString::compare(ui.helper->text(), ui.label_14->text()) == 0) {
			if (solved[13] != true) {
				count++;
				solved[13] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_14->setText(QString(""));
				break;
			}
		}
	case 13:
		if (QString::compare(ui.helper->text(), ui.label_13->text()) == 0) {
			if (solved[12] != true) {
				count++;
				solved[12] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_13->setText(QString(""));
				break;
			}
		}
	case 12:
		if (QString::compare(ui.helper->text(), ui.label_12->text()) == 0) {
			if (solved[11] != true) {
				count++;
				solved[11] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_12->setText(QString(""));
				break;
			}
		}
	case 11:
		if (QString::compare(ui.helper->text(), ui.label_11->text()) == 0) {
			if (solved[10] != true) {
				count++;
				solved[10] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_11->setText(QString(""));
				break;
			}
		}
	case 10:
		if (QString::compare(ui.helper->text(), ui.label_10->text()) == 0) {
			if (solved[9] != true) {
				count++;
				solved[9] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_10->setText(QString(""));
				break;
			}
		}
	case 9:
		if (QString::compare(ui.helper->text(), ui.label_9->text()) == 0) {
			if (solved[8] != true) {
				count++;
				solved[8] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_9->setText(QString(""));
				break;
			}
		}
	case 8:
		if (QString::compare(ui.helper->text(), ui.label_8->text()) == 0) {
			if (solved[7] != true) {
				count++;
				solved[7] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_8->setText(QString(""));
				break;
			}
		}
	case 7:
		if (QString::compare(ui.helper->text(), ui.label_7->text()) == 0) {
			if (solved[6] != true) {
				count++;
				solved[6] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_7->setText(QString(""));
				break;
			}
		}
	case 6:
		if (QString::compare(ui.helper->text(), ui.label_6->text()) == 0) {
			if (solved[5] != true) {
				count++;
				solved[5] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_6->setText(QString(""));
				break;
			}
		}
	case 5:
		if (QString::compare(ui.helper->text(), ui.label_5->text()) == 0) {
			if (solved[4] != true) {
				count++;
				solved[4] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_5->setText(QString(""));
				break;
			}
		}
	case 4:
		if (QString::compare(ui.helper->text(), ui.label_4->text()) == 0) {
			if (solved[3] != true) {
				count++;
				solved[3] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_4->setText(QString(""));
				break;
			}
		}
	case 3:
		if (QString::compare(ui.helper->text(), ui.label_3->text()) == 0) {
			if (solved[2] != true) {
				count++;
				solved[2] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_3->setText(QString(""));
				break;
			}
		}
	case 2:
		if (QString::compare(ui.helper->text(), ui.label_2->text()) == 0) {
			if (solved[1] != true) {
				count++;
				solved[1] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_2->setText(QString(""));
				break;

			}
		}
	case 1:
		if (QString::compare(ui.helper->text(), ui.label_1->text()) == 0) {
			if (solved[0] != true) {
				count++;
				solved[0] = true;
				ui.count->setText(QString::number(count) + QString::fromStdString("/") + QString::number(total_count));
				ui.label_1->setText(QString(""));
				break;
			}
		}
		return;
	default:
		break;;
	}

	if (count == total_count) {
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
	assistant->flags = false;
	assistant->quit();
	assistant->wait();
	killTimer(timerId);
	ui.helper->hide();
	ui.left_time->hide();
	ui.left_time_label->hide();
	ui.pushButton->hide();
	ui.count->hide();
	ui.verticalLayoutWidget_2->hide();

	ui.verticalLayoutWidget_3->show();
	ui.result->show();
	ui.score->setText(QString::number(count) + QString::fromStdString("/")+QString::number(total_count)+ QString(" ")+QString::number(time)+ QString::fromStdString("s"));
	ui.score->show();
}
void resourcegathering::handleResults(const QString rec) {
	if (rec.size() != 0) {
		ui.helper->setText(rec);
		on_pushButton_clicked();
	}
	else {
		ui.helper->setText(QString("Pronounce to remove words..."));
	}
}