#pragma once
#include <iostream>
#include <speechapi_cxx.h>
#include <string.h>
#include "Voice.cpp"
using namespace std;
using namespace Microsoft::CognitiveServices::Speech;

class Speaker : public Voice
{
public:

	void synthesizeSpeech(std::string str);
	
};