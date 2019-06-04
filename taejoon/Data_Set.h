#pragma once
#include <iostream>
#include "Log.h"
using namespace std;

class Data_Set
{
private:
	string word;
	string meanning;
	Log log;

public:
	void Data_set(string word, string meanning, bool O);
};