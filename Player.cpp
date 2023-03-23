#include "Player.hpp"
void Player::Ini()
{
	//ToDo:Make Player spawn position dynamic for level placements
	this->movementSpeed = 10.f;
}

void Player::moveLeft()
{
	isMoving = true;
	currentPlayerState = MOVE;
	//Player::getHitBox().setPosition(positionX, positionY);
	//Player::getHurtBox().setPosition(positionX, positionY);
	this ->getHitBox().move(this->movementSpeed, 0.f);
	this ->getHurtBox().move(this->movementSpeed, 0.f);
	std::cout << "Player is moving LEFT" << std::endl;
	std::cout << "Player X: " << Player::getHurtBox().getPosition().x << std::endl;
	std::cout << "Player Y: " << Player::getHurtBox().getPosition().y << std::endl;
}

void Player::moveRight()
{
	isMoving = true;
	currentPlayerState = MOVE;
	//Player::getHitBox().setPosition(positionX, positionY);
	//Player::getHurtBox().setPosition(positionX, positionY);
	getHitBox().move(-this->movementSpeed, 0.f);
	getHurtBox().move(-this->movementSpeed, 0.f);
	std::cout << "Player is moving RIGHT" << std::endl;
	std::cout << "Player X: " << getHurtBox().getPosition().x << std::endl;
	std::cout << "Player Y: " << getHurtBox().getPosition().y << std::endl;
}

void Player::jump()
{
	isMoving = true;
	currentPlayerState = JUMP;
}

void Player::damage()
{
}

void Player::dead()
{
	
}

void Player::update()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		moveLeft();
		
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		moveRight();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) || sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		jump();
	}
}

Player::Player()
{
	Ini();
}

Player::~Player()
{

}





