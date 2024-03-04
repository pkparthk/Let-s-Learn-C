#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter the First Matrix\n");
    for (int i = 1; i <= 3; i++)
    {
    for (int j = 1; j <= 4; j++)
        {
        //printf("Enter the %d %d element of first matrix\n", i, j);
        scanf("%d", &a[i][j]);
        //printf("\t");
        }
        //printf("\n");
    }
    printf("Enter the Second Matrix\n");
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            //printf("Enter the %d %d element of first matrix\n", i, j);
            scanf("%d", &b[i][j]);
            //printf("\t");
        }
        //printf("\t");
    }
    for (int i = 1; i <= 3; i++)
    {
        for (int j = 1; j <= 2; j++)
        {
            //calculate the result
            for (int k = 1; k <= 4 ; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
        }
    }
    //print the result
    for (int i = 1; i <= 3; i++)
    {
    for (int j = 1; j <= 2; j++)
    {
            printf("%d\t", result[i][j]);
    }
    printf("\n");
    }
    
    return 0;
}