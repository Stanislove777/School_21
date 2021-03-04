#include "../lib.h"

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int diff;
	unsigned int i;

	i = 0;
	while (i < n)
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