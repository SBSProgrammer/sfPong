#pragma once

#include<SFML/Graphics.hpp>

class Ball {
public:
	Ball(int size, sf::Vector2f position);

public:
	void update(float deltaTime);

	sf::RectangleShape& getDrawable() const;

private:
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::RectangleShape rect;
	int size;
};
