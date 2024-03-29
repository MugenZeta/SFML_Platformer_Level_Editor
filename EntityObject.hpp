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
	float positionX = 50.f;
	float positionY = 50.f;
	sf::RectangleShape hitBox;
	sf::RectangleShape hurtBox;
	sf::Texture texture;
	sf::Sprite sprite;
    //Load Mutiple Sound Files?
	//vector<sf::SoundBuffer> Obj_SFX_SoundBuffer;
	//vector<sf::Sound> Obj_SFX_Sounds;
	bool interactablePlayerObject;
	//int setSoundSystemsLimiter(int soundSystemsLimiter);
	//int soundSystemsLimiter;
	string filePath;


public:

	//Hit Box Setter and Getter
	void setHitBox(sf::RectangleShape _hitBox);
	sf::RectangleShape& getHitBox();

	//Hurt Box Setter and Getter
	void setHurtBox(sf::RectangleShape _hurtBox);
	sf::RectangleShape& getHurtBox();

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