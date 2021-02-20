#include "lib.h"

int     main(void)
{
    char str [] = "abcd";
    int i = 0;

    // EX00 ft_putchar
    printf("EX00 ft_putchar:\n");
    ft_putchar('A');
    printf("\n");
    while (str[i])
        ft_putchar(str[i++]);
    i = 0;
    printf("\n");

    //EX01 ft_print_alphabet
    printf("\nEX01 ft_print_alphabet:\n");
    ft_print_alphabet();
    printf("\n");


}
