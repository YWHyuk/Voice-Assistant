#pragma once
#include <mysql.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Database{
private:
	MYSQL *conn;
public:
	Database();
	void print_test();
	void connect_db();
	void close_db();
	string select_db(string id);
	

};