#include "../lib.h"

int     ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

int     total_size(int size, char **strs, char *sep)
{
    int total_len;
    int i;

    total_len = 0;
    i = 0;
    while (i < size)
    {
        total_len += ft_strlen(&strs[i][0]);
        if (i < size - 1)
            total_len += ft_strlen(&sep[0]);
        i++;
    }
    return (total_len);
}

char    *concat_str(int size, char **strs, char *sep, char *str)
{
    int i;
    int k;
    int j;

    i = 0;
    j = 0;
    k = 0;
    while (j < size)
    {
        while (strs[j][k])
        {
            str[i] = strs[j][k];
            i++;
            k++;
        }
        k = 0;
        while (sep[k] && j < size - 1)
        {
            str[i] = sep[k];
            i++;
            k++;
        }
        k = 0;
        j++;
    }
    return (str);
}

char    *ft_strjoin(int size, char **strs, char *sep)
{
    char *str;
    int total_len;
    int i;
    int j;
    int k;
    
    if (size == 0)
        return (str);
    total_len = total_size(size, strs, sep);
    str = (char *)malloc(sizeof(char) * total_len);
    str = concat_str(size, strs, sep, str);
    return (str);
}