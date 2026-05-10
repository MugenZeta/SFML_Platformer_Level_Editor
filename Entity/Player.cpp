#include "Player.hpp"
void Player::Ini()
{
	//ToDo:Make Player spawn position dynamic for level placements
	movementSpeed = 2.f;
	Physics::setGravity(9.81f);
}

void Player::moveLeft()
{
	isMoving = true;
	currentPlayerState = MOVE;
	getHitBox().move({-1.f, 0.f});
	getHurtBox().move({-1.f, 0.f});
	std::cout << "Player is moving LEFT" << std::endl;
	std::cout << "Player X: " << Player::getHurtBox().getPosition().x << std::endl;
	std::cout << "Player Y: " << Player::getHurtBox().getPosition().y << std::endl;
}

void Player::moveRight()
{
	isMoving = true;
	currentPlayerState = MOVE;
	getHitBox().move({1.f, 0.f});
	getHurtBox().move({1.f, 0.f});
	std::cout << "Player is moving RIGHT" << std::endl;
	std::cout << "Player X: " << getHurtBox().getPosition().x << std::endl;
	std::cout << "Player Y: " << getHurtBox().getPosition().y << std::endl;
}

void Player::jump()
{
	if (isOnGround)
	{
		currentPlayerState = JUMP;
		getHitBox().move({0.f, -1.f});
		getHurtBox().move({0.f, -1.f});
		std::cout << "Player is JUMPING" << std::endl;
		std::cout << "Player X: " << getHurtBox().getPosition().x << std::endl;
		std::cout << "Player Y: " << getHurtBox().getPosition().y << std::endl;
	}
}

void Player::damage()
{
}

void Player::dead()
{

}

void Player::update()
{
	getHitBox().move({0.f, getGravity()});
	getHurtBox().move({0.f, getGravity()});
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Left) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
	{
		moveLeft();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Right) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
	{
		moveRight();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Space) || sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
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




