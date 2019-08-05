char *ft_strnstr(const char	*big, const char *little, size_t len)
{
        int i;
        int n;

    while (*haystack)
    {
        i = 0;
        n = len;
        while (*haystack == needle[i] && n > 0)
        {
            if (needle[i] == '\0')
                return (haystack);
            i++;
            n--;
        }
        haystack++;
    }
    return (NULL);
}