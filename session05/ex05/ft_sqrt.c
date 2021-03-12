#include "../lib.h"

int		ft_sqrt(int nb)
{
	int i;

	i = 1;
	while (i != nb)
	{
		if (nb == (i * i))
			return (i);
		i++;
	}
	return (0);
}