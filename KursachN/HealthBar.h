#pragma once

#include <SFML/Graphics.hpp>
class HealthBar
{
public:
	HealthBar();
	void decreaseHP();
	void draw(sf::RenderWindow& window);
	void update(float dt);
	int getCurHP();
	void resetHP();

private:
	int hp = 3;
	sf::Font font;
	sf::Vector2f getPivotPosition();
};

