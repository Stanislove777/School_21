#include "lib.h"

int		main(void)
{
	/*
	//EX00 ft_strcmp
	int a = ft_strcmp("aaaa", "aaa");
	int b = strcmp("aaaa", "aaa");
	printf("ex00 %d %d\n", a, b);

	// EX01 ft_strncmp
	int c = ft_strncmp("aacaaaa", "aabaaa", 4);
	int d = strncmp("aacaaaa", "aabaaa", 4);
	printf("ex01 %d %d\n", c, d);

	//EX02 ft_strcat
	char dest[10] = "abc";
	char src[] = "def";
	char dest2[10] = "123";
	char src2[] = "456";

	strcat(dest, src);
	printf("%s\n", dest);
	ft_strcat(dest2, src2);
	printf("%s\n", dest2);

	//EX03 ft_strncat
	char dest3[10] = "abc";
	char src3[] = "def";
	char dest4[10] = "123";
	char src4[] = "456";

	strncat(dest3, src3, 5);
	printf("%s\n", dest3);
	ft_strncat(dest4, src4, 5);
	printf("%s\n", dest4);

	//EX04 ft_strstr
	char str[] = "I love Linux love system";
	printf("%s\n", strstr(str, "om"));
	printf("%s\n", ft_strstr(str, "om"));*/

	//EX05 ft_strlcat
	char dest5[10] = "abc";
	char src5[] = "def";
	char dest6[10] = "123";
	char src6[] = "456";

	int e = strlcat(dest5, src5, 6);
	printf("%s = %d\n", dest5, e);
	int f = ft_strlcat(dest6, src6, 6);
	printf("%s = %d\n", dest6, f);
}