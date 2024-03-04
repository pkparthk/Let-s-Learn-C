#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char name[20];
    int a, b, c, d, e;
    float percentage;
    printf("Enter the name of student\n");
    scanf("%s", &name);
    printf("Enter the marks of each subject of student\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    percentage = ((a + b + c + d + e) / 500.0)*100.0;
    if (percentage>= 70)
    {
        printf("You will pass by First Division and Percentage is %f\nAnd Promoted to Next Class\n", percentage);
    }
    else if (percentage>= 60)
    {
        printf("you will pass by Second Division and Percentage is %f\nAnd Promoted to Next Class\n", percentage);
    }
    else if (percentage>50)
    {
        printf("you will pass by Third Division and Percentage is %f\nAnd Promoted to Next Class\n", percentage);
    }
    else if (percentage>=40)
    {
        printf("you will Just pass and Percentage is %f\nAnd Promoted to Next Class\n", percentage);
    }
    else{
        printf("you will Not Pass and Percentage is %f\nAnd Not Promoted to Next Class\n", percentage);
    }
    return 0;
}