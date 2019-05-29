#include "Database.h"

Database::Database()
{
	Database::connect_db();
	Database::print_test();
}
void Database::print_test()
{
	cout << "DB version : "<< mysql_get_client_info() << endl;
}
void Database::connect_db()
{
	
	//mysql_init(&mysql);
	conn = mysql_init(NULL);
	//if (!mysql_real_connect(&mysql, "127.0.0.1", "root", "tm620320", "id", 3306, NULL, 0))
	if (!mysql_real_connect(conn, "127.0.0.1", "root", "tm620320", "id", 3306, NULL, 0))
	{
		cout << "error" << endl;
	}
	else
	{
		cout << "DB Connection success" << endl;
	}
}
void Database::close_db()
{
	mysql_close(conn);
}

string Database::select_db(string id)
{
	MYSQL *connection;
	MYSQL_RES *res;
	MYSQL_ROW row;
	string temp;
	string result;
	int state=0;
	
	string t1 = "SELECT password FROM id WHERE name='";
	string t2 = "'";
	string t3;

	t3 = t1 + id + t2;

	state=mysql_query(conn, t3.c_str());
	if (state == 0)
	{
		res = mysql_store_result(conn);
		while ((row = mysql_fetch_row(res)) != NULL)
		{
			//cout << row[0] << endl;
			result = row[0];
		}
		mysql_free_result(res);
	}


	return result;
}
