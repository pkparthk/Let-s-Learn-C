#include <stdio.h>

int main()
{
    int prize;
    char subject[1];
    printf("enter your subject\n");
    scanf("%s",&subject);

    printf("you have entered %s your subject\n", subject);
    if (subject == "maths")
    {
        printf("congratulation you won 50Rs");
    }
    if (subject == "science")
    {
        printf("congratulation you won 50Rs");
    }
    else if ("subject== maths and science")
    {
        printf("congratulation you won 100Rs");
    }
    
    return 0;
}