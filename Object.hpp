#pragma once
#ifndef ENTITY_OBJECT_PARENT
#define ENTITY_OBJECT_PARENT

#include <iostream>
#include <string>
#include <vector>

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Main.hpp"

using std::vector;
using std::string;

//This is the base entity class for creating game objects.
class EntityObject : public sf::Drawable
{
private:
	float positionX, positionY;
	sf::RectangleShape hitBox;
	sf::RectangleShape hurtBox;
	sf::Texture texture;
	sf::Sprite sprite;
	//vector<sf::SoundBuffer> Obj_SFX_SoundBuffer;
	//vector<sf::Sound> Obj_SFX_Sounds;
	bool interactablePlayerObject = false;
	//int setSoundSystemsLimiter(int soundSystemsLimiter);
	//int soundSystemsLimiter;
	string filePath;


public:
	//Hit Box Setter
	void setHitBox(sf::RectangleShape _hitBox);
	//Hit Box Getter
	sf::RectangleShape getHitBox();

	//Hurt Box Setter
	void setHurtBox(sf::RectangleShape _hurtBox);
	//Hurt Box Getter;
	sf::RectangleShape getHurtBox();

	void createHitBox() ;
	void createHurtBox();
	void createGraphic();
	EntityObject(bool interactablePlayerObject = false);
	


	virtual ~EntityObject();



protected:
	
			virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const
			{
				target.draw(hitBox, states);
				target.draw(hurtBox, states);
				target.draw(sprite, states);
			};
};

#endif // !ENTITY_OBJECT_PARENT