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
		cout << "파일을 찾을 수 없습니다!" << endl;
	n = atoi(temp.c_str());

	//단어장 개수입력받음
	while (n--) {
		string name;
		string tempM;
		int m;

		getline(stream, name);
		getline(stream, tempM);

		Data_List tempDataList(name);	//새로운 Data_List를 생성해줌.
		m = atoi(tempM.c_str());		//loop counter

		for (int i = 0; i < m; i++) {
			string key;			//word;meaning 기록
			string tempWord;	//임시 단어
			string tempMean;	//임시 단어
			int splitidx;		//자를 인덱스
			
			//receive ket
			getline(stream, key);

			//get splitidx(자르는 기준은 ';')
			splitidx = (int)(key.find(';')); 
			
			tempWord.insert(0, key.substr(0, splitidx));
			tempMean.insert(0, key.substr(splitidx + 1, key.size()));

			//세트 삽입
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