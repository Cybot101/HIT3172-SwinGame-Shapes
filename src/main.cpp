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

#include "DrawingController.h"

#include <iostream>

int main()
{
    open_graphics_window("Hello World", 800, 600);
    load_default_colors();

	// Create Drawing object to hold a group of shapes
	Drawing *drawing_collection = new Drawing();
	
	// Create the Drawing Controller, and assign it our Drawing
	DrawingController * drawing_controller = new DrawingController(drawing_collection);
	
	point2d * text_pt = new point2d();
	text_pt->x = 20;
	text_pt->y = 20;

    do
    {
        process_events();        
        clear_screen(ColorWhite);
        draw_framerate(0,0);
		
		draw_text("Left Mouse to place a shape", ColorBlack, 5, 20);
		draw_text("Right Mouse to select shape. Hold Ctrl to select all at location.", ColorBlack, 5, 30);
		draw_text("Press 'r', 'l', 't', 'e' to change shape. ", ColorBlack, 5, 40);
		draw_text("Press Arrow keys to move. Hold Ctrl to resize.", ColorBlack, 5, 50);
		        
		// Handle input in DrawingController
		drawing_controller->handle_input();
		
		// Call Drawing's _draw_ method to draw it's Shapes
		drawing_controller->draw();

        refresh_screen();
    } while ( ! window_close_requested() );

    release_all_resources();

	delete drawing_collection, drawing_controller;

    return 0;
}
