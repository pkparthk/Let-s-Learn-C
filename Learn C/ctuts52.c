#include <stdio.h>
#include <string.h>
int main()
{
    int a = 534;
    float b = 85.45;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int*)ptr));
    ptr = &b;
    printf("The value of b is %f\n", *((float *)ptr));
    return 0;
}