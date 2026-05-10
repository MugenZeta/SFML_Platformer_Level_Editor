#pragma once
#ifndef PHYSICS

#include <vector>

#include "SFML/System/Vector2.hpp"

//Physics module applied to Entities
class Physics
{
private:
	float maxSpeed;
	float gravity;
	float velX, velY;
	sf::Vector2f velocity = sf::Vector2f(velX, velY);
	float jumpSpeed;
	float accel;
	float deccel;


public:
	Physics();
	~Physics();

	//Gravity (higher = floaty, lower = heavyer)
	float& getGravity();
	void setGravity(float _gravity);

	//Speed (how fast object is falling)
	float& getJumpSpeed();
	void setJumpSpeed(float _jumpSpeed);

	//Velocity X
	float& getVelocityX();
	void setVelocityX(float _velocityX);

	//Velocity Y
	float& getVelocityY();
	void setVelocityY(float _velocityY);

	// Velocity
	sf::Vector2f& getVelocity();
	void setVelocity(sf::Vector2f _velocity);

	//Acceleration
	float& getAccel();
	void setAccel(float _accel);

	//Decceleration
	float& getDeccel();
	void setDeccel(float _deccel);

	//Max Speed
	float& getMaxSpeed();
	void setMaxSpeed(float _maxSpeed);



};

#endif // !PHYSICS
