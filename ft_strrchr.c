#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    const char *tmp;

    tmp = NULL;
    while (*s)
    {
        if (*s == c)
            tmp = s;
        s++;
    }

    if (c == '\0')
        return ((char*)s);
    return ((char *)tmp);
}