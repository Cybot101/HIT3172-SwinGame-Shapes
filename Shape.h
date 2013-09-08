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
 * Shape Class - Interface definition
 *
 * An abstract Shape class that can be extended to draw other shapes. 
 * Shapes can be drawn and interacted with on the sceen.
 * Shapes can have different colours, size, location, and can be 'checked for' at a location.
 *
 */

// Boilerplate
#ifndef _H_SHAPE
#define _H_SHAPE

#include "Colors.h"
#include "Graphics.h"		// SwinGame graphcs library

class Shape
{
protected:
	
	// Declare private fields
	color	_colour;
	point2d	_position;
	int		_width, _height;


public:

	// Constructor
	Shape(void);
	
	// Destructor - cleans stuff up
	virtual ~Shape(void);

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

	// Abstract methods to be implemented in child classes
	virtual void draw() = 0;		// Draw shape
	virtual void highlight() = 0;	// Highlight shape

};

#endif