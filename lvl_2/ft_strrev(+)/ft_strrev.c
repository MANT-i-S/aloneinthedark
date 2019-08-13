char    *ft_strrev(char *str)
{
    int i = 0;
    int len = 0;
    char tmp;

    while (str[len])
    len++;
    len--;
    while(len > i)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        i++;
        len--;
    }
    return(str);
}