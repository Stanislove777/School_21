#include "../lib.h"

int		ft_atoi(char *str)
{
	int	n;
	int i;
	int negative;

	i = 0;
	negative = 1;
	n = 0;
	while (str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			negative = negative * -1;
			i++;
		}
		else
			i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (n * 10) + (str[i] - '0');
		i++;
	}

	return (n * negative);
}