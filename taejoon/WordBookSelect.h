#pragma once

#include <QtWidgets/qdialog.h>
#include "ui_WordBookSelect.h"

class WordBookSelect : public QDialog
{
	Q_OBJECT

public:
	WordBookSelect(QWidget *parent = Q_NULLPTR);
	~WordBookSelect();
	QString getSelectedString();
private:
	Ui::WBElement ui;
};
