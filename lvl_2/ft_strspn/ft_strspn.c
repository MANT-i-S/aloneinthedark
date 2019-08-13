#include <string.h>

size_t  ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int j;

    while(s[i])
    {
        j = 0;
        while (accept[j] && accept[j] != s[i])
        {
            j++;
        }
        if (accept[j] == s[i])
        i++;
        else
        return(i);
    }
    return(i);
}