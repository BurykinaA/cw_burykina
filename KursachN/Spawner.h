#pragma once
#include "Monster.h"
#include <vector>

class Spawner {
public:
	Spawner(std::vector<Monster*>* monsters, Player* player);

	void spawn(class Map* map);
	void restart();
private:
	
	Monster* monster;
	Player* player = nullptr;
	std::vector<Monster*>* monsters;
};