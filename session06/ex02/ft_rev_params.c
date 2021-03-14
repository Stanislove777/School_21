#include "../lib.h"

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 0;
	j = argc - 1;
	while (j > 0 && argc > 1)
	{
		while (argv[j][i])
			write(1, &argv[j][i++], 1);
		write(1, "\n", 1);
		i = 0;
		j--;
	}

	return (0);
}