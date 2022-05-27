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
            if (entity->pos_y - 4 > 0)
            {
                entity->pos_y += 4;
            }
            break;
        case SDLK_UP:
            if (entity->pos_y + 4 < 580)
            {

                entity->pos_y -= 4;
            }
            break;
        case SDLK_RIGHT:
            if (entity->pos_y + 8 < 560)
            {
                entity->pos_x += 8;
            }
            break;
        case SDLK_LEFT:
            if (entity->pos_y - 8 < 0)
            {
                entity->pos_x -= 2;
            }
            break;
        }
        break;
    }
    return 0;
}