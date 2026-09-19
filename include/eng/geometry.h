#ifndef IDEAL_INCLUDE_ENG_GEOMETRY_H_
#define IDEAL_INCLUDE_ENG_GEOMETRY_H_

#include <SDL3/SDL.h>

struct ENG_Geometry {
	SDL_FRect x_axis;
	SDL_FRect y_axis;
};

void ENG_Geometry_init(struct ENG_Geometry *canvas, const int win_width,
		       const int win_height);

#endif
