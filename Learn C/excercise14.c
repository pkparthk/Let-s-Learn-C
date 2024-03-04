#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = ((y2 - y1) * (y2 - y1)) + ((x2 - x1) * (x2 - x1));
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}
int main()
{
    int x1, x2, y1, y2;
    float dist;
    // take x1, y1 and x2, y2 from the user using scanf
    printf("Enter the value of x1\n");
    scanf("%d", &x1);
    printf("Enter the value of y1\n");
    scanf("%d", &y1);
    printf("Enter the value of x2\n");
    scanf("%d", &x2);
    printf("Enter the value of y2\n");
    scanf("%d", &y2);
    dist = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("The distance between three points is %f\n", dist);

    return 0;
}