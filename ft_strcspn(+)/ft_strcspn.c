#include <string.h>

size_t  ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j;

    while(s)
    {
        j = 0;
        while(reject[j] && s[i] != reject[j])
            j++;
            if(reject[j] == s[i])
            return(i);
        i++;
    }
    return(i);
}