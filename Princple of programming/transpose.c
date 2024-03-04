#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[20][20], b[20][20], i, j, m, n;
    printf("Enter the matrix\n");
    scanf("%d %d", &m, &n);
    for ( i = 0; i < m; i++)
    {
        for ( j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    //b[j][i] = a[i][j];
    printf("Transpose of matrix is\n");
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < m; j++)
        {
            b[j][i] = a[i][j];
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}