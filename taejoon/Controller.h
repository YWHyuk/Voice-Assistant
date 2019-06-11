#pragma once
#include "Data_Manager.h"

#include "Speech.h"

class Controller
{
private:
	Data_Manager manager;
	Speech speech;

public:
	Controller();
};