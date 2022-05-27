#include "input.h"
#include <stdio.h>


int input_handler(Entity *entity) {
    SDL_Event event;

    SDL_PollEvent(&event);

    switch (event.type) {
        case SDL_QUIT :
            return -1;
        case SDL_KEYDOWN :
            printf("key is down\n");
            switch (event.key.keysym.sym) {
                case SDLK_DOWN:
                    entity->pos_y += 4;
                    break;
            }
            break;
        case SDL_KEYUP :
            printf("key is up\n");
            switch (event.key.keysym.sym) {
                case SDLK_UP:
                    entity->pos_y -= 4;
                    break;
            }
            break;
            case SDLK_RIGHT :
            printf("key is right\n");
            switch (event.key.keysym.sym) {
                case SDLK_RIGHT:
                    entity->pos_x -= 4;
                    break;
            }
            break;
            case SDLK_LEFT :
            printf("key is left\n");
            switch (event.key.keysym.sym) {
                case SDLK_LEFT:
                    entity->pos_x += 4;
                    break;
            }
            break;
    }
    return 0;
}