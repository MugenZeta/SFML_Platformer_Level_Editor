//SFML Platformer Test Game
#include <iostream>
#include <fstream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Main.hpp>


int main()
{
	// Sets Up Game Window with resolution
	sf::RenderWindow GameWindow(sf::VideoMode(720, 480), "SFML Application");
	
	//////////CODE APP HERE//////////////////////////////
	
	//Test Circle Shape (Float)
	sf::CircleShape TestCircleShape(100.f);

	//Test Color Fill (Red)
	TestCircleShape.setFillColor(sf::Color::Red);

	
	edsa




	//Main Window Update Function
	while (GameWindow.isOpen())
	{
		sf::Event ev_Refresh;
		while (GameWindow.pollEvent(ev_Refresh))
		{
			if (ev_Refresh.type == sf::Event::Closed)
			{
				GameWindow.close();

			}
		}

		//////////Updated Items

		//Clear entire window
		GameWindow.clear();

		//Draws Objects to Window
		GameWindow.draw(TestCircleShape);

		//Display Drawn objects to window
		GameWindow.display();
	}


}