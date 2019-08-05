#include "libft.h"

void *memset(void *s, int c, size_t n)
{
    int i;

    i = 0;
    unsigned char *cpy = s;
    while ((int)n > 0)
    {
      cpy[i] = c;
        i++;
        n--;
    }
    return cpy;
}