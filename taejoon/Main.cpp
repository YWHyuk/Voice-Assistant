#pragma once
#include "Controller.h"
#include <QtWidgets/qapplication.h>

#include "MainWindow.h"

int main(int argc,char** argv)
{
	Data_Manager dm("input.txt");
	QApplication a(argc,argv);
	MainWindow w(nullptr,dm);
	w.show();
	w.setFocus();
	a.exec();
	
	return 0;
}