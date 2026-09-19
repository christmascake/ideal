#ifndef IDEAL_INCLUDE_ENG_RENDERER_H_
#define IDEAL_INCLUDE_ENG_RENDERER_H_

#include <SDL3/SDL.h>

struct ENG_Renderer {
	SDL_Renderer *renderer;
};

void ENG_render_frame(void *appstate);

#endif
