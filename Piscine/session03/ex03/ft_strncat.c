#include "../lib.h"

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}