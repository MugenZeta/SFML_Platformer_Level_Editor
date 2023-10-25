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
	//ToDo:Make buttons an array to mass load them at the same time
private:
	float PostionX, PositionY;
	int* ButtonID;
	bool isClicked = false;
	bool isClickable = false;
	sf::RectangleShape squareButton;
	sf::CircleShape cirlceButton;
	sf::Text text;
	sf::RenderWindow* GameWindow;

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

public:
	//Rectangle Button  Getter and Setter
	void setRectangleButton(sf::RectangleShape _squareButton);
	sf::RectangleShape& getRectangleButton();

	//Circle button Getter and Setter
	void setCircleButton(sf::CircleShape _circleButton);
	sf::CircleShape& getCiricleButton();

	//Text Getter and Setter
	void setText(sf::Text _text);
	sf::Text& getText();



	void Ini();
	void createButton();
	void update();
	MenuObjectButton(float PositionX, float PositionY, ButtonType, ButtonShape, bool isClickable);
	~MenuObjectButton();

protected:
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};

#endif
