//SFML Platformer Test Game
#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Main.hpp>

#include "Object.hpp"
#include "Player.hpp"
#include "MenuObject.hpp"


int main()
{
	// Sets Up Game Window with resolution
	sf::RenderWindow GameWindow(sf::VideoMode(720, 480), "SFML Application");
	sf::Clock clock;
	GameWindow.setFramerateLimit(60);

	sf::Time time;
	//////////CODE APP HERE//////////////////////////////

	//Test Circle Shape (Float)
	sf::CircleShape TestCircleShape(100.f);

	//Test Color Fill (Red)
	TestCircleShape.setFillColor(sf::Color::Red);

	//EntityObject playerBaseEntity;
	Player playerPlayerEntity;

	//Main Window Update Function
	while (GameWindow.isOpen())
	{
		//Window Closes
		sf::Event ev_Refresh;
		clock.restart().asSeconds();
		while (GameWindow.pollEvent(ev_Refresh))
		{
			if (ev_Refresh.type == sf::Event::Closed)
			{
				GameWindow.close();
			}
		}

		

		//////////Updated Items
		playerPlayerEntity.update();

		//Clear entire window
		GameWindow.clear();
		//Draws Objects to Window
		//GameWindow.draw(TestCircleShape);
		//GameWindow.draw(playerBaseEntity);
		GameWindow.draw(playerPlayerEntity);
		//Display Drawn objects to window
		GameWindow.display();
		time = clock.getElapsedTime();
		std::cout << 1.0 / time.asSeconds() << '\n';
	}


}
