#include "Game.h"
#include <ctime>
#include <cstdlib>
Game::Game()
{

}
Game::Game(vector<Data_Set> words)
	:temp_words(words),size(int(words.size()))
{
	set_random();
}
void Game::set_random() {
	//swap randomly
	int count = this->size;
	vector<Data_Set> swap_words;
	/* give seed */
	srand((unsigned int)time(NULL));
	while (count>0) {
		int v = rand() % (count--);
		swap_words.push_back(temp_words.at(v));
		temp_words.erase(temp_words.begin() + v );
	}
	temp_words = swap_words;
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