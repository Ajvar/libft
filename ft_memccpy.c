void *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    char *cdest = (char*)dest;
    char *csrc = (char*)src;
    int i;

    i = 0;
    while(i < n && csrc[i] != c)
    {
        cdest[i] = csrc[i];
        i++;
    }
}