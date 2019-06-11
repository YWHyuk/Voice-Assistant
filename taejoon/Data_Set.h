#pragma once
#include <iostream>
#include "Log.h"
using namespace std;

class Data_Set
{
private:
	string word;
	string meaning;
	Log log;

public:
	Data_Set(string word, string meaning);
	Data_Set(const Data_Set& source) :word(source.word), meaning(source.meaning), log(source.log) {};
	Data_Set& operator=(const Data_Set& source) {
		this->word = source.word;
		this->meaning = source.meaning;
		this->log = (Log & )source.log;
		return *this;
	}
	void Data_OX(bool O);
	Data_Set();
	string Data_getWord() {
		return word;
	}
	string Data_getMeaning() {
		return meaning;
	}
};