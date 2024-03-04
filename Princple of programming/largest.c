#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a[100], i, n, j, big;
    printf("Enter the no. of element in array\n");
    scanf("%d", &n);
    printf("Enter the %d element of an array\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        big = a[0];
        for (j = 1; j < i; j++)
        {
            if (a[j] > big)
            {
                big = a[j];
            }
        }
    }
    printf("largest %d\n", big);
    return 0;
}

/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int i, inp, big=0;
    printf("Enter ");
    scanf("%d", &i);
    for ( ;i >0;i--)
    {
        scanf("%d", &inp);
        if(inp<0 && big<0)
        {
            if(inp>big)
            big = inp;
        }
        if (inp>big)
        {
            big = inp;
        }

    }
    printf("%d", big);
    return 0;
}*/