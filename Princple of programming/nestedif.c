#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a,b,sum;
    printf("Enter the value a and b\n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("The sum of both the value is %d\n", sum);
    if (sum%2 == 0)
    {
        if (a %2 ==0, b%2==0)
        {
            printf("Both the value is even and\nThe sum of both the value is even\n");
        }
        else
        {
            printf("Both the value is odd and\nThe sum of both the value is even\n");
        }
    }
    else
    {
        printf("Anyone value is odd and\nThe sum of both the value is odd\n");
    }
    return 0;
}