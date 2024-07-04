#pragma once
#ifndef COLLISION_OBJECT

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

class collision_object 
{
private:
	float  x;
	float y;
	sf::Vector2f position(float x,  float y);
	sf::Vector2i size(int width, int height);
	sf::RectangleShape block;


public:
	void createCollsion(sf::RectangleShape block, sf::Vector2i size(int width, int height));
	collision_object();
	~collision_object();
	
};
#endif
