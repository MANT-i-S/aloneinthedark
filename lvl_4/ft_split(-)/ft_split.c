#include <stdlib.h>

int wordcount(char *str)
{
    int words = 0;
    while(*str)
    {
        while(*str && (*str == ' ' || *str == '\t' || *str == '\n'))
        str++;
        while(*str && *str != ' ' && *str != '\t' && *str != '\n')
        str++;
        words++;
    }
    return(words);
}

char    **ft_split(char *str)
{
    char **dest;
    int words;
    int wordlen = 0;
    int i = 0;
    int j = 0;
    int x = 0;
    int y = 0;

    words = wordcount(str);
    dest = (char**)malloc(sizeof(char*) * words + 1);
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        i++;
        j = i;
        while(str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
        i++;
        wordlen++;
        }
        dest[x] = (char*)malloc(sizeof(char) * wordlen + 1);
        wordlen = 0;
        while(str[j] && str[j] != ' ' && str[j] != '\t' && str[j] != '\n')
        {
            dest[x][y] = str[j];
            j++;
            y++;
        }
        dest[x][y] = '\0';
        x++;
        y = 0;
    }
    dest[x] = NULL;
    return(dest);
}
