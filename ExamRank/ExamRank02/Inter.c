#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

int check(const char *str, char c, int ind)
{
    int i;

    i = 0;
    while (i < ind)
    {
        if (str[i] == c)
            return (1);
        i++;
    }
    return (0);
}

int main(int argc, char const *argv[])
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (argc != 3)
    {
        ft_putchar('\n');
        return (0);
    }

    while (argv[1][i])
    {
        if (check(argv[1], argv[1][i], i) == 0)
        {
            j = 0;
            while (argv[2][j])
            {
                if (argv[2][j] == argv[1][i])
                {
                    ft_putchar(argv[1][i]);
                    break;
                }
                j++;
            }
        }
        i++;
    }
    ft_putchar('\n');

    return 0;
}
