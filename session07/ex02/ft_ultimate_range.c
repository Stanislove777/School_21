#include "../lib.h"

int     ft_ultimate_range(int **range, int min, int max)
{
    int *tab;
    int i;
    int size;

    i = 0;
    if (max > min)
    {
        size = max - min;
        if (!(tab = (int *)malloc(sizeof(int) * size)))
            return (-1);
    }
    else if (max <= min)
    {
        *range = NULL;
        return (0);
    }

    while (i < size)
    {
        tab[i] = min;
        i++;
        min++;
    }
    *range = tab;
    return (i);
}

