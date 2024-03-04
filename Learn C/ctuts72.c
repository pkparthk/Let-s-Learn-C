#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int sum(int a, int b)
{
    return a + b;
}

void greet()
{
    printf("Hello worlg my user G M\n");
}

int main()
{
    printf("The sum of 1 and 2 is %d\n", sum(1, 2)); //Testing the function
    int (*fptr)(int, int); //declareing the func. pointer
    fptr = &sum; //creatig a function pointer
    int d = (*fptr)(4, 6); //derefrencing the func. pointer
    printf("The value of d is %d\n", d);
    
    return 0;
}