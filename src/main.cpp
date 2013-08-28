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
 * Main implmentation
 *
 * Program starts here...
 *
 */

#include <stdio.h>
#include "SwinGame.h"

#include "Shape.h"
#include "Drawing.h"

#include <iostream>

int main()
{
    //open_audio();
    open_graphics_window("Hello World", 800, 600);
    load_default_colors();
    //show_swin_game_splash_screen

	// Create Drawing object to hold a group of shapes
	Drawing *drawing_colelction = new Drawing();
	
	point2d pt = {10, 20};

	// Create a shape and check it's position
	Shape *shape_1 = new Shape(pt, 20, 30);
	drawing_colelction->add_shape(shape_1);

	pt.x = 50; pt.y = 50;
	Shape *shape_2 = new Shape(pt, 30, 60);
	drawing_colelction->add_shape(shape_2);

	pt.x = 10; pt.y = 40;
	Shape *shape_3 = new Shape(pt, 30, 40);
	drawing_colelction->add_shape(shape_3);

	pt.x = 30; pt.y = 50;
	Shape *shape_4 = new Shape(pt, 60, 20);
	drawing_colelction->add_shape(shape_4);
	
    do
    {
        process_events();
        
        clear_screen(ColorWhite);
        
        draw_framerate(0,0);
        
		
		// Call Drawing's _draw_ method to draw it's Shapes
		drawing_colelction->draw();

        refresh_screen();
    } while ( ! window_close_requested() );
    
    //close_audio();
    
    release_all_resources();

	delete drawing_colelction;

    return 0;
}
