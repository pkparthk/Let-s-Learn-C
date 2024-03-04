#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a, b, ch, res;
    printf("Enter your choice\n");
    scanf("%d", &ch);
    printf("Enter the value \n");
    scanf("%d %d", &a, &b);
    switch (ch)
    {
    case 1:
        res = a + b;
        printf("sum=%d\n", res);
        break;
    case 2:
        res = a - b;
        printf("diff=%d\n", res);
        break;
    case 3:
        res = a * b;
        printf("mul=%d\n", res);
        break;
    case 4:
        res = a / b;
        printf("quotient=%d\n", res);
        break;
    default:
        printf("Invalid Input choice\n");
        break;
    }
    return 0;
}