#include "libft.h"
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
    char *cdest = (char*)dest;
    char *csrc = (char*)src;
    char *temp;
    int i;

    i = 0;
    temp = malloc(sizeof(char*) * ft_strlen(src));
    while(i < n)
    {
        temp[i] = csrc[i];
        i++;
    }
    i = 0;
    while(temp[i])
    {
        dest[i] = temp[i];
        i++;
    }
}