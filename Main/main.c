#include <stdio.h>
#include "window.h"
#include "input.h"
#include "draw.h"
#include "init.h"

int main()
{
    Win *app = malloc(sizeof(Win));
    Entity *vaisseau = malloc(sizeof(Entity));
    Enemy *enemy = malloc(sizeof(Enemy));
    Obstacle1 *obstacle1 = malloc(sizeof(Obstacle1));

    if (initSDL(app) < 0)
    {
        return -1;
    }

    vaisseau->pos_x = 10;
    vaisseau->pos_y = 10;
    vaisseau->width = 50;
    vaisseau->height = 50;
    vaisseau->texture = loadTexture(app, "Ressource/vaisseau.png");

    enemy->pos_x = 300;
    enemy->pos_y = 300;
    enemy->width = 50;
    enemy->height = 50;
    enemy->texture = loadTexture(app, "Ressource/enemy.png");

    obstacle1->pos_x = 400;
    obstacle1->pos_y = 400;
    obstacle1->width = 50;
    obstacle1->height = 50;
    obstacle1->texture = loadTexture(app, "Ressource/obstacle1.png");

    while (input_handler(vaisseau) == 0)
    {
        prepareCanvas(app);
        drawEntity(app, vaisseau, enemy, obstacle1);
        presentCanvas(app);
        SDL_Delay(16);
    }

    return 0;
}