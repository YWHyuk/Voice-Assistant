#include "Controller.h"
#include "Game_List.h"
#include "Speech.h"

Controller::Controller()
{
	Data_Manager manager("input.txt");
	Speech speech;

	int i=1;

	//���Ӱ�ü
	//Game game(manager.get_words().at().get_word());
	Pronounce_Game game1(manager.get_words().at(0).get_word());
	Typing_Game game2(manager.get_words().at(0).get_word());
	//Resource_Gathering game3(manager.get_words().at(0).get_word());
	string str1;
	string str2;
	
	//���� �޴�
	switch (i)
	{
	case 1: //�����νİ���
		while (1)
		{
			str1 =game1.getter().at(0).Data_getWord();
			cout << str1 << endl;
			str2 = speech.start_mike();
			if (str1 == str2)
			{
				speech.start_speaker("correct");
			}
			else
			{
				speech.start_speaker("incorrect");
			}
		}
		break;
	case 2: //Ÿ���ΰ���
		break;
	case 3: //�ڿ�ĳ�� ����
		break;
	}
	
	system("pause");
}