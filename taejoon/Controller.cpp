#include "Controller.h"
#include "Game_List.h"
#include "Speech.h"

Controller::Controller()
{
	Data_Manager manager("input.txt");
	Speech speech;

	int i=1;

	//게임객체
	//Game game(manager.get_words().at().get_word());
	Pronounce_Game game1(manager.get_words().at(0).get_word());
	Typing_Game game2(manager.get_words().at(0).get_word());
	//Resource_Gathering game3(manager.get_words().at(0).get_word());
	string str1;
	string str2;
	
	//게임 메뉴
	switch (i)
	{
	case 1: //음성인식게임
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
	case 2: //타이핑게임
		break;
	case 3: //자원캐기 게임
		break;
	}
	
	system("pause");
}