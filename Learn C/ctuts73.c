#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int sum(int a, int b)
{
    return a + b;
}
void greetHelloAndExecute(int (*fptr)(int , int))
{
    printf("Hello world\n");
    printf("the sum of c and d is %d\n", fptr(5, 7));
}

void greetGmAndExecute(int (*fptr)(int, int))
{
    printf("Good Morning user\n");
    printf("the sum of c and d is %d\n", fptr(3, 2));
}

int main()
{
    int (*ptr)(int, int);
    ptr = sum;
    greetHelloAndExecute(ptr);

    return 0; 
}