#include <stdio.h>
#include "window.h"
#include "input.h"
#include "draw.h"
#include "init.h"

int main() {
    Win *app = malloc(sizeof(Win));
    Entity *kirby = malloc(sizeof(Entity));

    if (initSDL(app) < 0) {
        return -1;
    }

    kirby->pos_x = 100;
    kirby->pos_y = 100;
    kirby->width = 50;
    kirby->height = 50;
    kirby->texture = loadTexture(app, "Ressource/kirby.png");

    while (input_handler() == 0) {
        prepareCanvas(app);
        drawEntity(app, kirby);
        presentCanvas(app);
        SDL_Delay(16);
    }
    
    return 0;
}