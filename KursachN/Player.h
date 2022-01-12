#pragma once
#include <SFML/Graphics.hpp>
#include "BoxCollider.h"
#include "Map.h"
#include "bomb.h"
#include "Killbar.h"
#include "HealthBar.h"
#include <vector>
#include <stdlib.h>

class Player
{
public:
	~Player();
	Player(Map* map);
	void draw(sf::RenderWindow& window);
	void update(float dt);
	BoxCollider* getCollider();
	void die();
	void addKill();
private:
	HealthBar hb;
	Killbar kb;
	int kills_on_level = 0;
	int animRow = 1;
	void return_back();

	float reload_time = 1.0f;
	float timer = reload_time;
	void place_bomb();
	std::vector<Bomb*> bombs;
	float x = 36;
	float y = 36;

	float dy = 0;
	float dx = 0;

	float size = 10;

	void move_left();
	void move_up();
	void move_down();
	void move_right();
	float currentFrame = 0;

	int sprite_width = 32;
	int sprite_height = 32;
	int collider_width = 16;
	int collider_height = 16;

	sf::Sprite anim;
	sf::Texture t;

	float speed = 160.0f;
	BoxCollider* collider = nullptr;
	Map* map = nullptr;
};

