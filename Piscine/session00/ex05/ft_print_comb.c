#include "../lib.h"

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = '0';
	b = '1';
	while (a <= '7')
	{
		while (b <= '9')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_putchar(a);
				ft_putchar(b);
				ft_putchar(c);
				if (a == '7' && b == '8' && c == '9')
					return ;
				write (1, ", ", 2);
				c++;
			}
			b++;
		}
		b = a + 1;
		a++;
	}
}