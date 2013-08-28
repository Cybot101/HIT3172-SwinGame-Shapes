/*************************************************************
 *		SwinGame :: Shape Drawing Example
 * 
 * @author	Kyle Harris		9621121
 * @version 1.0			25/8/2013
 *
 * for, HIT3172 Object Orientated Programming
 *
 * http://github.com/Cybot101/HIT3172-SwinGame-Shapes
 *************************************************************
 *
 * Drawing Class - Interface definition
 *
 * Provides an interface to a collection of child Shape objects.
 *
 */

#ifndef _H_DRAWING
#define _H_DRAWING

#include <vector>

#include "Shape.h"

class Drawing
{
	// Declare class' provate properties/fields and methods.
private:

	// Store list of shape objects
	std::vector<Shape *> _shapes;

	Shape *_selectedShape;

	// Declare properties and methods that are public and available for external access
public:
	
	// Constructor
	Drawing(void);

	// Deletes all shapes in list (vector) and cleans up
	~Drawing(void);

	Shape *selected_shape();

	void add_shape(Shape *_aToAdd);
	void select_shape_at_point(point2d _aPos);
	void draw();

};

#endif