#pragma once
#ifndef OBJECT_PARENT
#define OBJECT_PARENT

#include <iostream>
#include <fstream>
#include <string>

#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Audio.hpp"
#include "SFML/Main.hpp"

class Object
{
	public:
		Object();
		~Object();
		float posX, posY;
		std::string name;
		void createButton( );


	private:

	



};

#endif // !OBJECT_PARENT