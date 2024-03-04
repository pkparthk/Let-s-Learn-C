#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n;
    char name[20];
    float amt;
    printf("Enter the consumer name\n");
    scanf("%s", &name);
    printf("Enter the unit consumed by consumer\n");
    scanf("%d", &n);
    if (n<=200)
    {
        amt = n * 0.8;
    }
    else if (n>200&&n<=300)
    {
        amt = 200 * 0.8;
        amt = (amt + (n * 0.9));
    }
    else
    {
        amt = ((200 * 0.8) + (100 * 0.9));
        amt = (amt + ((n - 300) * 1.0));
    }
    amt = amt + 100;
    if (amt>400)
    {
        amt = (amt + (0.15 * amt));
        printf("Total bill of %s is of %.2f\n", name, amt);
    }
    else{
        printf("Total bill of %s is of %.2f\n", name, amt);
    }
    return 0;
}