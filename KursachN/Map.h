#pragma once
#include <ctime>
#include <stdlib.h>
#include <SFML/Graphics.hpp>
#include "BoxCollider.h"
#include "LevelBar.h"

#define rows 15
#define columns 15
class Map
{
public:
	enum class BLOCK_TYPE
	{
		GROUND, WALL, BOX, FIRE
	};

	int getLevel();
	void generate();
	void fireCell(float x, float y, float time);
	void draw(sf::RenderWindow& window);
	void update(float dt);
	BLOCK_TYPE getBlock(int i, int j);
	BoxCollider* getBlockCollider(int i, int j);
	int getRowsCount();
	int getColumnsCount();
	int getCellSize();

	void restart();
	void fireOff();

	sf::Vector2f getOriginPosition();
	Map();
	//void load(std::ifstream& stream);
	void setSpawner(class Spawner* spawner);
private:
	Spawner* spawner = nullptr;
	LevelBar lb;
	float timer = 0.0f;
	BLOCK_TYPE blocks[rows][columns];
	BoxCollider* block_colliders[rows][columns];
	float fire_life_time = 0;
	int cell_size = 32;

	
};

