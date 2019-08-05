char *ft_strncpy(char *dest, const char *src, size_t n)
{
    int i;

    i = 0;
    while (*src && n > 0)
    {
        dest[i] = *src;
        src++;
        i++;
        n--;
    }
    return (dest);
}