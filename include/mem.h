#ifndef mem_h
#define mem_h

#include <stdlib.h>
#include <stdbool.h>

// 0000-7FFF, 16KB ROM Bank 00+01
extern u_int8_t cart[0x8000];
// 8000-9FFF, 8KB Video RAM (VRAM)
extern u_int8_t vram[0x2000];
// A000-BFFF, 8KB External RAM
extern u_int8_t sram[0x2000];
// C000-DFFF, 4KB Work RAM Bank 00+01
extern u_int8_t wram[0x2000];
// FE00-FE9F, Sprite Attribute Table (OAM)
extern u_int8_t oam[0x100];
// FF00-FF7F, I/O Ports
extern u_int8_t io[0x100];
// FF80-FFFE, High RAM (HRAM)
extern u_int8_t hram[0x80];

bool mem_loadrom(char* filename);

#endif
