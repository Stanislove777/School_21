#include "../lib.h"

void	ft_putnbr(int nb)
{
	int	negative;
	char c;

	negative = 1;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		nb = nb * -1;
		write (1, "-", 1);
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = (nb % 10) + '0';
	write (1, &c, 1);
}