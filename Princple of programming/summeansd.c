#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a[10], *ptr, mean = 0, sum = 0, sd = 0, sumsd = 0;
    int i, n;
    printf("Enter the number of element\n");
    scanf("%d", &n);
    printf("enter the element\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%f", &a[i]);
    }
    ptr = a;
    for ( i = 0; i < n; i++)
    {
        sum = sum + *ptr;
        ptr++;
    }
    mean = sum / n;
    ptr = a;
    for ( i = 0; i < n; i++)
    {
        sumsd = sumsd + pow((*ptr - mean), 2);
        ptr++;
    }
    sd = sqrt(sumsd / n);
    printf("Sum=%f\n", sum);
    printf("Mean=%f\n", mean);
    printf("Standard Deviation=%f", sd);

    return 0;
}