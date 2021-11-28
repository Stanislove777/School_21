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

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		write (1, &str[i++], 1);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

void	ft_swap(char *s1, char *s2)
{
	char temp1[100];
	char temp2[100];

	ft_strcpy(temp1, s2);
	ft_strcpy(temp2, s1);
	s1 = temp2;
	s2 = temp1;
}

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = 1;
	while (j < argc - 1)
	{
		if (ft_strcmp(argv[j], argv[j+1]) > 0)
			ft_swap(argv[j], argv[j+1]);
		j++;
	}

	j = 1;
	while (argv[j])
	{
		ft_putstr(argv[j]);
		j++;
	}

	return (0);
}