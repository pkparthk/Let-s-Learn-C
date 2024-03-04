#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[100], i, n, sume=0, sumo=0;
    printf("Enter the no. of element in array\n");
    scanf("%d", &n);
    printf("Enter %d element of an array\n", n);
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] % 2 == 0)
        {
            sume = sume + a[i];
        }
        else
        {
            sumo = sumo + a[i];
        }
    }
    printf("The sum of even no is %d\n", sume);
    printf("The sum of odd no. is %d\n", sumo);
    return 0;
}