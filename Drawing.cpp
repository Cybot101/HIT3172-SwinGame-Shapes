/*************************************************************
 *		SwinGame :: Shape Drawing Example
 * 
 * @author	Kyle Harris		9621121
 * @version 1.0		25/8/2013
 * @version 1.5		7/9/2013	Added group selection option
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
	_selectedShape = NULL;
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

Shape * Drawing::selected_shape()
{
	return _selectedShape;
}

/*
 * Public getter returns collection of all selected shapes
 */
std::vector<Shape *> Drawing::all_selected_shapes()
{
	return _allSelectedShapes;
}

/**
 * Select a shape at a point
 */
void Drawing::select_shape_at_point(point2d _aPos)
{
	// Set _selectedSHapeto a 'null' value first, in case no shape is found
	_selectedShape = NULL;
	_allSelectedShapes.clear();

	//for (uint32_t i=0; i < _shapes.size(); i++)
	for (int i=_shapes.size()-1; i >= 0; i--)		// Selects last shape in list
		if (_shapes[i]->is_at(_aPos))				// Shapes are 'pushed' onto the start,
		{
			//_selectedShape = _shapes[i];	// So the oldest shape is furthest in collection
			_allSelectedShapes.push_back( _shapes[i] );
			break;
		}
}

/**
 * Select all shapes at a point
 */
void Drawing::select_all_shapes_at_point(point2d _aPos)
{
	// Set _selectedSHapeto a 'null' value first, in case no shape is found
	_selectedShape = NULL;
	_allSelectedShapes.clear();

	for (uint32_t i=0; i < _shapes.size(); i++)		// If shape is at point,
		if (_shapes[i]->is_at(_aPos))				// Add shape to selected collection
			_allSelectedShapes.push_back( _shapes[i] );
}

/**
 * Draws shapes by calling the Draw method on each shape in the collection.
 * The Draw method is abstracted for each of the different shapes.
 */
void Drawing::draw()
{
	for (int i=0; i < _shapes.size(); i++)
	{
		Shape * s =_shapes[i];
		s->draw();
	}
}