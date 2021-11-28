#include "../lib.h"

int		is_up(char c)
{
	if (c >= 65 && c <= 90)
		return 1;
	return 0;
}

int		is_low(char c)
{
	if (c >= 97 && c <= 122)
		return 1;
	return 0;
}

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (is_up(str[i]) == 0 && is_low(str[i]) == 0)
			return 0;
		i++;
	}

	return 1;
}