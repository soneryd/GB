#include <stdio.h>

#include "../include/rom.h"

bool rom_read(char* filename, u_int8_t cart[0x8000]) {
  FILE* rom = NULL;
  rom = fopen(filename, "rb");

  if(rom == NULL) {
    puts("Please supply a valid file");
    return false;
  }

  fseek(rom, 0L, SEEK_END);
  int size = ftell(rom);
  rewind(rom);
  printf("Loading: %s, size: %d\n", filename, size);
  
  for(int i = 0; i < size; i++) {
    cart[i] = fgetc(rom);
  }

  return true;
}
