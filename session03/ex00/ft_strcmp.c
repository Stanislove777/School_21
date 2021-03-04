#include "../lib.h"

int		ft_strcmp(char *s1, char *s2)
{
	int diff;
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		diff = s1[i] - s2[i];
		if (diff > 0)
			return (1);
		else if (diff < 0)
			return (-1);
		i++;
	}
	return (0);
}