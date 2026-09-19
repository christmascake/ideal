#include "app_state.h"

#include <SDL3/SDL.h>

void SDL_AppQuit(void *appstate, SDL_AppResult result)
{
	struct AppState *state = (struct AppState *)appstate;

	if (state) {
		if (state->tex)
			SDL_DestroyTexture(state->tex);
		if (state->main_renderer.renderer)
			SDL_DestroyRenderer(state->main_renderer.renderer);
		if (state->main_window.win)
			SDL_DestroyWindow(state->main_window.win);

		SDL_free(state);
	}

	TTF_Quit();
	SDL_Quit();
}
