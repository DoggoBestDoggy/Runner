#include <stdio.h>
#include "window.h"
#include "input.h"
#include "draw.h"
#include "init.h"

int main() {
    Win *app = malloc(sizeof(Win));
    Entity *vaisseau = malloc(sizeof(Entity));

    if (initSDL(app) < 0) {
        return -1;
    }

    vaisseau->pos_x = 100;
    vaisseau->pos_y = 100;
    vaisseau->width = 50;
    vaisseau->height = 50;
    vaisseau->texture = loadTexture(app, "Ressource/vaisseau.png");
    SDL_SetRenderDrawColor(app->renderer, 00, 000, 000, 000);

    while (input_handler(vaisseau) == 0) {
        prepareCanvas(app);
        drawEntity(app, vaisseau);
        presentCanvas(app);
        SDL_Delay(16);
    }
    
    return 0;
}
