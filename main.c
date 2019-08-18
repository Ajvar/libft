#include "libft.h"
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char * ft_strsub(char const *s, unsigned int
start, size_t len)
{
    char *res;
    int i;

    if(!(res = malloc(len + 1)))
        return (NULL);
    i = 0;
    while (len > 0)
    {
        res[i] = s[start];
        start++;
        len--;
        i++;
    }
    *res = '\0';
    return (res);
}

int main(int argc, char **argv)
{
    (void)argc;
    char *sub = ft_strsub(argv[1], 2, 3);
    printf("%s",sub);
    free(sub);

   return 0;
}
