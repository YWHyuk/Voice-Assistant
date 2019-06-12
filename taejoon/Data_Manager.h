#pragma once
#include <vector>
#include "Data_List.h"
#include "Speech.h"
#include <fstream>
#include <string>

class Data_Manager
{
private:
	vector<Data_List> words;

public:
	Data_Manager();
	Data_Manager(string path);
	void read_file(string path);
	void reload_file(string path);
	vector<Data_List>& get_words();
};