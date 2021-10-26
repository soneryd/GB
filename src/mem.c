#include "../include/mem.h"
#include "../include/rom.h"

u_int8_t cart[0x8000];
u_int8_t vram[0x2000];
u_int8_t sram[0x2000];
u_int8_t wram[0x2000];
u_int8_t oam[0x100];
u_int8_t io[0x100];
u_int8_t hram[0x80];

bool mem_loadrom(char* filename) {
  return rom_read(filename, cart);
}
