#include <stdio.h>
#include "SwinGame.h"

#include "Shape.h"

#include <iostream>

int main()
{
    //open_audio();
    open_graphics_window("Hello World", 800, 600);
    load_default_colors();
    //show_swin_game_splash_screen();
    
	point2d pt = {10, 20};

	// Create a shape and check it's position
	Shape *shape_position = new Shape(pt, 20, 10);

	point2d chk = {10, 10};

	if (shape_position->is_at( chk ))
		std::cout << "Shape @ 10, 10" << std::endl;

	chk.x = 15; chk.y = 15;
	if (shape_position->is_at( chk ))
		std::cout << "Shape @ 15, 15" << std::endl;

	chk.x = 30; chk.y = 20;
	if (!shape_position->is_at( chk ))
		std::cout << "Shape @ 30, 20" << std::endl;

    do
    {
        process_events();
        
        clear_screen(ColorWhite);
        
        draw_framerate(0,0);
        
		shape_position->draw();

        refresh_screen();
    } while ( ! window_close_requested() );
    
    //close_audio();
    
    release_all_resources();
    return 0;
}
