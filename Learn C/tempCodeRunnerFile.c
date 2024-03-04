#include <stdio.h>
#include <string.h>
int main()
{
    int a = 534;
    float b = 84.45;
    void *ptr;
    ptr = &a;
    printf("The value of a is %d\n", *((int*)ptr));
    return 0;
}