#include "../lib.h"

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = '0';
	d = '1';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				while (d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					write (1, " ", 1);
					ft_putchar(c);
					ft_putchar(d);
					if (a == '9' && b == '8' && c == '9' && a == '9')
						return ;
					write (1, ", ", 2);
					d++;
				}
				d = '0';
				c++;
			}
			b++;
			d = b + 1;
			c = a;
		}
		b = '0';
		a++;
	}
}