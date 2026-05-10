//SFML Platformer Test Game
#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Main.hpp>
#include "Entity/Player.hpp"
#include "Entity/enemy1.hpp"



int main()
{
	// Sets Up Game Window with resolution
	sf::RenderWindow GameWindow(sf::VideoMode({720u, 480u}), "SFML Application");
	GameWindow.setFramerateLimit(60);

	//////////CODE APP HERE//////////////////////////////

	//Test Circle Shape (Float)
	sf::CircleShape TestCircleShape(100.f);

	//Test Color Fill (Red)
	TestCircleShape.setFillColor(sf::Color::Red);

	//EntityObject playerBaseEntity;
	Player playerPlayerEntity;
	enemy1 enemy1;
	//Main Window Update Function
	while (GameWindow.isOpen())
	{
		//Window Closes
		while (auto ev = GameWindow.pollEvent())
		{
			if (ev->is<sf::Event::Closed>())
			{
				GameWindow.close();
			}
		}

		//////////Updated Items
		playerPlayerEntity.update();
		enemy1.update();

		//Clear entire window
		GameWindow.clear();
		//Draws Objects to Window
		//GameWindow.draw(TestCircleShape);
		//GameWindow.draw(playerBaseEntity);
		GameWindow.draw(playerPlayerEntity);
		GameWindow.draw(enemy1);
		//Display Drawn objects to window
		GameWindow.display();
	}


}
