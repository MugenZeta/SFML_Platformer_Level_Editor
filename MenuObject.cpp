#include "MenuObject.hpp"
void MenuObjectButton::setRectangleButton(sf::RectangleShape _squareButton)
{
	squareButton = _squareButton;
}

sf::RectangleShape& MenuObjectButton::getRectangleButton()
{
	return squareButton;
}

MenuObjectButton::MenuObjectButton(float PositionX, float PositionY, ButtonType, ButtonShape, bool isClickable)
{

}


void MenuObjectButton::Ini()
{
}
