#include "../lib.h"

int		check_str(char *str, char *to_find)
{
	int j;

	j = 0;
	while (to_find[j])
	{
		if (to_find[j] != str[j])
			return (0);
		j++;
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int find;
	
	i = 0;
	j = 0;
	while (str[i])
	{
		if (str[i] == to_find[j])
		{
			if (check_str(&str[i], &to_find[j]) == 1)
				return (&str[i]);
		}
		i++;
	}
	return (NULL);
}