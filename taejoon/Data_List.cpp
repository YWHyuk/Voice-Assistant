#include "Data_List.h"

Data_List::Data_List(string name)
{
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
string Data_List::get_name()
{
	return Data_List::name;
}

void Data_List::set_name(string name)
{
	Data_List::name = name;
}
vector<Data_Set>& Data_List::get_word()
{
	return word;
}
void Data_List::insertSet(Data_Set& DS) {
	this->word.push_back(DS);
}