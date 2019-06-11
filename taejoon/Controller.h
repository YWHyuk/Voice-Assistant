#pragma once
#include "Data_Manager.h"
#include "Game_List.h"
#include "Speech.h"

class Controller
{
private:
	Data_Manager manager("input.txt");
	Speech speech;


	//∞‘¿”∞¥√º
	Pronounce_Game game1(manager.get_words().at(0).get_word());
	Typing_Game game2(manager.get_words().at(0).get_word());
	Resource_Gathering game3(manager.get_words().at(0).get_word());
public:
	Controller();
};