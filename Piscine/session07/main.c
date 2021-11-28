#include "lib.h"

int     main(void)
{
    /*
    //EX00 ft_strdup
    char str[100] = "Exemple string!";
    char *p = ft_strdup(str);
    char *p2 = strdup(str);
    printf("%s == %s", p, p2);

    //EX01 ft_range
    int i = 0;
    int *arr;
    int min = -2;
    int max = 5;
    arr = ft_range(min, max);
    while (i < (max - min))
    {
        printf("%d\n", arr[i]);
        i++;
    }
    
   //EX02 ft_ultimate_range
   int *range;
   int min = -1;
   int max = 6;
   int i = 0;
   int a = ft_ultimate_range(&range, min, max);
   printf("size = %d\n", a);
   while (i < (max - min))
   {
       printf("%d\n", range[i]);
       i++;
   }
    */

   //EX03 ft_strjoin
   char *strs[] = {"one", "two", "three"};
   char *temp = ft_strjoin(3, &strs[0], "AS");

   printf("%s", temp);

    return (0);
}