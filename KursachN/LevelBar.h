#pragma once
#pragma once
#include <SFML/Graphics.hpp>

class LevelBar
{
public:
	LevelBar();
	void draw(sf::RenderWindow& window);
	void update(float dt);
	void resetLevel();
	void addLevel();
	int getLevel();

private:
	int level = 0;
	sf::Font font;
	sf::Vector2f getPivotPosition();
};

