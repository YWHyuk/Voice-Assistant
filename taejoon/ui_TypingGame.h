/********************************************************************************
** Form generated from reading UI file 'TypingGame.ui'
**
** Created by: Qt User Interface Compiler version 5.12.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TYPINGGAME_H
#define UI_TYPINGGAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TypingGame
{
public:
    QWidget *Wrapper;
    QWidget *StatusWrapper;
    QProgressBar *progressBar;
    QProgressBar *wrongBar;
    QLabel *progress;
    QLabel *wrong;
    QLabel *time;
    QProgressBar *timeBar;
    QLineEdit *inputLine;
    QWidget *wordQueue;
    QLabel *beforeWord;
    QLabel *CurrentWord;
    QLabel *nextWord;
    QLabel *label_1;
    QLabel *label_2;

    void setupUi(QWidget *TypingGame)
    {
        if (TypingGame->objectName().isEmpty())
            TypingGame->setObjectName(QString::fromUtf8("TypingGame"));
        TypingGame->resize(921, 331);
        Wrapper = new QWidget(TypingGame);
        Wrapper->setObjectName(QString::fromUtf8("Wrapper"));
        Wrapper->setGeometry(QRect(0, 0, 921, 331));
        Wrapper->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 5px;\n"
"border-radius: 14px;\n"
"background:#375D81;}"));
        StatusWrapper = new QWidget(Wrapper);
        StatusWrapper->setObjectName(QString::fromUtf8("StatusWrapper"));
        StatusWrapper->setGeometry(QRect(50, 30, 821, 50));
        StatusWrapper->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 2px;\n"
"border-radius: 14px;\n"
"background:#4E7AC7;}QProgressBar {\n"
"	border: 2px solid white;\n"
"	border-radius: 7px;\n"
"	text-align: center;\n"
"} "));
        progressBar = new QProgressBar(StatusWrapper);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(100, 14, 170, 23));
        QFont font;
        font.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        progressBar->setFont(font);
        progressBar->setStyleSheet(QString::fromUtf8("QProgressBar::chunk {\n"
"	background-color: #8C4303;\n"
"	width: 10px;\n"
"	margin: 0.5px;\n"
"}"));
        progressBar->setValue(0);
        wrongBar = new QProgressBar(StatusWrapper);
        wrongBar->setObjectName(QString::fromUtf8("wrongBar"));
        wrongBar->setGeometry(QRect(370, 14, 170, 23));
        wrongBar->setFont(font);
        wrongBar->setStyleSheet(QString::fromUtf8("QProgressBar::chunk {\n"
"	background-color: #F23D3D;\n"
"	width: 10px;\n"
"	margin: 0.5px;\n"
"}"));
        wrongBar->setValue(0);
        progress = new QLabel(StatusWrapper);
        progress->setObjectName(QString::fromUtf8("progress"));
        progress->setGeometry(QRect(30, 14, 50, 23));
        QFont font1;
        font1.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225310"));
        font1.setPointSize(10);
        progress->setFont(font1);
        progress->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background:#4E7AC7;}"));
        wrong = new QLabel(StatusWrapper);
        wrong->setObjectName(QString::fromUtf8("wrong"));
        wrong->setGeometry(QRect(300, 14, 50, 23));
        wrong->setFont(font1);
        wrong->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background:#4E7AC7;}"));
        time = new QLabel(StatusWrapper);
        time->setObjectName(QString::fromUtf8("time"));
        time->setGeometry(QRect(570, 14, 50, 23));
        time->setFont(font1);
        time->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 0px;\n"
"border-radius: 0px;\n"
"background:#4E7AC7;}"));
        timeBar = new QProgressBar(StatusWrapper);
        timeBar->setObjectName(QString::fromUtf8("timeBar"));
        timeBar->setGeometry(QRect(630, 14, 170, 23));
        timeBar->setFont(font);
        timeBar->setStyleSheet(QString::fromUtf8("QProgressBar::chunk {\n"
"	background-color:#055902;\n"
"	width: 10px;\n"
"	margin: 0.5px;\n"
"}"));
        timeBar->setValue(24);
        inputLine = new QLineEdit(Wrapper);
        inputLine->setObjectName(QString::fromUtf8("inputLine"));
        inputLine->setEnabled(true);
        inputLine->setGeometry(QRect(50, 230, 821, 71));
        QFont font2;
        font2.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        font2.setPointSize(17);
        inputLine->setFont(font2);
        inputLine->setAcceptDrops(false);
        inputLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 2px;\n"
"border-radius: 14px;\n"
"background:#4E7AC7;};"));
        inputLine->setAlignment(Qt::AlignCenter);
        inputLine->setClearButtonEnabled(false);
        wordQueue = new QWidget(Wrapper);
        wordQueue->setObjectName(QString::fromUtf8("wordQueue"));
        wordQueue->setGeometry(QRect(50, 100, 821, 111));
        wordQueue->setStyleSheet(QString::fromUtf8("QWidget{\n"
"border-style: solid;\n"
"border-color: #FFFFFF;\n"
"border-width: 2px;\n"
"border-radius: 14px;\n"
"background:#4E7AC7;};"));
        beforeWord = new QLabel(wordQueue);
        beforeWord->setObjectName(QString::fromUtf8("beforeWord"));
        beforeWord->setGeometry(QRect(20, 15, 181, 81));
        QFont font3;
        font3.setFamily(QString::fromUtf8("-\354\234\244\352\263\240\353\224\225320"));
        font3.setPointSize(11);
        beforeWord->setFont(font3);
        beforeWord->setStyleSheet(QString::fromUtf8("QWidget{border-width: 0px;border-radius:10px;color:#D91111;}"));
        beforeWord->setAlignment(Qt::AlignCenter);
        CurrentWord = new QLabel(wordQueue);
        CurrentWord->setObjectName(QString::fromUtf8("CurrentWord"));
        CurrentWord->setGeometry(QRect(310, 15, 181, 81));
        CurrentWord->setFont(font3);
        CurrentWord->setStyleSheet(QString::fromUtf8("QWidget{border-width: 2px;border-radius:10px;background:#30395C;color:white;}"));
        CurrentWord->setAlignment(Qt::AlignCenter);
        nextWord = new QLabel(wordQueue);
        nextWord->setObjectName(QString::fromUtf8("nextWord"));
        nextWord->setGeometry(QRect(600, 15, 181, 81));
        nextWord->setFont(font3);
        nextWord->setStyleSheet(QString::fromUtf8("QWidget{border-width: 0px;border-radius:10px;color:white;}"));
        nextWord->setAlignment(Qt::AlignCenter);
        label_1 = new QLabel(wordQueue);
        label_1->setObjectName(QString::fromUtf8("label_1"));
        label_1->setGeometry(QRect(180, 15, 81, 81));
        label_1->setStyleSheet(QString::fromUtf8("QWidget{border-width : 0 px;}"));
        label_1->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/rewind (1).png")));
        label_2 = new QLabel(wordQueue);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(540, 15, 81, 81));
        label_2->setStyleSheet(QString::fromUtf8("QWidget{border-width : 0 px;}"));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../../Downloads/rewind (1).png")));

        retranslateUi(TypingGame);

        QMetaObject::connectSlotsByName(TypingGame);
    } // setupUi

    void retranslateUi(QWidget *TypingGame)
    {
        TypingGame->setWindowTitle(QApplication::translate("TypingGame", "Form", nullptr));
        progressBar->setFormat(QApplication::translate("TypingGame", "%p%", nullptr));
        wrongBar->setFormat(QApplication::translate("TypingGame", "%p%", nullptr));
        progress->setText(QApplication::translate("TypingGame", "\354\247\204\355\226\211\353\245\240", nullptr));
        wrong->setText(QApplication::translate("TypingGame", "\354\230\244\353\213\265\353\245\240", nullptr));
        time->setText(QApplication::translate("TypingGame", "\354\213\234\352\260\204", nullptr));
        inputLine->setText(QString());
        beforeWord->setText(QApplication::translate("TypingGame", "test\n"
"", nullptr));
        CurrentWord->setText(QString());
        nextWord->setText(QString());
        label_1->setText(QString());
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TypingGame: public Ui_TypingGame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TYPINGGAME_H
