#pragma once
#include <iostream>
#include "Database.h"
using namespace std;

BOOL check_id(string id, string pw)
{
	Database db;
	
	
	
	if (db.exist_id(id)=="1")
	{
		cout << db.select_db(id) << endl;
		if (db.select_db(id) == pw)
		{
			db.close_db();
			return true;
		}
		else
		{

		}
	}
	else{}
	db.close_db();
	return false;

}

