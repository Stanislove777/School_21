#include "../lib.h"

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i])
	{
		if (i < (size - 1))
			dest[i] = src[i];
		i++;
	}
	return (i);
}