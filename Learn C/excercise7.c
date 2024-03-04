/*You manage a travel agency and you want your n drivers to input their following details:
1. Name
2. Driving License No
3. Route
4. Kms
Your program should be able to take n as input(or you can take n=3 for simplicity) and your drivers
will start inputting their details one by one.

Your program should print details of the drivers in a beautiful fashion.
User structures.
*/

#include <stdio.h>

struct Driver
{
    char name[40];
    char dlNo[11];
    char route[100];
    int Kms;
};

int main()
{
    struct Driver d1, d2, d3;
    printf("Enter the detials of drivers\n");
    printf("Enter the name of first driver\n");
    scanf("%S", &d1.name);

    printf("Enter the dlNo of first driver\n");
    scanf("%S", &d1.dlNo);

    printf("Enter the route of first driver\n");
    scanf("%S", &d1.route);

    printf("Enter the Kms covers by first driver\n");
    scanf("%d", &d1.Kms);

    printf("Enter the detials of second driver\n");
    scanf("%S", &d2.name);

    printf("Enter the dlNo of second driver\n");
    scanf("%S", &d2.dlNo);

    printf("Enter the route of second driver\n");
    scanf("%S", &d2.route);

    printf("Enter the Kms covers by second driver\n");
    scanf("%d", &d2.Kms);

    printf("Enter the detials of third driver\n");
    scanf("%S", &d3.name);

    printf("Enter the dlNo of third driver\n");
    scanf("%S", &d3.dlNo);

    printf("Enter the route of third driver\n");
    scanf("%S", &d3.route);

    printf("Enter the Kms covers by third driver\n");
    scanf("%d", &d3.Kms);

    printf("*********Printing information of these drivers:*****\n ");

    printf("For Driver No 1:\n Name is %s\n", d1.name);
    printf("DL No. %s\n", d1.dlNo);
    printf("Route is %s\n", d1.route);
    printf("Kms covers is %d\n", d1.Kms);

    printf("For Driver No 2:\n Name is %s\n", d2.name);
    printf("DL No. %s\n", d2.dlNo);
    printf("Route is %s\n", d2.route);
    printf("Kms covers is %d\n", d2.Kms);

    printf("For Driver No 3:\n Name is %s\n", d3.name);
    printf("DL No. %s\n", d3.dlNo);
    printf("Route is %s\n", d3.route);
    printf("Kms covers is %d\n", d3.Kms);

    return 0;
}