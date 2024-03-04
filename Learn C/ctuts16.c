#include <stdio.h>

int main()
{
    printf("Hello world\n");
    int i, age;
    for (i = 0; i<10; i++)
    {
        printf("%d\nEnter your age\n", i);
        scanf("%d", &age);
        if (age>10)
        {
            goto end;
        }
        if (age>10)
        {
            continue;
        }
        printf("we have not come across any continue statement");
        printf("we have not come across any continue statement");
        printf("we have not come across any continue statement");
        printf("we have not come across any continue statement");
        printf("Parth is a good boy");
        
    }
    
    return 4;
}