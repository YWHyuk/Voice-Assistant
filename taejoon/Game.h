#pragma once
#include <vector>
#include "Data_List.h"


class Game
{
private:
	string answer;
	vector<Data_Set> temp_words;
	int size = 0;

public:
	Game();
	Game(vector<Data_Set> words);
	void Gaming(vector<Data_Set> words);
	void set_log(vector<Data_Set> &words);
	void set_random();
	vector<Data_Set> getter();
};