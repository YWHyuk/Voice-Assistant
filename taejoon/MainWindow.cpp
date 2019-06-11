#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QWidget(parent),typingGame(NULL)
{
	ui.setupUi(this);
	connect(ui.tabWidget, SIGNAL(currentChanged(int)), this, SLOT(tabBarChange(int)));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(slotEvent()));
}

MainWindow::~MainWindow()
{
}
void MainWindow::tabBarChange(int index) {
	QWidget* currWidget = ui.tabWidget->currentWidget();
	std:vector<Data_Set> dummy;
	for (int i = 0; i < 32; i++) {
		dummy.push_back(Data_Set());
	}	
	switch (index) {
	case 0:
		if (typingGame != NULL)
			delete(typingGame);
		typingGame = new TypingGame(currWidget,dummy);
		typingGame->setGeometry(50, 50, 921, 331);
		typingGame->show();
		break;
	case 1:
		break;
	case 2:
		break;
	}
}
void MainWindow::slotEvent() {
	wbs = new WordBookSelect(this);
	wbs->setModal(true);
	wbs->show();
}
void MainWindow::slotSelected() {
	ui.WordBookName->setText(wbs->getSelectedString());
}