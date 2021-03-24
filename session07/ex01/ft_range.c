#include "../lib.h"

int     *ft_range(int min, int max)
{
    int *arr;
    int size;
    int i;

    i = 0;
    if (max > min)
    {
        size = max - min;
        if (!(arr = (int *)malloc(sizeof(int) * size)))
            return (NULL);
    }
    else if (max <= min)
        return (NULL);

    while (i < size && min < max)
    {
        arr[i] = min;
        min++;
        i++;
    }

    return (arr);
}