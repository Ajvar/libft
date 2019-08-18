void *memcpy(void *dest, const void *src, size_t n)
{
    char *cdest = (char*)dest;
    char *csrc = (char*)src;
    int i;

    i = 0;
    while(i < n)
    {
        cdest[i] = csrc[i];
        i++;
    }
}