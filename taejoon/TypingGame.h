#pragma once

#include <QtWidgets/qwidget.h>
#include <QtWidgets/qmessagebox.h>
#include <QTimer>
#include <QString>
#include <QVector>
#include "ui_TypingGame.h"
#include <vector>
#include "Data_Set.h"
#include <string>

class TypingGame : public QWidget
{
	Q_OBJECT

public:
	TypingGame(QWidget *parent = Q_NULLPTR, std::vector<Data_Set>& data_set = std::vector<Data_Set>());
	~TypingGame();
public slots:
	void update();
	void check();
private:
	Ui::TypingGame ui;
	QTimer *timer;
	std::vector<Data_Set> ds;
	int remain_time;
	
	int total_count;
	int error_count;

	void setWord();
	void nextProcess(bool right);
};
