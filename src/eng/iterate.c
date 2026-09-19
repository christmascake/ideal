#include <SDL3/SDL.h>

#include "renderer.h"
#include "app_state.h"

SDL_AppResult SDL_AppIterate(void *appstate)
{
	struct AppState *state = (struct AppState *)appstate;

	if (!state->is_running)
		return SDL_APP_SUCCESS;

	if (state->needs_render) {
		ENG_render_frame(state);
		state->needs_render = false;
	}

	return SDL_APP_CONTINUE;
}
