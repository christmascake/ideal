#include <SDL3/SDL.h>

#include "app_state.h"

SDL_AppResult SDL_AppEvent(void *appstate, SDL_Event *event)
{
	struct AppState *state = (struct AppState *)appstate;

	switch (event->type) {
	case SDL_EVENT_QUIT: {
		state->is_running = false;
		return SDL_APP_SUCCESS;
	} break;

	case SDL_EVENT_WINDOW_CLOSE_REQUESTED: {
		state->is_running = false;
		return SDL_APP_SUCCESS;
	} break;

	case SDL_EVENT_KEY_DOWN: break;
	case SDL_EVENT_MOUSE_BUTTON_DOWN: break;
	case SDL_EVENT_MOUSE_BUTTON_UP: break;

	default: break;
	}

	return SDL_APP_CONTINUE;
}
