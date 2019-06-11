#include "WordBookSelect.h"

WordBookSelect::WordBookSelect(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	bool test = connect(ui.listWidget, SIGNAL(itemSelectionChanged()), parent, SLOT(slotSelected()));
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