#pragma once

#include <QtWidgets/qwidget.h>
#include <vector>
#include "ui_MainWindow.h"
#include "TypingGame.h"
#include "Data_Set.h"
#include "WordBookSelect.h"

class MainWindow : public QWidget
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);
	~MainWindow();
public slots:
	void tabBarChange(int index);
	void slotEvent();
	void slotSelected();
private:
	Ui::Form ui;
	TypingGame *typingGame;
	WordBookSelect *wbs;
};
