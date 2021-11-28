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
    /*printf("\nEX01 ft_print_alphabet:\n");
    ft_print_alphabet();
    printf("\n");

    //EX02 ft_print_reverse_alphabet
    printf("\nEX02 ft_print_reverse_alphabet:\n");
    ft_print_reverse_alphabet();
    printf("\n");

    //EX03 ft_ptint_numbers
    printf("\nEX03 ft_print_numbers:\n");
    ft_print_numbers();
    printf("\n");

    //EX04 ft_is_negative
    printf("\nEX04 ft_is_negative(13, 0, -10):\n");
    int n = 13;
    ft_is_negative(n);
    write(1, " | ", 3);
    n = 0;
    ft_is_negative(n);
    write(1, " | ", 3);
    n = -10;
    ft_is_negative(n);
    printf("\n");

    //EX05 ft_print_comb
    printf("\n");
    ft_print_comb();
    printf("\n");

    //EX06 ft_print_comb2
    printf("\n");
    ft_print_comb2();
    printf("\n");

    //EX07 ft_putnbr
    printf("\n");
    int m = -2147483648;
    ft_putnbr(m);
    printf("\n");*/

    //EX08 ft_print_combn
    printf("\n");
    int v = 2;
    ft_print_combn(v);
    printf("\n");
}
