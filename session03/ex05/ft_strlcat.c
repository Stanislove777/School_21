#include "../lib.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		if (i < size-1)
			dest[i] = src[j];
		else
			dest[i] = '\0';
		i++;
		j++;
	}
	return (i);
}