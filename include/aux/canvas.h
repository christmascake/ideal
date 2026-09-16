#ifndef IDEAL_INCLUDE_AUX_CANVAS_H_
#define IDEAL_INCLUDE_AUX_CANVAS_H_

#include <SDL3/SDL.h>

struct AUX_Canvas {
	SDL_FRect x_axis;
	SDL_FRect y_axis;
};

void AUX_Canvas_init(struct AUX_Canvas *canvas, const int win_width,
		     const int win_height);

#endif // !IDEAL_INCLUDE_AUX_CANVAS_H_
