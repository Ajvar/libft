#include <stddef.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *res;

    i = 0;
    res = ft_strdup(s);
    if (!(res))
        return (NULL);
    while (res[i])
    {
        res[i] = f(i, res[i]);
        i++;
    }
    return (res);
}