#include "MainWindow.h"

MainWindow::MainWindow(QWidget *parent, Data_Manager& test)
	: QWidget(parent),typingGame(NULL),dm(test)
{
	ui.setupUi(this);
	/*이벤트 처리 */
	connect(ui.tabWidget, SIGNAL(currentChanged(int)), this, SLOT(tabBarChange(int)));
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(slotEvent()));
}

MainWindow::~MainWindow()
{
}
void MainWindow::tabBarChange(int index) {
	QWidget* currWidget = ui.tabWidget->currentWidget();
	vector<Data_Set> dummy;
	for (int i = 0; i < 32; i++) {
		dummy.push_back(Data_Set());
	}	
	switch (index) {
	case 0:
		dummy = get_words();
		if (dummy.size() == 0) {
			/* 예외 처리 */
			return;
		}
		typingGame = new TypingGame(currWidget,set_random(dummy));
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
	wbs = new WordBookSelect(this, this->dm);
	wbs->setModal(true);
	wbs->show();
}
void MainWindow::slotSelected(QAbstractButton * temp) {
	QString tt = temp->text();
	if(QString::compare(temp->text(),QString("OK"))!=0)
		return;
	QString selected = wbs->getSelectedString();
	ui.WordBookName->setText(selected);
}
vector<Data_Set> MainWindow::get_words() {
	QString val = ui.WordBookName->text();
	int sz = (int)(dm.get_words().size());
	for (int i = 0; i < sz; i++) {
		if ((QString::compare(val, QString::fromStdString(dm.get_words().at(i).get_name()))) == 0)
			return dm.get_words().at(i).get_word();
	}
	return vector<Data_Set>();
}

vector<Data_Set> MainWindow::set_random(vector<Data_Set> src) {
	//swap randomly
	int count = (int)(src.size());
	vector<Data_Set> swap_words;
	/* give seed */
	srand((unsigned int)time(NULL));
	while (count > 0) {
		int v = rand() % (count--);
		swap_words.push_back(src.at(v));
		src.erase(src.begin() + v);
	}
	return swap_words;
}