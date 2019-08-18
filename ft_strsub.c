#include <stdlib.h>

char * ft_strsub(char const *s, unsigned int
start, size_t len)
{
    int i;
    char *res;

    if(!(res = malloc(len + 1)))
        return (NULL);
    i = 0;
    while (len > 0)
    {
        *res = s[start];
        start++;
        len--;
        res++;
    }
    *res = '\0';
    return (res);
}