#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, i, sume, sumo;
    printf("Enter the no n\n");
    scanf("%d", &n);
    for (i = 1; i <=n; i++)
    {
        if (i % 2 == 0)
        {
            sume = sume + i;
            printf("The sum of even no. is %d\n", sume);
        }
        else
        {
            sumo = 0;
            sumo = sumo + i;
            printf("The sum of odd no. is %d\n", sumo);
        }
    }
    return 0;
}