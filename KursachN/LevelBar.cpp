#include "LevelBar.h"
#include <string>

using namespace std;

LevelBar::LevelBar()
{
    font.loadFromFile("C:/Windows/Fonts/Arial.ttf");
}

void LevelBar::draw(sf::RenderWindow& window)
{
    sf::Text text;
    text.setFont(font);
    text.setPosition(605 - 40 * 3, 120);
    text.setFillColor(sf::Color::White);
    text.setCharacterSize(30);
    text.setString(("Level: " + to_string(level)).c_str());
    window.draw(text);
}

void LevelBar::update(float dt)
{
}

void LevelBar::resetLevel()
{
    level = 0;
}

void LevelBar::addLevel()
{
    level++;
}

int LevelBar::getLevel()
{
    return level;
}

sf::Vector2f LevelBar::getPivotPosition()
{
    return sf::Vector2f();
}
