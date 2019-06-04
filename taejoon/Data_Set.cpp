#include "Data_Set.h"

void Data_Set::Data_set(string word, string meanning, bool O)
{
	Data_Set::word = word;
	Data_Set::meanning = meanning;
	Data_Set::log.append(O);

}