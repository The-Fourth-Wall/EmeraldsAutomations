#include "standard_string.h"

size_t _strlen(const char *s) {
  const char *ptr = s;
  while(*ptr) {
    ++ptr;
  }
  return ptr - s;
}

int _strcmp(const char *a, const char *b) {
  while(*a && *a == *b) {
    ++a;
    ++b;
  }
  return (int)(unsigned char)(*a) - (int)(unsigned char)(*b);
}

void *_memmove(void *dest, const void *src, size_t n) {
  unsigned char *pd       = (unsigned char *)dest;
  const unsigned char *ps = (unsigned char *)src;

  if(ps < pd) {
    for(pd += n, ps += n; n--;) {
      *--pd = *--ps;
    }
  } else {
    while(n--) {
      *pd++ = *ps++;
    }
  }

  return dest;
}
