#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int get_next_line(char **line)
{
    int rd;
    int i;
    char c;
    char *buffer;

    rd = 0;
    i = 0;
    buffer = malloc(100000);
    *line = buffer;
    while ((rd = read(0, &c, 1)) > 0 & c != '\n')
        buffer[i++] = c;
    buffer[i] = '\0';

    return (rd);
}

int main(){
    int		r;
	char	*line;

	line = NULL;
	while ((r = get_next_line(&line)) > 0)
	{
		printf("%s\n", line);
		free(line);
	}
	printf("%s", line);
	free(line);
}