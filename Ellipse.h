/*
 * Abstract Ellipse shape
 */

#ifndef _H_ELLIPSE
#define _H_ELLIPSE

#include "shape.h"

class Ellipse : public Shape
{
public:
	
	void draw();
	void highlight();
};

#endif