#pragma once

#include <QObject>
#include <qthread.h>
#include "speech.h"
class SpeechT : public QThread
{
	Q_OBJECT
		void run() override {
		QString result = QString("123");
		
		while (1) {
			Speech sp;
			QString rec = QString::fromStdString(sp.start_mike());
			emit resultReady(rec);
		}
	}
signals:
	void resultReady(const QString s);
};