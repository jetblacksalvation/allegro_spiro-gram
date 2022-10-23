#pragma once
#include "game.h"
/*
* GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP 
* GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP * GAMELOOP 
*/
void main_loop() {
	//call setup	
	m_setup();
	bool _exit = false;
	circle first_circle = { {500,500}, 0, 100 };
	circle second_circle = { {0,0}, 0, 10 };
	circle thrid_circle = { {0,0}, 0, 75 };

	vector temp1;

	while (_exit == false) {
		input();
		


		
		//drawing section 
		if (al_is_event_queue_empty(event_queue)) {
			//al_clear_to_color(al_map_rgb(0, 0, 0));//clears screen

			// 
			second_circle.pos =  ret_next(&first_circle, 0.002) ;
			thrid_circle.pos = ret_next(&second_circle, 0.04);
			temp1 = ret_next(&thrid_circle, 0.1);
			//system("pause");
			//al_draw_filled_rectangle(100, 100, 200, 200, red);
			//printf("printing at x =%d and y = %d", temp1.x, temp1.y);
			
			al_draw_rectangle(temp1.x, temp1.y,temp1.x+1, temp1.y+1, white, 1);
			al_flip_display();//actuall draws stuff
			
		}
		

	}
	//destroy all stuff funciton



}


