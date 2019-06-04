#include "Speech.h"

void Speech::start_speaker(string str)
{
	Speaker speaker;
	speaker.synthesizeSpeech(str);
}

string Speech::start_mike()
{
	Mike mike;
	return mike.recognizeSpeech();
}
