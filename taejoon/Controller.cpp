#include "Controller.h"

Controller::Controller()
{

	int i = 1;
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