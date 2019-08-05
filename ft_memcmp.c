#include <stddef.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    const unsigned char *p1;
    const unsigned char *p2;

    p1 = s1;
    p2 = s2;
     while (*p1 == *p2 && *p1 != '\0' && n > 0)
    {
        p1++;
        p2++;
        n--;
    }
    return (*p1 - *p2);   
}