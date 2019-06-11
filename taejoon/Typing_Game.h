#pragma once
#include "Game.h"

class Typing_Game : public Game
{
public:
	void Gaming(vector<Data_Set> words);
	Typing_Game();
	Typing_Game(vector<Data_Set> words);
};