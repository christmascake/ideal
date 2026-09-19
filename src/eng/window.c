#include "window.h"

#define DEFAULT_TITLE	     "Ideal Circuit Simulator"
#define DEFAULT_WIDTH	     1920
#define DEFAULT_HEIGHT	     1080
#define DEFAULT_WINDOW_X     0
#define DEFAULT_WINDOW_Y     0
#define DEFAULT_WINDOW_STYLE SDL_WINDOW_RESIZABLE

void ENG_Window_init(struct ENG_Window *window)
{
	window->title  = DEFAULT_TITLE;
	window->width  = DEFAULT_WIDTH;
	window->height = DEFAULT_HEIGHT;
	window->x      = DEFAULT_WINDOW_X;
	window->y      = DEFAULT_WINDOW_Y;

	window->win = SDL_CreateWindow(window->title, window->width,
				       window->height, DEFAULT_WINDOW_STYLE);
}
