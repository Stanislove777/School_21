#include "../lib.h"

int		ft_recursive_factorial(int nb)
{
	int res;

	res = 1;
	if (nb < 0)
		return (0);
	if (nb > 1)
		res = nb * ft_recursive_factorial(nb - 1);
	return (res);
}