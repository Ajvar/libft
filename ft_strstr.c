#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
    int i;

    while (*haystack)
    {
        i = 0;
       
        while (*(haystack + i) == needle[i])
            i++;
        if (needle[i] == '\0')
                return ((char *)haystack);
        haystack++;
    }
    return (NULL);
}