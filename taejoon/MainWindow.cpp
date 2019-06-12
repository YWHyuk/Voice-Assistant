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
	vector<Data_Set>& dummy = get_words();
	if (&dummy == nullptr) {
		/* 예외 처리 */
		QMessageBox msgBox;
		msgBox.setWindowTitle("Error");
		msgBox.setText("Wordbook is not selected...!");
		msgBox.setStyleSheet(QString::fromUtf8("QWidget {\n"
			"    background: #4E7AC7;	\n"
			"    color : white;\n"
			"	 min-width: 300px;\n"
			"}"));
		QFont font1;
		font1.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
		font1.setPointSize(12);
		msgBox.setFont(font1);
		msgBox.setStandardButtons(QMessageBox::Ok);
		msgBox.setDefaultButton(QMessageBox::Ok);
		msgBox.exec();
		return;
	}
	switch (index) {
	case 0:
		typingGame = new TypingGame(currWidget,set_random(dummy));
		typingGame->setGeometry(50, 50, 921, 331);
		typingGame->show();
		break;
	case 1:

		pronounceGame = new pronouncegame(currWidget, set_random(dummy));
		pronounceGame->setGeometry(290, 50, 442, 331);
		pronounceGame->show();
		break;
	case 2:
		resourceGame = new resourcegathering(currWidget,set_random(dummy));
		resourceGame->setGeometry(290, 50, 442, 331);
		resourceGame->show();
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
vector<Data_Set>& MainWindow::get_words() {
	QString val = ui.WordBookName->text();
	int sz = (int)(dm.get_words().size());
	for (int i = 0; i < sz; i++) {
		if ((QString::compare(val, QString::fromStdString(dm.get_words().at(i).get_name()))) == 0)
			return dm.get_words().at(i).get_word();
	}
	vector<Data_Set>& tt = *((vector<Data_Set>*)nullptr);
	return tt;
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