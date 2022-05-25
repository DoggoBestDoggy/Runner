#ifndef DRAW
#define DRAW

#include "window.h"
#include <SDL2/SDL_image.h>

void prepareCanvas(Win *app);
void presentCanvas(Win *app);

typedef struct {
    int         pos_x;
    int         pos_y;
    int         width;
    int         height;
    SDL_Texture *texture;
} Entity;

#endif /* !DRAW */