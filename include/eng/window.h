#ifndef IDEAL_INCLUDE_ENG_WINDOW_H_
#define IDEAL_INCLUDE_ENG_WINDOW_H_

#include <SDL3/SDL.h>

struct ENG_Window {
	SDL_Window *win;
	const char *title;

	int x;
	int y;
	int width;
	int height;
};

void ENG_Window_init(struct ENG_Window *window);

#endif
