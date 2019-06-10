#include "Game.h"
#include<math.h>
#include<ctime>
#include<cstdlib>
Game::Game()
{

}

Game::Game(vector<Data_Set> words)
{
	//cout << words.size() << endl;
	for (int i = 0; i < words.size(); i++) {
		this->temp_words.push_back(words[i]);
	}
	//Game::temp_words = words;
	size = temp_words.size();
	//cout << size << endl;
	set_random();
}
void Game::set_random() {
	//·£´ýÀÇ ¼ýÀÚ¸¦ size() ¾È¿¡¼­ »Ì´Â´Ù.
	//»ÌÈù ÀûÀÌ ÀÖÀ¸¸é ´Ù½Ã »Ì°í
	//»ÌÈù ÀûÀÌ ¾øÀ¸¸é count-- 
	//vector<int> index
	int count = this->size;
	vector<int> check(count, 0);
	vector<int> index;
	vector<Data_Set> swap_words;
	srand((unsigned int)time(NULL));
	while (count>0) {
		int v = rand() % size;
		if (check[v] == 0) {
			check[v] = 1;
			count--;
			index.push_back(v);
		}

	}
	for (int i = 0; i < size; i++) {
		swap_words.push_back(temp_words[index[i]]);
	}
	temp_words.clear();
	for (int i = 0; i < size; i++) {
		temp_words.push_back(swap_words[i]);
	}
	for (int i = 0; i < size; i++) {
		//cout << "Elment is : " << temp_words[i].Data_getWord() << endl;
	}
}
void Game::Gaming(vector<Data_Set> words)
{

}
void Game::set_log(vector<Data_Set> &words)
{

}

vector<Data_Set> Game::getter()
{
	return Game::temp_words;
}