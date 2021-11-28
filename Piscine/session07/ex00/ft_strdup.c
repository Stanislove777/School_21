#include "../lib.h"

char    *ft_strdup(char *str)
{
    char *p;
    int i;

    i = 0;
    while (str[i])
        i++;
    
    if (!(p = (char *)malloc(sizeof(char) * (i + 1))))
        return (NULL);
    i = 0;
    while (str[i])
    {
        p[i] = str[i];
        i++;
    }
    p[i] = '\0';
    
    return (p);


}