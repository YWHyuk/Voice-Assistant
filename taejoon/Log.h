#pragma once
#include <list>
#include <string>
#include <ctime>
using namespace std;

class Log
{
public:
	list<string> log;
	const int sz;
public:
	Log() :log(list<string>()), sz(10) {};
	Log& operator=(Log& source) {
		this->log = source.log;
		return *this;
	}
	Log(const Log& source) :log(source.log),sz(source.sz) {};
	~Log() {};
	/* Append the log
	* Descirption:	You pass the Boolean. This mean you are Right or Wrong in test;
	*/
	void append(bool val);
	/* Read the log
	* ex)	2019-06-04 12:41 Wrong
	*		2019-06-04 12:42 Right
	*/
	string getLog();
};

