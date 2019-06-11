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
	void Data_OX(bool O);
	Data_Set();
	string Data_getWord() {
		return word;
	}
	string Data_getMeaning() {
		return meaning;
	}
};