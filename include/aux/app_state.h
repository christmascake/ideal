#ifndef IDEAL_INCLUDE_AUX_APP_STATE_H_
#define IDEAL_INCLUDE_AUX_APP_STATE_H_

#include "camera.h"
#include "canvas.h"
#include "window.h"

#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>

struct AppState {
	struct AUX_Window main_window;
	struct AUX_Camera main_camera;
	struct AUX_Canvas main_canvas;

	SDL_Renderer *renderer;

	bool is_running;
	bool needs_render;

	SDL_Texture *tex;
	TTF_Font    *font;
	TTF_Text    *text;
};

#endif
