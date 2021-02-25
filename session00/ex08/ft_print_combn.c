#include "../lib.h"

void	ft_print_combn(int n)
{
	int i;
	int a;
	int b;

	i = 0;
	a = 0;
	b = 1;
	while (i < n)
	{
		ft_putnbr(a);
		i++;
	}
}