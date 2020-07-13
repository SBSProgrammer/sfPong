#include "Ball.h"

Ball::Ball(int size, sf::Vector2f position) {
	this->position = position;
	this->size = size;
}

void Ball::update(float deltaTime) {
	
}

sf::RectangleShape& Ball::getDrawable() const {
	return (sf::RectangleShape&)rect;
}
