#include <stdio.h>
#include "window.h"
#include "input.h"
#include "draw.h"
#include "init.h"

int main()
{
    Win *app = malloc(sizeof(Win));
    Entity *vaisseau = malloc(sizeof(Entity));

    if (initSDL(app) < 0)
    {
        return -1;
    }

    vaisseau->pos_x = 10;
    vaisseau->pos_y = 10;
    vaisseau->width = 50;
    vaisseau->height = 50;
    vaisseau->texture = loadTexture(app, "Ressource/vaisseau.png");

    while (input_handler(vaisseau) == 0)
    {
        prepareCanvas(app);
        drawEntity(app, vaisseau);
        presentCanvas(app);
        SDL_Delay(16);
    }

    return 0;
}

int enemy()
{
    Win *app = malloc(sizeof(Win));
    Entity *enemy = malloc(sizeof(Entity));

    if (initSDL(app) < 0)
    {
        return -1;
    }

    enemy->pos_x = 100;
    enemy->pos_y = 100;
    enemy->width = 50;
    enemy->height = 50;
    enemy->texture = loadTexture(app, "Ressource/enemy.png");

    while (input_handler(enemy) == 0)
    {
        prepareCanvas(app);
        drawEntity(app, enemy);
        presentCanvas(app);
        SDL_Delay(16);
    }

    return 0;
}