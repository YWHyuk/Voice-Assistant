#pragma once

#include <QtWidgets/qwidget.h>
#include <vector>
#include "ui_MainWindow.h"
#include "TypingGame.h"
#include "Data_Set.h"
#include "WordBookSelect.h"
#include "Data_Manager.h"

class MainWindow : public QWidget
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR,Data_Manager& test = Data_Manager());
	~MainWindow();
public slots:
	void tabBarChange(int index);
	void slotEvent();
	void slotSelected(QAbstractButton *);
private:
	Ui::Form ui;
	TypingGame *typingGame;
	WordBookSelect *wbs;
	Data_Manager& dm;
	vector<Data_Set> get_words();
	vector<Data_Set> set_random(vector<Data_Set> src);
};
