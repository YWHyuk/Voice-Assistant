#include "Data_Set.h"

Data_Set::Data_Set(string word, string meanning)
{
	Data_Set::word = word;
	Data_Set::meaning = meanning;

}

void Data_Set::Data_OX(bool O)
{
	Data_Set::log.append(O);
}
Data_Set::Data_Set()
{
	Data_Set::word = "임시 단어";
	Data_Set::meaning = "임시 뜻";
}