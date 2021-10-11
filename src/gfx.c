#include "../include/gfx.h"

bool gfx_init(GFX *gfx) {
  // Initialize SDL
  if (SDL_Init(SDL_INIT_VIDEO) < 0) {
    printf("Failed to initialize SDL: %s\n", SDL_GetError());
    return EXIT_FAILURE;
  }
  SDL_SetHint(SDL_HINT_RENDER_SCALE_QUALITY, "1");

  // Create window
  gfx->window = SDL_CreateWindow("Chip-8",
			  SDL_WINDOWPOS_UNDEFINED,
			  SDL_WINDOWPOS_UNDEFINED,
			  SCREEN_WIDTH, SCREEN_HEIGHT,
			  SDL_WINDOW_SHOWN);
  if(gfx->window == NULL) {
    printf("Failed to create window: %s\n", SDL_GetError());
    return EXIT_FAILURE;
  }

  // Create renderer
  gfx->renderer = SDL_CreateRenderer(gfx->window, -1,
				   SDL_RENDERER_ACCELERATED);
  if(gfx->renderer == NULL) {
    printf("Failed to create renderer: %s\n", SDL_GetError());
    return EXIT_FAILURE;
  }

  return 1;
}

void gfx_quit(GFX *gfx) {
  SDL_DestroyWindow(gfx->window);
  SDL_DestroyRenderer(gfx->renderer);
  SDL_Quit();
}
