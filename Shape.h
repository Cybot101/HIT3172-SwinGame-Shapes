/*************************************************************
 *		SwinGame :: Shape Drawing Example
 * 
 * @author	Kyle Harris		9621121
 * @version 
 *
 * for, HIT3172 Object Orientated Programming
 *
 * http://github.com/Cybot101/HIT3172-SwinGame-Shapes
 *************************************************************
 *
 * Shape Class - Interface definition
 *
 * Defines the Shape class to build "shape" objects to be drawn and interacted
 * with on the sceen.
 *
 * Shapes can have different colours, size, location, and can be 'checked for' at a location.
 *
 */

// Boilerplate
#ifndef _H_SHAPE
#define _H_SHAPE

#include "Colors.h"

class Shape
{
private:
	
	// Declare private fields
	color	_colour;
	point2d	_position;
	int		_width, _height;


public:

	// Constructor
	Shape(void);

	Shape(point2d _aPos);

	Shape(point2d _aPos, int _aW, int _aH);

	// Destructor - cleans stuff up
	~Shape(void);

	/*
	 * Public access methods
	 * Allows (controlled) access to private fields/data
	*/
	color get_colour();
	void set_colour(color _aCol);

	point2d get_position();
	void set_position(point2d _aPos);

	int get_width();
	void set_width(int _aWidth);
	int get_height();
	void set_height(int _aHeight);

	bool is_at(point2d _aPos);

	void draw();

};

#endif