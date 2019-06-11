#include "WordBookSelect.h"

WordBookSelect::WordBookSelect(QWidget *parent, Data_Manager& test)
	: QDialog(parent)
{
	ui.setupUi(this);
	this->setStyle(QStyleFactory::create("Fusion"));
	for (int i = 0; i < test.get_words().size(); i++) {
		new QListWidgetItem(QString::fromStdString(test.get_words().at(i).get_name()),ui.listWidget);
	}
	connect(ui.buttonBox, SIGNAL(clicked(QAbstractButton *)), parent, SLOT(slotSelected(QAbstractButton *)));
}

WordBookSelect::~WordBookSelect()
{
}
QString WordBookSelect::getSelectedString() {
	QString ret;
	if (ui.listWidget->selectedItems().size() != 0) {
		ret = ui.listWidget->selectedItems().at(0)->text();
	}
	return ret;
}