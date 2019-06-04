#include "Data_List.h"

Data_List::Data_List(string name)
{

	vector<Data_Set> word;
	Data_List::name = name;
}

string Data_List::get_path()
{
	return Data_List::path;
}

void Data_List::set_path(string path)
{
	Data_List::path = path;
}