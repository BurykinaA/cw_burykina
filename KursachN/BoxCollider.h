#pragma once
#include <SFML/Graphics.hpp>
class BoxCollider
{
public:
	BoxCollider(const sf::FloatRect& rect);

	bool intersects(const BoxCollider& other);
	void setPosition(float x, float y);
	void draw(sf::RenderWindow& window);

	float getWidth() {
		return rect.width;
	}
	float getHeight() {
		return rect.height;
	}
	sf::Vector2f getPosition();
private:
	sf::FloatRect rect;
};

