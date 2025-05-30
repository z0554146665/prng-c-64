#include "prng_c_64.h"

uint64_t prng_c_64(struct prng_c_64_s *s) {
  uint64_t block = s->a + s->c;

  s->a = ((s->a << 35) | (s->a >> 29)) ^ s->b;
  s->b += 111111111111111111ULL;
  s->c = (block << 23) | (block >> 41);
  return block;
}
