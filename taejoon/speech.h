#pragma once
#include <string>
using namespace std;

string speech(string str)
{

	if (str == "weather.")
	{
		return "today is hot";
	}

	return "nothing.";
}