#pragma once

//Physics module ment to be applied to levels
class Physics
{
private:
	float gravity;
	float speed;


public:
	Physics();
	~Physics();

	//Gravity (higher = floaty, lower = heavyer)
	float& getGravity();
	void setGravity(float _gravity);

	//Speed(how fast object is falling)
	float& getSpeed();
	void setSpeed(float _speed);
};