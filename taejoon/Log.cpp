#include "Log.h"

void Log::append(bool val) {
	time_t timer;
	struct tm timeinfo;
	char buffer[80];
	string row;
	/* timer init and convert to string*/
	time(&timer);
	localtime_s(&timeinfo, &timer);
	strftime(buffer, 80, "%F %R ", &timeinfo);
	/* adding data to log */
	if (log.size() >= sz) {
		log.pop_back();
	}
	row = string(buffer);
	if (val)
		row += "Wrong";
	else
		row += "Right";
	log.push_back(row);
}
/*
void Log::append(string str)
{
	//adding data to log 
	if (log.size() >= sz) {
		log.pop_back();
	}

	log.push_back(str);

}
*/

string Log::getLog() {
	string temp = "";
	list<string>::iterator iter;
	for (iter = log.begin(); iter != log.end(); ++iter) {
		temp += (*iter) + "\n";
	}
	return temp;
}

