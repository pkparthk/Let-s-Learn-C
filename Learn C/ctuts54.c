#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}
int main()
{
    // case1 : De allocation of memory block
    int *ptr = (int *)malloc(7 * sizeof(int));
    ptr[0] = 34;
    ptr[1] = 36;
    ptr[2] = 64;
    ptr[3] = 5;
    free(ptr); //ptr is now a dangling pointer

    // case 2: Function return local variable address
    int *dangPtr = functionDangling(); //ptr is now a dangling pointer

    int *danglingPtr3;
    //case3 : If a variable goes out of scope
    {
        int a = 12;

        danglingPtr3 = &a;
    }
    //Here variable a goes out of scope which means danglingPtr3 is pointing to a location which is freed and hence danglingPtr3 is now a dangling pointer
    return 0;
}

    //WILD POINTER
/*{
    int a = 4354;
    int *ptr; //this is a wild pionter
    // *ptr = 34; //this is not good thing to do
    ptr = &a; //ptr is no longer a wild pointer
    printf("The value of a is %d", *ptr);
    return 0;
}*/