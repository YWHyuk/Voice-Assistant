#pragma once
#include <mysql.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

class Database{
private:
	MYSQL *conn;
	const char IP[10] = "127.0.0.1";
	const char ID[5] = "root";
	const char PW[9] = "tm620320";
	const char TB[3] = "id";
	int PORT = 3306;
	string t1 = "SELECT password FROM id WHERE name='";
	string t2 = "'";
	string e1 = "SELECT EXISTS (SELECT * FROM id WHERE NAME='";
	string e2 = "') as success";
	
	void connect_db();
	
	
	
public:
	Database();
	void print_test();
	void close_db();
	string select_db(string id);
	string exist_id(string id);
};