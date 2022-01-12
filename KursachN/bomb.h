#pragma once
#include <SFML/Graphics.hpp>
#include "BoxCollider.h"
#include "Map.h"

class Bomb {
public:
	~Bomb();
	Bomb(Map* map);
	void draw(sf::RenderWindow& window);
	void update(float dt);
	void place_bomb(float x, float y);
	bool isUsed();
	BoxCollider* getCollider();
private:
	bool used = false;
	float x=0;
	float y=0;
	float timer = 0;
	float time_life = 2;

	float size = 10;
	
	bool activated = false;
	sf::RectangleShape* rect;
	sf::Sprite* sprite;
	BoxCollider* collider = nullptr;
	Map* map = nullptr;

	sf::Sprite anim;
	sf::Texture t;
	void explode();
};