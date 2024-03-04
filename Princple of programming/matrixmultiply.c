#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int A[20][20], B[20][20], C[20][20], m, n, i, j, k, p, q;
    printf("Enter size of matrix A\n");
    scanf("%d %d", &m, &n);
    printf("Enter size of matrix B\n");
    scanf("%d %d", &p, &q);
    if (n != p)
    {
        printf("Matrix Multiply is not Possible\n");
    }
    else
    {
        printf("Enter the element A\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &A[i][j]);
            }
        }
        printf("Enter the element B\n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &B[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        printf("The resultant matrix is\n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%5d", C[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}