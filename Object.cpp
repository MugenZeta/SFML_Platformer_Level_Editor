#include "Object.hpp"

//Delta Time Getter and Setter
void EntityObject::setDeltaTime(sf::Time& _deltaTime){ deltaTime = _deltaTime; }
sf::Time& EntityObject::getDeltaTime() { return deltaTime; }


//Hitboc Getter and Setter
void EntityObject::setHitBox(sf::RectangleShape& _hitBox){ hitBox = _hitBox; }
sf::RectangleShape& EntityObject::getHitBox(){ return hitBox; }

//Hurtbox Getter and Setter
void EntityObject::setHurtBox(sf::RectangleShape& _hurtBox){ hurtBox = _hurtBox; }
sf::RectangleShape& EntityObject::getHurtBox(){ return hurtBox; }

void EntityObject::createHitBox()
{
	hitBox.setSize(sf::Vector2f(100.f, 50.f));
	hitBox.setOutlineColor(sf::Color::Red);
	hitBox.setOutlineThickness(5);
	hitBox.setFillColor(sf::Color::Transparent);
	//TODO:Add variables to set spawn point of object
	hitBox.setPosition(positionX, positionY);
	std::cout << "Created Object hitbox" << std::endl;
}

void EntityObject::createHurtBox()
{
	hurtBox.setSize(sf::Vector2f(40.f, 20.f));
	hurtBox.setOutlineColor(sf::Color::Blue);
	hurtBox.setOutlineThickness(5);
	hurtBox.setFillColor(sf::Color::Transparent);
	//TODO:Add variables to set spawn point of object
	hurtBox.setPosition(positionX + 50.f, positionY + 50.f);
	std::cout << "Created Object hurtbox" << std::endl;
}

void  EntityObject::createGraphic()
{

	if(!texture.loadFromFile("game_files/TestGraphics1.png"))
	{
		std::cout << "Failed to load File Check file path." << std::endl;
	}
	sprite.setTexture(texture);
}




EntityObject::EntityObject(bool interactablePlayerObject)
{
	createHitBox();
	createHurtBox();
	createGraphic();
}

EntityObject::~EntityObject()
{
}



