#define SDL_MAIN_USE_CALLBACKS

#include <SDL3/SDL_main.h>
#include <SDL3/SDL.h>
#include <SDL3_ttf/SDL_ttf.h>
#include <SDL3_image/SDL_image.h>

#include "app_state.h"

SDL_AppResult SDL_AppInit(void **appstate, int argc, char **argv)
{
	(void)argc;
	(void)argv;

	struct AppState *state = SDL_calloc(1, sizeof(struct AppState));

	if (!state) {
		SDL_Log("SDL_calloc failed: %s\n", SDL_GetError());
		return SDL_APP_FAILURE;
	}

	if (!SDL_Init(SDL_INIT_VIDEO)) {
		SDL_Log("SDL_Init failed: %s\n", SDL_GetError());
		return SDL_APP_FAILURE;
	}

	if (!TTF_Init()) {
		SDL_Log("TTF_Init failed: %s\n", SDL_GetError());
		return SDL_APP_FAILURE;
	}

	ENG_Window_init(&state->main_window);

	if (!state->main_window.win) {
		SDL_Log("SDL_CreateWindow failed: %s\n", SDL_GetError());
		SDL_free(state);
		return SDL_APP_FAILURE;
	}

	state->main_renderer.renderer =
		SDL_CreateRenderer(state->main_window.win, NULL);

	state->tex = IMG_LoadTexture(state->main_renderer.renderer, "resources/"
								    "components"
								    "/"
								    "555_4x6."
								    "png");

	ENG_Camera_init(&state->main_camera, 0.0, 0.0, 50);

	ENG_Geometry_init(&state->main_geometry, state->main_window.width,
			  state->main_window.height);

	state->needs_render = true;
	state->is_running   = true;

	*appstate = state;
	return SDL_APP_CONTINUE;
}
