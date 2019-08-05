#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
  int i;
  unsigned char *cpy;

  i = 0;
  void *tmp = malloc(ft_strlen((char)src);
  while (cpy[i])
  {
    (unsigned char*)tmp[i] = cpy[i];
    i++;
  }
  printf("%s",tmp);
  return (dest);
}

int main(void)
{
  char *dest = malloc(100);
  char *src = "kaka";
  //char *destdeux 

  dest = ft_memmove(dest, src, 3);
 printf("%s", dest);
  //dest[0] = 'l';
  //dest[1] = 'o';
  //dest[2] = '\0';
 // printf("%d", ft_memcmp("a", "b", 3));
 //free(dest);
 //free(destdeux);
}
