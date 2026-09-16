#include <SDL3/SDL.h>

#include "render.h"
#include "app_state.h"

void AUX_render_frame(void *appstate)
{
	struct AppState *state = (struct AppState *)appstate;

	SDL_SetRenderDrawColor(state->renderer, 255, 255, 255, 255);
	SDL_RenderClear(state->renderer);

	SDL_SetRenderDrawColor(state->renderer, 255, 0, 0, 255);
	SDL_RenderFillRect(state->renderer, &state->main_canvas.x_axis);

	SDL_RenderPresent(state->renderer);
}
