#pragma once
#include "Controller.h"
#include <QtWidgets/qapplication.h>

#include "MainWindow.h"

int main(int argc,char** argv)
{
	Data_Manager dm("input.txt");
	vector<Data_Set>& t = dm.get_words().at(0).get_word();
	t.at(0) = Data_Set("change","c");
	QApplication a(argc,argv);
	MainWindow w(nullptr,dm);
	w.show();
	w.setFocus();
	a.exec();
	
	return 0;
}