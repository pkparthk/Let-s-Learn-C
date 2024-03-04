#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 30, b;

    b = a;
    printf("The value of b is %d\n", b);

    b += a;
    printf("The value of b is %d\n", b);

    //b-=a;
    //printf("The value of b is %d\n", b);

    b *= a;
    printf("The value of b is %d\n", b);

    //b /= a;
    //printf("The value of b is %d\n", b);
    return 0;
}