#pragma once

#include <QtWidgets/QDialog>
#include <qtimer.h>
#include "ui_pronouncegame.h"
#include "Data_Set.h"
#include<vector>
#include<string>
#include <QtWidgets/qmessagebox.h>
#include "SpeechT.h"

using namespace std;

class pronouncegame : public QWidget
{
	Q_OBJECT

public:
	pronouncegame(QWidget *parent = Q_NULLPTR, vector<Data_Set>& wordlist = (vector<Data_Set>)NULL);

private slots:
	void on_pushButton_clicked();
	void update2();
	void handleResults(const QString);
private:
	Ui::Dialog ui;
	std::vector<Data_Set> words;
	QTimer *timer;
	int remain_time;
	int count;
	int correct;
	int DataSetLength;
	SpeechT* assistant;
};
