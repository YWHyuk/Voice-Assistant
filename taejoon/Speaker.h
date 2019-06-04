#pragma once
#include <iostream>
#include <speechapi_cxx.h>
#include <string.h>
using namespace std;
using namespace Microsoft::CognitiveServices::Speech;

class Speaker
{
public:

	void synthesizeSpeech(std::string str);
	
};