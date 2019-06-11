#pragma once
#include "Controller.h"
#include <QtWidgets/qapplication.h>
#include "MainWindow.h"

int main(int argc,char** argv)
{

	int b = 0;
	QApplication a(argc,argv);
	MainWindow w;
	w.show();
	w.setFocus();
	a.exec();
	
	return 0;
}