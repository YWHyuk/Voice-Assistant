#pragma once
#include <iostream>
//#include "Mike.h"
//#include "Speaker.h"
using namespace std;
//class Voice : public Mike, public Speaker
class Voice
{
public :
	string recognizeSpeech()
	{
		return "";
	}
	void synthesizeSpeech(string str)
	{

	}
	/*
	string start_mike()
	{
		return Mike::recognizeSpeech();
	}
	void start_speaker(string str)
	{
		Speaker::synthesizeSpeech(str);
	}
	*/
};