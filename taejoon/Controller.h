#pragma once
#include "Data_Manager.h"
#include "Game_List.h"
#include "Speech.h"
#include <QString>
class Controller
{
private:
	Data_Manager manager;
	Speech speech;

public:
	Controller();
};