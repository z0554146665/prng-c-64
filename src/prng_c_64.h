#ifndef PRNG_C_64_H
#define PRNG_C_64_H

#include <stdint.h>

struct prng_c_64_s {
  uint64_t a;
  uint64_t b;
  uint64_t c;
};

uint64_t prng_c_64(struct prng_c_64_s *s);

#endif
