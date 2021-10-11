#include <stdlib.h>
#include <stdbool.h>
#include <SDL2/SDL.h>

#include "../include/gfx.h"

int main() {
  GFX gfx;
  if(!gfx_init(&gfx))
    return EXIT_FAILURE;

  bool running = true;;
  SDL_Event e;
  while(running) {
    while(SDL_PollEvent(&e) != 0) {
      if(e.type == SDL_QUIT)
	running = false;
    }
    SDL_RenderClear(gfx.renderer);
    SDL_SetRenderDrawColor(0,0,0,0,0);
    SDL_RenderPresent(gfx.renderer);
  }

  gfx_quit(&gfx);
  return EXIT_SUCCESS;
}
