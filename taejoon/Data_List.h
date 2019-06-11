#pragma once
#include <vector>
#include "Data_Set.h"
class Data_List
{
private:
	vector<Data_Set> word;
	string name;
	string path;
public:
	Data_List(string name);
	string get_path();
	void set_path(string path);
	string get_name();
	void set_name(string name);
	vector<Data_Set> get_word();
	void insertSet(Data_Set& DS);
};