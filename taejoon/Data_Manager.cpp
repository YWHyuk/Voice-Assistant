#include "Data_Manager.h"

Data_Manager::Data_Manager()
{
	read_file("input.txt");
}
Data_Manager::Data_Manager(string path)
{
	read_file(path);
}
void Data_Manager::read_file(string path)
{
	ifstream stream(path.c_str());
	int n;
	string temp;
	if (stream.is_open())
	{
		stream >> temp;
		cout << "�Է¹��� ���ڿ�::" << temp << endl;
	}
	else
	{
		cout << "������ ã�� �� �����ϴ�!" << endl;
	}
	stream.close();
	Sleep(500);
	//getline(stream, temp);
	//n = atoi(temp.c_str());
	//�ܾ��� �����Է¹���

	/*
	while (n--) {
		string name;
		string m;
		getline(stream, name);
		getline(stream, m);
		Data_List temp(name);
		
		for (int i = 0; i < m; i++) {

		}
		


		//Data_Manager::words.push_back();
	
	}*/
}
void Data_Manager::reload_file(string path)
{

}