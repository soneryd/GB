#ifndef gfx_h
#define gfx_h

#include <stdbool.h>
#include <SDL2/SDL.h>

#define SCREEN_WIDTH 600
#define SCREEN_HEIGHT 400

typedef struct {
  SDL_Window *window;
  SDL_Renderer *renderer;
} GFX;

bool gfx_init(GFX *gfx);
void gfx_quit(GFX *gfx);

#endif
