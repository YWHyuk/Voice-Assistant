#pragma once
#include "Game.h"
#include "Data_List.h"

class Pronounce_Game : public Game
{
public:
	Pronounce_Game() : Game() {
	}
	//Pronounce_Game(vector<Data_Set> words) : Game(vector<Data_Set> words) {
	Pronounce_Game(vector<Data_Set> words) : Game(words)
	{

	}
	void Gaming(vector<Data_Set> words);
};