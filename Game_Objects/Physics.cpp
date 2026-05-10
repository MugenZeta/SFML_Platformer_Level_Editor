#include "Physics.hpp"

float& Physics::getGravity()
{
	return gravity;
}

void Physics::setGravity(float _gravity)
{
	gravity = _gravity;
}

float& Physics::getJumpSpeed()
{
	return jumpSpeed;
}

void Physics::setJumpSpeed(float _jumpSpeed)
{
	jumpSpeed = _jumpSpeed;
}

sf::Vector2f& Physics::getVelocity()
{
	return velocity;
}

void Physics::setVelocity(sf::Vector2f _velocity)
{
	velocity = _velocity;
}

float& Physics::getAccel()
{
	return accel;
}

void Physics::setAccel(float _accel)
{
	accel = _accel;
}

float& Physics::getDeccel()
{
	return deccel;
}

void Physics::setDeccel(float _deccel)
{
	deccel = _deccel;
}

float& Physics::getMaxSpeed()
{
	return maxSpeed;
}

void Physics::setMaxSpeed(float _maxSpeed)
{
	maxSpeed = _maxSpeed;
}

Physics::Physics()
{
	gravity = 1.0f;
	jumpSpeed = 0.0f;
	velX = 0.0f;
	velY = 0.0f;
	velocity = sf::Vector2f(velX, velY);
	accel = 0.0f;
	deccel = 0.0f;
	maxSpeed = 0.0f;
}

Physics::~Physics()
{

}