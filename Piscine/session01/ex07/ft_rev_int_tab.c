#include "../lib.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size-1];
		tab[size-1] = temp;
		i++;
		size--;
	}
}