#pragma once

#include <QtWidgets/QDialog>
#include "ui_resourcegathering.h"
#include<vector>
#include<string>
#include "Data_Set.h"
using namespace std;

class resourcegathering : public QWidget
{
	Q_OBJECT

public:
	resourcegathering(QWidget *parent = Q_NULLPTR, vector<Data_Set>& wordlist = (*((vector<Data_Set>*)NULL)));

private slots:
	void on_pushButton_clicked();

private:
	void timerEvent(QTimerEvent *event);
	void end();
	Ui::Dialogs2 ui;
	std::vector<Data_Set> words;
	int count;
	int correct;
	int time;
	int timerId;
	bool solved[16];
	//���� ����������
	const int DataSetLength = 20;
};