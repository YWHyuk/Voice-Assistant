#pragma once
#include <vector>
#include "Data_List.h"


class Game
{
private:
	vector<Data_List> words;
	string answer;

public:
	Game(vector<Data_List> words);
	void Gaming();
	void set_log(vector<Data_Set> &words);

};