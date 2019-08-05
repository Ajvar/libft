int atoi(const char *nptr)
{
    int res;
    int sign;

    res = 0;
    sign = 1;
    while (*nptr >= 9 && *nptr <= 13)
        nptr++;
    if (*nptr == '-')
    {
        sign = -sign;
        nptr++;
    }
    while (isdigit(*nptr))
    {
        res = res * 10 + (*nptr + 48);
        nptr++;
    }
    return (res * sign);
}