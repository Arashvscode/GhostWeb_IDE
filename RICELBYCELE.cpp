#include <stdio.h>
#include <allegro5/allegro.h>
#include <allegro5/allegro_opengl.h>
#include "triangle_renderer.hpp"

int main(int argc, char *argv[])
{
	if (!al_init())
	{
		fprintf(stderr, "Error not Open File");
		return 1;
	}

	ALLEGRO_DISPLAY *display = al_create_display(640, 480);
	if (display == NULL)
	{
		fprintf(stderr, "File not Found\n");
		return 1;
	}

	
	triangle_init();

	while (true)
	{
		
		triangle_render(al_get_time() * 1000);
		
		al_flip_display();
	}

	al_destroy_display(display);
	return 0;
}
