char * ft_strmap(char const *s, char (*f)(char))
{
    int i;

    i = 0;
    char *res = malloc(ft_strlen(s) + 1);
        while(*s)
    {
        res[i] = f(s);
        i++;
        s++;
    }
}