#ifndef LIB_H
#define LIB_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char    *ft_strdup(char *str);
int     *ft_range(int min, int max);
int     ft_ultimate_range(int **range, int min, int max);
char    *ft_strjoin(int size, char **strs, char *sep);

#endif