#pragma once
#include <Windows.h>
#include <process.h>
#include <string>
#include <iostream>
#include "../header/Mike.h"
#include "../header/Speaker.h"
//#include "speech.h"
using namespace std;

//string data1;
class Thread
{
private:
	void print(string str)
	{
		cout << str << endl;
	}
	static unsigned int __stdcall Mike_thread(void *arg)
	{
		Thread * thread = (Thread*)arg;
		Mike mike;
		while (1)
		{
			
			//data1 = 
			mike.recognizeSpeech();
			//thread->print(data);
			Sleep(500);
		}
			return 0;
	}
	static unsigned int __stdcall Speaker_thread(void *arg)
	{
		Thread * thread = (Thread*)arg;
		Speaker speaker;
		while (1)
		{
			string test = "hi";
			speaker.synthesizeSpeech(test);
			Sleep(500);
		}
	}
public:
	Thread()
	{
		cout << " audio try" << endl;
	}
	void start_speaker(string str)
	{
		//data1 = str;
		if (_beginthreadex(NULL, 0, Speaker_thread, this, 0, NULL))
		{
			cout << "Speaker Thread Activate" << endl;
		}
	}
	void start_mike()
	{
		if (_beginthreadex(NULL, 0, Mike_thread, this, 0, NULL))
		{
			cout << "Mike Thread Activate" << endl;
		}
	}
	//get, set
	//string get()
	//{
	//	return data1;
	//}
	//void set(int a)
	//{
	//	this->a = a;
	//}
};