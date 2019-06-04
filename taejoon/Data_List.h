#pragma once
#include <vector>
#include "Data_Set.h"
class Data_List
{
private:
	string name;
	string path;
public:
	Data_List(string name);
	string get_path();
	void set_path(string path);
};