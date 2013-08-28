/*************************************************************
 *		SwinGame :: Shape Drawing Example
 * 
 * @author	Kyle Harris		9621121
 * @version 1.0		25/8/2013
 *
 * for, HIT3172 Object Orientated Programming
 *
 * http://github.com/Cybot101/HIT3172-SwinGame-Shapes
 *************************************************************
 *
 * Drawing Class - Impementation
 *
 * Implements Drawing class definition
 *
 * Provides access to a collection of shape objects
 */

#include "Drawing.h"

/**
 * Constructor.
 *
 * Initialise collection of Shape objects.
 */
Drawing::Drawing(void)
{
	// No need to construct anything, carry on plz...
}

/**
 * Destructor - called when object gets recycled.
 * Cleans-up Shape objects
 */
Drawing::~Drawing(void)
{
	// Clean up
	for (int i=0; i < _shapes.size(); i++)
	{
		delete _shapes[i];
	}
}


/**
 * Adds shapes to the _shape collection
 */
void Drawing::add_shape(Shape *_aToAdd)
{
	_shapes.push_back(_aToAdd);
}

/**
 * Select a shape at a point
 */
void Drawing::select_shape_at_point(point2d _aPos)
{
	// Set _selectedSHapeto a 'null' value first, in case no shape is found (added later)
	_selectedShape = NULL;

	for (int i=0; i < _shapes.size(); i++)
		if (_shapes[i]->is_at(_aPos))
			_selectedShape = _shapes[i];
}

/**
 * Draws crap, also known as shapes...
 */
void Drawing::draw()
{
	for (int i=0; i < _shapes.size(); i++)
		_shapes[i]->draw();
}