#pragma once

#include <QtWidgets/QDialog>
#include "ui_pronouncegame.h"
#include "Data_Set.h"
#include<vector>
#include<string>
using namespace std;

class pronouncegame : public QWidget
{
	Q_OBJECT

public:
	pronouncegame(QWidget *parent = Q_NULLPTR, vector<Data_Set>& wordlist = (vector<Data_Set>)NULL);

private slots:
	void on_pushButton_clicked();

private:
	Ui::Dialog ui;
	std::vector<Data_Set> words;
	int count;
	int correct;
	int DataSetLength;
};
