#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, i, fac;
    printf("Enter the no. for factorial\n");
    scanf("%d", &n);
    fac = 1;
    for (i = 1; i <= n; i++)
    {
        fac = fac * i;
    }
    /*for (i = n; i >=1; i--)
    {
        fac = fac * i;
    }*/
     printf("The factorial of the number %d is %d\n", n,fac);
    return 0;
}