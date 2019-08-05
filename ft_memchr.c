#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
  const unsigned char *str;

  str = s;
  while (*str && n > 0)
  {
    if (*str == (unsigned char)c)  
      return ((void*)s);
    (unsigned char*)s++;   
    str++;
    n--;
  }
    return (NULL);
}
