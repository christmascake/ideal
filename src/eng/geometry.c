#include "geometry.h"

#define AXIS_THICKNESS 2

void ENG_Geometry_init(struct ENG_Geometry *canvas, const int win_width,
		       const int win_height)
{
	// red line across the middle of the screen to start
	SDL_FRect x_axis = { 0, 0, win_width, AXIS_THICKNESS };

	canvas->x_axis = x_axis;
}
