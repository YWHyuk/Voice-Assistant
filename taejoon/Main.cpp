#pragma once
#include "Socket_server.h"
#include "Thread.cpp"
//#include "Voice.cpp"
#include "Speaker.h"
#include "Mike.h"
#include "check_id.h"
//#include <my_global.h>



int main()
{
	/*
	string id="";
	string pw="";
	int serect = 0;
	Speaker speaker;
	Mike mike;
	while (check_id(id, pw)== false)
	{
		if (serect == 3)
		{
			exit(0);
		}
		speaker.synthesizeSpeech("tell me id");
		id=mike.recognizeSpeech();
		speaker.synthesizeSpeech("tell me password");
		pw = mike.recognizeSpeech();
		//voice.start_speaker("tell me id");
		//id = voice.start_mike();
		//voice.start_speaker("tell me password");
		//pw = voice.start_mike();
		serect++;
	}
	cout << "access system" << endl;
	*/
	Socket_server ser;
	ser.connection();

	/*
	while (1)
	{
		cout << "oo"<<endl;
		Sleep(500);
	}
	*/

	cout << "Please press a key to continue.\n";
	cin.get();
	return 0;
}