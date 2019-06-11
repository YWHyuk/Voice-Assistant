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
		//cout << "�Է¹��� ���ڿ�::" << temp << endl;
	}
	else
	{
		//cout << "������ ã�� �� �����ϴ�!" << endl;
	}
	n = atoi(temp.c_str());
	//�ܾ��� �����Է¹���
	while (n--) {
		string name;
		string tempM;
		stream.ignore();
		getline(stream, name);
		getline(stream, tempM);

		Data_List tempDataList(name); //���ο� Data_List�� ��������.
		int m = atoi(tempM.c_str());
		for (int i = 0; i < m; i++) {
			string key = ""; //word;meaning ���
			getline(stream, key);
							 //stream >> key;
			string tempWord = "", tempMean = ""; //�ӽ� �ܾ�� ��
			int splitidx = (int)(key.find(';')); //�ڸ��� ������ ';'
			tempWord.insert(0, key.substr(0, splitidx));
			tempMean.insert(0, key.substr(splitidx + 1, key.size()));

			Data_Set tempSet(tempWord, tempMean); //�ӽ� ��Ʈ ����
			tempDataList.insertSet(tempSet);
			//cout << "�ܾ� : " << tempWord << " �� : " << tempMean << " �����";
		}
		this->words.push_back(tempDataList);

		//Data_Manager::words.push_back();

	}

}

void Data_Manager::reload_file(string path)
{
	read_file(path);
}
vector<Data_List> Data_Manager::get_words()
{
	return words;
}