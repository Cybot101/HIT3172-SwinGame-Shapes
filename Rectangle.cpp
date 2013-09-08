#include "Rectangle.h"

void Rectangle::draw()
{
	fill_rectangle(
		_colour, 
		_position.x, _position.y, 
		_width, _height
		);
}

void Rectangle::make_square()
{
	// Find longest edge
	if (_width > _height)
		_height = _width;
	else
		_width = _height;
}

/*
 * Abstract implementation to hightlight the shape.
 * Draws a larger rectangle around shape.
 */
void Rectangle::highlight()
{
	draw_rectangle(
		color_yellow,
		false,
		_position.x - 5, _position.y - 5,
		_width + 10, _height + 10
		);
}