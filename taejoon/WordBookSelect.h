#pragma once

#include <QtWidgets/qdialog.h>
#include <QtWidgets/qstylefactory.h>
#include <qstringlist.h>
#include <qstring.h>
#include "ui_WordBookSelect.h"
#include "Data_Manager.h"

class WordBookSelect : public QDialog
{
	Q_OBJECT

public:
	WordBookSelect(QWidget *parent = Q_NULLPTR, Data_Manager& test = Data_Manager());
	~WordBookSelect();
	QString getSelectedString();
private:
	Ui::WBElement ui;
};
