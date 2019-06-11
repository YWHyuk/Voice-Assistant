#pragma once
#include <Windows.h>
#include <process.h>
#include <string>
#include <iostream>
#include "Mike.h"
#include "Speaker.h"
//#include "speech.h"
using namespace std;

//string data1;
class Speech
{
private:

public:
	void start_speaker(string str);
	string start_mike();

};