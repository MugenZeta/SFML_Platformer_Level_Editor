#include "Physics.hpp"

float& Physics::getGravity()
{
	return gravity;
}

void Physics::setGravity(float _gravity)
{
	gravity = _gravity;
}

float& Physics::getSpeed()
{
	return speed;
}

void Physics::setSpeed(float _speed)
{
	speed = _speed;
}
