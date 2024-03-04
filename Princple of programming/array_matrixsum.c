#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
/*int main()
{
    int a[20][20], m, n, i, j, sum = 0;
    printf("Enter the size of array\n");
    scanf("%d %d", &m, &n);
    printf("Enter the array element\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            sum = sum + a[i][j];
        }
        
    }
    printf("sum=%d\n", sum);
    return 0;
}*/


int main()
{
    int a[20][20], b[20][20], sum[20][20], m, n, i, j;
    printf("Enter the size of matrix\n");
    scanf("%d %d", &m, &n);
    printf("Enter the Matrix 1 element\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {  
            scanf("%d", &a[i][j]);
        }
    }
    printf("Matrix 1\n");
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("Enter the Matrix 1 element\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix 2\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("Sum of two matrix\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }
    /*for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            printf("%d\t", sum[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}