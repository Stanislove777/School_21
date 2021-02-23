#include "../lib.h"

void	ft_print_combn(int n)
{
	int i;
	int a;

	i = 0;
	a = 0;
	while (i < n)
	{
		ft_putnbr(a);
		i++;
	}
}