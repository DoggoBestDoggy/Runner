#ifndef WINDOW
#define WINDOW

#include <SDL2/SDL.h>

#define WINDOW_WIDTH 500
#define WINDOW_HEIGHT 600
#define WINDOW_NAME "Star_Renard"

typedef struct
{
    SDL_Renderer *renderer;
    SDL_Window *window;

} Win;

SDL_DisplayMode getWindowSize();

#endif /* !WINDOW */
