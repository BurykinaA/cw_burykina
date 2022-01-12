#pragma once

#include <SFML/Graphics.hpp>

class Killbar
{
public:
	Killbar();
	void draw(sf::RenderWindow& window);
	void update(float dt);
	void resetKills();
	void addKill();
	int getKills();

private:
	int kills = 0;
	sf::Font font;

	sf::Vector2f getPivotPosition();
};

