/*#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int a[100], i, j, n, temp;
    printf("Enter the no. of element of an array\n");
    scanf("%d", &n);
    printf("Enter the %d array element\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        for (j = 0; j < n - 1; j++)
        {
            for (j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    temp = a[i];
                    a[i] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }
    printf("Sorted element array are\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}*/

/*int main()
{
    int i, j, n, temp;
    int a[5] = {96, 10, 0, 11, 85};
    //printf("Enter the no. of element of an array\n");
    //scanf("%d", &n);
    //printf("Enter the %d array element\n", n);
    for (i = 0; i < 5; i++)
    {
        //scanf("%d", &a[i]);
        for ( j = i+1; j < 5; j++)
        {
            if (a[j]>a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        
    }
    printf("Sorted element array are\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }
    return 0;
}*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[100], n, i, j, temp;
    printf("Enter the elements in array\n");
    scanf("%d", &n);
    printf("Enter the array element\n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for ( i = 0; i < n-1; i++)
    {
        for ( j = 0; j < n-i-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        
    }
    printf("The sorted array is \n");
    for ( i = 0; i < n; i++)
    {
        printf("%d", a[i]);
    }
    

    return 0;
}