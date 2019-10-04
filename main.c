#include <stdio.h>
#include <stdlib.h>

int ft_countword(char *s, char c)
{
    int i;
    
    i = 0;
    while(*s)
    {
        while(*s == c)
            s++;
        i++;
        while(*s != c && *s)
            s++;
        
    }
return (i);
}

char **ft_strsplit(char *s, char c)
{
    char **res;

    res = malloc(sizeof(*res) * ft_countword(s,c));
    

    return (res);
}
int main()
{
    char *s = "Hello *** world";
    char c = '*';
    int i = ft_countword(s,c);
    printf("%d",i);
    char **res = ft_strsplit(s,c);
    free(res);
}