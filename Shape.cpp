/*************************************************************
 *		SwinGame :: Shape Drawing Example
 * 
 * @author	Kyle Harris		9621121
 * @version 1.0		2/9/2013
 * @version 1.1		7/9/2013
 *
 * for, HIT3172 Object Orientated Programming
 *
 * http://github.com/Cybot101/HIT3172-SwinGame-Shapes
 *************************************************************
 *
 * Shape Class - Implementation
 *	
 * Implements an abstract Shape class that can be extended to 
 * draw other shapes.
 */

#include "Shape.h"

/**
 * Constructor.
 * Constructs some stuff...
 */
Shape::Shape(void)
{ // Default constructor. Create our object, but no defaults set
}

/**
 * Destructor
 * Destroys some stuff that was created
 */
Shape::~Shape(void)
{
}

/*
 * Public access getter & setter methods.
 * Allows (limited) access to private fields when required.
 */

color Shape::get_colour()
{
	return _colour;			// Return colour from private field
}

void Shape::set_colour(color _aCol)
{
	_colour = _aCol;		// COuld validate and do stuff here..
}

point2d Shape::get_position()
{
	return _position;
}

void Shape::set_position(point2d _aPos)
{
	_position = _aPos;
}

int Shape::get_width()
{
	return _width;
}

void Shape::set_width(int _aWidth)
{
	_width = _aWidth;
}

int Shape::get_height()
{
	return _height;
}

void Shape::set_height(int _aHeight)
{
	_height = _aHeight;
}

/*
 * Indicates whether this shape is within the point specified.
*/
bool Shape::is_at(point2d _aPos)
{
	return	_aPos.x >= _position.x &&
			_aPos.x <= _position.x + _width &&
			_aPos.y >= _position.y &&
			_aPos.y <= _position.y + _height;
}

