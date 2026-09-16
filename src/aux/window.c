#include "window.h"

#define DEFAULT_TITLE  "Ideal Circuit Simulator"
#define DEFAULT_WIDTH  1920
#define DEFAULT_HEIGHT 1080

void AUX_init_window(struct AUX_Window *window)
{
	window->title  = DEFAULT_TITLE;
	window->width  = DEFAULT_WIDTH;
	window->height = DEFAULT_HEIGHT;
	window->x      = 0;
	window->y      = 0;

	window->win = SDL_CreateWindow(window->title, window->width,
				       window->height, SDL_WINDOW_RESIZABLE);
}
