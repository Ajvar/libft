char *ft_strncat(char *dest, const char *src, size_t n)
{
    int i;
    
    i = 0;
    while (dest[i])
        i++;
    while (*src && n > 0)
    {
        dest[i] = *src;
        i++;
        src++;
        n--;
    }
    dest[i] = '\0';
    return (dest);
}