#include "ft_ftlib.h"

char *ft_strdup(const char *s)
{
    int i;
    char *res;

    i = 0;
    res = malloc(ft_strlen(s));
    while (*s)
    {
        res[i] = *s;
        s++;
        i++;
    }
    return (res);
}