#include "Ellipse.h"

void Ellipse::draw()
{

	draw_ellipse(
		_colour,									// Colour
		_position.x, _position.y,
		_width, _height	
		);
}

/*
 * Abstract implementation to hightlight the shape.
 * Marks ends of the line
 */
void Ellipse::highlight()
{
	draw_ellipse(
		color_yellow,									// Colour
		_position.x - 5, _position.y - 5 ,
		_width + 10, _height	+ 10
		);
}