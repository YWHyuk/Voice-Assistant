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
		getline(stream, temp);
	else
		cout << "������ ã�� �� �����ϴ�!" << endl;
	n = atoi(temp.c_str());

	//�ܾ��� �����Է¹���
	while (n--) {
		string name;
		string tempM;
		int m;

		getline(stream, name);
		getline(stream, tempM);

		Data_List tempDataList(name);	//���ο� Data_List�� ��������.
		m = atoi(tempM.c_str());		//loop counter

		for (int i = 0; i < m; i++) {
			string key;			//word;meaning ���
			string tempWord;	//�ӽ� �ܾ�
			string tempMean;	//�ӽ� �ܾ�
			int splitidx;		//�ڸ� �ε���
			
			//receive ket
			getline(stream, key);

			//get splitidx(�ڸ��� ������ ';')
			splitidx = (int)(key.find(';')); 
			
			tempWord.insert(0, key.substr(0, splitidx));
			tempMean.insert(0, key.substr(splitidx + 1, key.size()));

			//��Ʈ ����
			tempDataList.insertSet(Data_Set(tempWord,tempMean));
		}
		this->words.push_back(tempDataList);
	}

}

void Data_Manager::reload_file(string path)
{
	this->words.clear();
	read_file(path);
}
vector<Data_List> Data_Manager::get_words()
{
	return words;
}