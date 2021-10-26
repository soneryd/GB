#ifndef cpu_h
#define cpu_h

#include "../include/mem.h"

struct registers {
  struct {
    union {
      struct {
	unsigned char f;
	unsigned char a;
      };
      unsigned short af;
    };
  };

  struct {
    union {
      struct {
	unsigned char c;
	unsigned char b;
      };
      unsigned short bc;
    };
  };

  struct {
    union {
      struct {
	unsigned char e;
	unsigned char d;	
      };
      unsigned short de;
    };
  };

  struct {
    union {
      struct {
	unsigned char l;
	unsigned char h;	
      };
      unsigned short hl;
    };
  };

  unsigned short sp;
  unsigned short pc;
} extern registers;


void cpu_cycle();

#endif
