
#include "app_state.h"
#include "geometry.h"
#include "renderer.h"

#include <SDL3/SDL.h>

void ENG_render_frame(void *appstate)
{
	struct AppState *state = (struct AppState *)appstate;

	SDL_SetRenderDrawColor(state->main_renderer.renderer, 255, 255, 255,
			       255);
	SDL_RenderClear(state->main_renderer.renderer);

	SDL_SetRenderDrawColor(state->main_renderer.renderer, 0, 0, 255, 255);
	SDL_RenderFillRect(state->main_renderer.renderer,
			   &state->main_geometry.x_axis);

	SDL_RenderPresent(state->main_renderer.renderer);
}
