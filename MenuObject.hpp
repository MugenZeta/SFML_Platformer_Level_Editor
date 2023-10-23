#pragma once
#ifndef MENU_OBJECT_PARENT
#define MENU_OBJECT_PARENT

#include <iostream>
#include <fstream>
#include <string>

#include "SFML/Graphics.hpp"
#include  "SFML/Audio.hpp"
#include  "SFML/System.hpp"
#include "SFML/Main.hpp"
#include "SFML/Window.hpp"

using std::string;

class MenuObjectButton : public sf::Drawable
{
private:
	float PostionX, PositionY;
	int* ButtonID;
	bool isClicked = false;
	bool isClickable = false;
	string  buttonText;

	enum ButtonType
	{
		MAIN_MENU,
		PAUSE_MENU,
		OPTION_MENU
	};


	enum ButtonShape
	{
		BOX,
		CIRCLE
	};

	sf::RectangleShape squareButton;
	sf::CircleShape cirlceButton;
	sf::Text
	sf::RenderWindow* GameWindow;

public:
	MenuObjectButton(float PositionX, float PositionY, ButtonType, ButtonShape, bool isClickable);
	~MenuObjectButton();
	void createButton()

protected:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif
