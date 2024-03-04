#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    /*you have to create a command line utility to add/subtract/mult./div. two no 
    first command line argument of your c program must be the operation.
    The next arguments being the two no. for example:
    >>command.c add 45 4
    >>49*/

    char * operation;
    int num1, num2;
    operation = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

    /*printf("Operation is %s\n", operation);
    printf("num1 is %d\n", num1);
    printf("num2 is %d\n", num2);*/

    if(strcmp(operation, "add")==0)
    {
        printf("%d\n", num1 + num2);
    }
    else if(strcmp(operation, "subtract") == 0)
    {
        printf("%d\n", num1 - num2);
    }
    else if(strcmp(operation, "multiply") == 0)
    {
        printf("%d\n", num1 * num2);
    }
    if(strcmp(operation, "divide") == 0)
    {
        printf("%d\n", num1 / num2);
    }

    return 0;
}