#include "../lib.h"

int		ft_find_next_prime(int nb)
{
	int i;
	int find;

	i = 2;
	find = 0;
	while (find == 0)
	{
		while (i != nb)
		{
			if (nb % i == 0)
				break;
			i++;
			if (i == nb)
			{
				find = nb;
				return (find);
			}
		}
		nb++;
	}
	return (nb);
}