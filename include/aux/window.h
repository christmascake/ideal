#ifndef IDEAL_INCLUDE_AUX_WINDOW_H_
#define IDEAL_INCLUDE_AUX_WINDOW_H_

#include <SDL3/SDL.h>

struct AUX_Window {
	SDL_Window *win;
	const char *title;

	int x;
	int y;
	int width;
	int height;
};

void AUX_init_window(struct AUX_Window *window);

#endif
