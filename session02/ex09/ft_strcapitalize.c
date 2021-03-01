#include "../lib.h"

int		is_alphabet(char c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return 1;
	return 0;
}

int		is_num(char c)
{
	if (c >= 48 && c <= 57)
		return 1;
	return 0;
}

char	transform(char c, int *f)
{
	if (*f == 0)
	{
		if (c >= 97 && c <= 122)
			c = c - 32;
	}
	else
	{
		if (c >= 65 && c <= 90)
			c = c + 32;
	}
	*f = 1;

	return (c);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int flag;

	i = 0;
	flag = 0;
	while (str[i])
	{
		while (is_alphabet(str[i]))
		{
			if ((i != 0) && (is_num(str[i-1]) == 1))
				flag = 1;
			str[i] = transform(str[i], &flag);
			i++;
		}
		flag = 0;
		i++;
	}

	return (str);
}