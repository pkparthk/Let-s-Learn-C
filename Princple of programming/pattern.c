#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/*int main()
{
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 0; j < 5; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}*/

/*int main()
{
    int i, j;
    for ( i = 0; i < 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    return 0;
}*/

/*int main()
{
    int i, j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            printf("%d\t", i);
        }
        printf("\n");
    }
    return 0;
}*/

int main()
{
    int i, j, n;
    j = 4;
    for (i = 1; i <=10; i++)
    {
        n = i*j;
        printf("%d * %d = %d\n", j, i, n);
    }
    printf("\n");
    return 0;
}

/*int main()
{
    int i, j;
    for ( i = 1; i <= 5; i++)
    {
        for ( j = 5; j >= i; j--)
        {
            printf("%d\t", j);
        }
        printf("\n");
    }
    return 0;
}*/