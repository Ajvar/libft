int ft_isalnum(int c)
{
    if (isdigit(c) && isalpha(c))
        return (1);
    return (0);
}