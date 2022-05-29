#include "draw.h"

void prepareCanvas(Win *app)
{

    SDL_SetRenderDrawColor(app->renderer, 96, 128, 255, 255);
    SDL_RenderClear(app->renderer);
}

void presentCanvas(Win *app)
{
    SDL_RenderPresent(app->renderer);
}

SDL_Texture *loadTexture(Win *app, char *img_path)
{
    SDL_Texture *texture;

    SDL_LogMessage(SDL_LOG_CATEGORY_APPLICATION, SDL_LOG_PRIORITY_INFO, "Loading: %s", img_path);
    texture = IMG_LoadTexture(app->renderer, img_path);
    if (texture == NULL)
    {
        printf("Failed to load texture %s\n", IMG_GetError());
    }
    return texture;
}

void drawEntity(Win *app, Entity *entity, Enemy *enemy, Obstacle1 *obstacle1, Obstacle2 *obstacle2)
{
    SDL_Rect dest = {entity->pos_x, entity->pos_y, entity->width, entity->height};
    SDL_RenderCopy(app->renderer, entity->texture, NULL, &dest);

    SDL_Rect Pos = {enemy->pos_x, enemy->pos_y, enemy->width, enemy->height};
    SDL_RenderCopy(app->renderer, enemy->texture, NULL, &Pos);

    SDL_Rect Poss = {obstacle1->pos_x, obstacle1->pos_y, obstacle1->width, obstacle1->height};
    SDL_RenderCopy(app->renderer, obstacle1->texture, NULL, &Poss);

    SDL_Rect Posss = {obstacle2->pos_x, obstacle2->pos_y, obstacle2->width, obstacle2->height};
    SDL_RenderCopy(app->renderer, obstacle2->texture, NULL, &Posss);
}
