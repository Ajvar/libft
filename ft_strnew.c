#include <stdlib.h>
#include "libft.h"

char * ft_strnew(size_t size)
{
    char *res;

    if(!(res = malloc(size)))
        return (NULL);
    ft_bzero(res, size);
    return res;
}