
#include <stddef.h>

int ft_count_digit(int n)
{
    int res;

    while (n > 0)
    {
        res++;
        n /= 10;
    }
    return (res);
}

char *ft_itoa(int n)
{
    char *res;
    int i;

    if (n == -2147483648)
        return ("-2147483648");
    if (!(res = malloc(ft_count_digit(n) + 1)))
        return (NULL);
    i = 0;
    if (n < 0)
    {
        res[0] = '-';
        i++;
        n *= -1;
    }

    while (i < )
}