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
		//cout << "입력받은 문자열::" << temp << endl;
	}
	else
	{
		//cout << "파일을 찾을 수 없습니다!" << endl;
	}
	n = atoi(temp.c_str());
	//단어장 개수입력받음
	while (n--) {
		string name;
		string tempM;
		stream.ignore();
		getline(stream, name);
		getline(stream, tempM);

		Data_List tempDataList(name); //새로운 Data_List를 생성해줌.
		int m = atoi(tempM.c_str());
		for (int i = 0; i < m; i++) {
			string key = ""; //word;meaning 기록
			getline(stream, key);
							 //stream >> key;
			string tempWord = "", tempMean = ""; //임시 단어와 뜻
			int splitidx = (int)(key.find(';')); //자르는 기준은 ';'
			tempWord.insert(0, key.substr(0, splitidx));
			tempMean.insert(0, key.substr(splitidx + 1, key.size()));

			Data_Set tempSet(tempWord, tempMean); //임시 세트 생성
			tempDataList.insertSet(tempSet);
			//cout << "단어 : " << tempWord << " 뜻 : " << tempMean << " 저장됨";
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