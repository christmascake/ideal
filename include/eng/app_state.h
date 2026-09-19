#ifndef IDEAL_INCLUDE_ENG_APP_STATE_H_
#define IDEAL_INCLUDE_ENG_APP_STATE_H_

#include "camera.h"
#include "geometry.h"
#include "window.h"
#include "renderer.h"

#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>

struct AppState {
	struct ENG_Window   main_window;
	struct ENG_Camera   main_camera;
	struct ENG_Geometry main_geometry;
	struct ENG_Renderer main_renderer;

	bool is_running;
	bool needs_render;

	SDL_Texture *tex;
	TTF_Font    *font;
	TTF_Text    *text;
};

#endif
