#pragma once
#ifndef ENEMY_A
#define ENEMY_A

#include "EntityObject.hpp"
#include  "SFML/System.hpp"

class enemy1 :
    public EntityObject
{
private:
	float spawnPointX, spawnPointY;
	float positionX, positionY;
	sf::Clock timmer;
	sf::Time count = timmer.getElapsedTime();
	float movementSpeed;
	enum Enemy_State
	{
		IDLE,
		MOVE,
		JUMP,
		DAMAGE,
		DEAD
	};
	int currentEnemyState = IDLE;

public:
	void Ini();
	void moveLeft();
	void moveRight();
	void jump();
	void damage();
	void dead();
	void update();
	enemy1();
	virtual ~enemy1() override;
};

#endif
