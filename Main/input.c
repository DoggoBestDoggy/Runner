#include "input.h"
#include <stdio.h>

int input_handler(Entity *entity)
{
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type)
    {
    case SDL_QUIT:
        return -1;
    case SDL_KEYDOWN:
        printf("key is use\n");
        switch (event.key.keysym.sym)
        {
        case SDLK_DOWN:

            printf("TROP EN BAS LA ");
            entity->pos_y += 4;

            break;
        case SDLK_UP:

            printf("TROP EN HAUT LA ");
            entity->pos_y -= 4;

            break;
        case SDLK_RIGHT:

            printf("TROP A DRWAT ");
            entity->pos_x += 8;

            break;
        case SDLK_LEFT:

            printf("TROP A GAUSH ");
            entity->pos_x -= 2;

            break;
        }
    }
    if (entity->pos_y < 0)
    {
        entity->pos_y = 0;
    }
    else if (entity->pos_y > (WINDOW_HEIGHT - entity->height))
    {
        entity->pos_y = WINDOW_HEIGHT - entity->height;
    }
    if (entity->pos_x < 0)
    {
        entity->pos_x = 0;
    }
    else if (entity->pos_x > (WINDOW_WIDTH)-entity->height)
    {
        entity->pos_x = WINDOW_WIDTH - entity->width;
    }
    return 0;
}
