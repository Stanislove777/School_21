#include "../lib.h"

int		ft_recursive_power(int nb, int power)
{
	int res;

	res = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 0)
	{
		res = res * nb;
		res = res * ft_recursive_power(nb, power - 1);
		return (res);
	}
	return (res);
}