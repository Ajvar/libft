#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
    int i;
    size_t cpy;
    size_t res;
    
    res = ft_strlen(dest) + ft_strlen(src);
    cpy = size;
    i = 0;
    while (dest[i])
        i++;
    while (*src && size > 0)
    {
        dest[i] = *src;
        i++;
        src++;
        size--;
    }
    if (*src)
      return (cpy);
    dest[i] = '\0';
    return (res);
}