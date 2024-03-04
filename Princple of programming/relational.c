#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 9, b = 4, c;
    c = a > b;
    printf("return the value %d\n", c);
    c = a < b;
    printf("return the value %d\n", c);
    c = a >= b;
    printf("return the value %d\n", c);
    c = a <= b;
    printf("return the value %d\n", c);
    c = a == b;
    printf("return the value %d\n", c);
    c = a != b;
    printf("return the value %d\n", c);
    return 0;
}