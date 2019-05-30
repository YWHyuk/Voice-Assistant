#pragma once
#include "../header/Socket_server.h"
#include "Thread.cpp"
//#include "Voice.cpp"
#include "../header/Speaker.h"
#include "../header/Mike.h"
#include "../header/check_id.h"
//#include <my_global.h>
int main()
{
	
	string id="";
	string pw="";
	int serect = 0;
	Speaker speaker;
	Mike mike;
	speaker.synthesizeSpeech("tell me id");
	/*
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
		serect++;
	}
	cout << "access system" << endl;
	*/
	Socket_server ser;
	ser.Set_Port("1234");
	ser.Set_Listen();
	ser.acp();
	ser.test();
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