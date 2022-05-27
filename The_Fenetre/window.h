#ifndef WINDOW
#define WINDOW

#include <SDL2/SDL.h>

#define WINDOW_WIDTH 580
#define WINDOW_HEIGHT 560
#define WINDOW_NAME "Star_Renard"

typedef struct {
    SDL_Renderer    *renderer;
    SDL_Window      *window;

} Win;

#endif /* !WINDOW */
