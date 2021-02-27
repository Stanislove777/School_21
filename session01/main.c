#include "lib.h"

int		main(void)
{
	/*
	//EX00 ft_ft
	int a = 32;
	int *p_a = &a;
	printf("%d\n", a);
	ft_ft(p_a);
	printf("%d\n", a);

	//EX01 ft_ultimat_ft
	int b = 32;
	int *p_b = &b;
	int **p_b1 = &p_b;
	int ***p_b2 = &p_b1;
	int ****p_b3 = &p_b2;
	int *****p_b4 = &p_b3;
	int ******p_b5 = &p_b4;
	int *******p_b6 = &p_b5;
	int ********p_b7 = &p_b6;
	int *********p_b8 = &p_b7;
	printf("%d\n", b);
	ft_ultimate_ft(p_b8);
	printf("%d\n", b);

	//EX02 ft_swap
	int c = 3;
	int d = 5;
	printf("%d before swap %d\n", c, d);
	ft_swap(&c, &d);
	printf("%d after swap %d\n", c, d);

	//EX03 ft_div_mod
	int e = 10;
	int f = 3;
	int div, mod;
	printf("%d div/mod %d\n", e, f);
	ft_div_mod(e, f, &div, &mod);
	printf("div = %d, mod = %d\n", div, mod);

	//EX04 ft_ultimate_div_mod
	int g = 10;
	int h = 3;
	printf("a = %d b = %d\n", g, h);
	ft_ultimate_div_mod(&g, &h);
	printf("%d %d\n", g, h);

	//EX05 ft_putstr
	char str[] = "abc";
	ft_putstr(&str[0]);

	//EX06 ft_strlen
	char str2[] = "abcdef";
	int len = ft_strlen(&str2[0]);
	printf("len = %d\n", len);

	//EX07 ft_rev_int_tab
	int tab[] = {1, 2, 3, 4};
	int tab1[] = {13, 14, 15, 16, 17};
	int size = 4;
	int size1 = 5;
	int i = 0;

	ft_rev_int_tab(&tab[0], size);
	ft_rev_int_tab(&tab1[0], size1);

	while (i < size)
		printf("%d ", tab[i++]);
	i = 0;
	printf("\n");
	while (i < size1)
		printf("%d ", tab1[i++]);*/

	//EX08 ft_sort_int_tab
	int tab2[] = {1, 3, 6, 0, 4};
	int size2 = 4;
	int j = 0;

	ft_sort_int_tab(&tab2[0], size2);

	while (j < size2)
		printf("%d ", tab2[j++]);


}

