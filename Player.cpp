#include "Player.hpp"
void Player::Ini()
{
	//ToDo:Make Player spawn position dynamic for level placements
	movementSpeed = 2.f;
}

void Player::moveLeft()
{
	isMoving = true;
	currentPlayerState = MOVE;
	getHitBox().move(-1.f, 0.f);
	getHurtBox().move( -1.f, 0.f);
	std::cout << "Player is moving LEFT" << std::endl;
	std::cout << "Player X: " << Player::getHurtBox().getPosition().x << std::endl;
	std::cout << "Player Y: " << Player::getHurtBox().getPosition().y << std::endl;
}

void Player::moveRight()
{
	isMoving = true;
	currentPlayerState = MOVE;
	getHitBox().move(1.f, 0.f);
	getHurtBox().move( 1.f, 0.f);
	std::cout << "Player is moving RIGHT" << std::endl;
	std::cout << "Player X: " << getHurtBox().getPosition().x << std::endl;
	std::cout << "Player Y: " << getHurtBox().getPosition().y << std::endl;
}

void Player::jump()
{
	isMoving = true;
	currentPlayerState = JUMP;
	getHitBox().move(0.f, -1.f);
	getHurtBox().move(0.f, -1.f);
	std::cout << "Player is JUMPING" << std::endl;
	std::cout << "Player X: " << getHurtBox().getPosition().x << std::endl;
	std::cout << "Player Y: " << getHurtBox().getPosition().y << std::endl;
}

void Player::damage()
{
}

void Player::dead()
{
	
}

void Player::update()
{
	positionX = getHurtBox().getPosition().x;
	positionY = getHurtBox().getPosition().y;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		moveLeft();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::D))
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
}

Player::~Player()
{

}





