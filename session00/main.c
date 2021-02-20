#include "lib.h"

void    ft_putchar(char c);

int     main(void)
{
    char str [] = "abcd";
    int i = 0;

    // EX00 ft_putchar
    ft_putchar('A');
    printf("\n");
    while (str[i])
        ft_putchar(str[i++]);
    i = 0;
    
}
