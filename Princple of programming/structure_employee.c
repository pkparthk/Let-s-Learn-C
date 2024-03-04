#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

struct employee
{
    int eid, eage;
    char ename[20];
    float esal;
};

void main()
{
    struct employee e[50];
    int n, i;
    printf("Enter the number of employees\n");
    scanf("%d", &n);
    printf("\n");
    for ( i = 1; i <= n; i++)
    {
        printf("Enter id\n");
        scanf("%d", &e[i].eid);
        printf("enter name\n");
        scanf("%s", &e[i].ename);
        printf("enter age\n");
        scanf("%d", &e[i].eage);
        printf("enter salary\n");
        scanf("%f", &e[i].esal);
    }
    printf("\n**********************************************\n");
    printf("The Details of %d employees are\n", n);
    printf("\n**********************************************\n");
    printf("Empid\t Empname\t empage\t Empsal\t");
    printf("\n...............................................\n");
    for ( i = 0; i < n; i++)
    {
        printf("%d\t %s\t %d\t %.2f\t \n", e[i].eid, e[i].ename, e[i].eage, e[i].esal);
    }
    printf("\n...............................................\n");

}