#include "enemy1.hpp"
void enemy1::Ini()
{
}

void enemy1::moveLeft()
{
	currentEnemyState = MOVE;
	getHitBox().move(-7.f, 0.f);
	getHurtBox().move(-7.f, 0.f);
}

void enemy1::moveRight()
{
	currentEnemyState = MOVE;
	getHitBox().move(7.f, 0.f);
	getHurtBox().move(7.f, 0.f);
}

void enemy1::jump()
{
}

void enemy1::damage()
{
}


void enemy1::dead()
{
}

void enemy1::update()
{
	positionX = getHurtBox().getPosition().x;
	positionY = getHurtBox().getPosition().y;
	moveRight();
}

enemy1::enemy1()
{
	
}

enemy1::~enemy1()
{
	
}

