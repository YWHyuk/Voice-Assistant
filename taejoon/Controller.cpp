#include "Controller.h"

Controller::Controller()
{

	int i = 1;
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