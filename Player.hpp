#pragma once
#ifndef ENTITY_OBJECT_CHILD_PLAYER
#define ENTITY_OBJECT_CHILD_PLAYER

#include "Object.hpp"
#include "SFML/Window/Keyboard.hpp"

class Player : public EntityObject
{
private:
	float positionX, positionY;
	int lives;
	float movementSpeed;
	enum Player_State
	{
		IDLE,
		MOVE,
		JUMP,
		DAMAGE,
		DEAD
	};
	int currentPlayerState = IDLE;
	bool isMoving = false;

public:
	void Ini();
	void moveLeft();
	void moveRight();
	void jump();
	void damage();
	void dead();
	void update();
	Player();
	virtual ~Player();

};

#endif