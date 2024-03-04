#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, d, rp, ip, r1, r2;
    printf("Enter the value of a, b, c of quadratic equation\n");
    scanf("%f %f %f", &a, &b, &c);
    printf("The Qudratic equation is d= %.fx^2 + %.fx + %.f\n", a, b, c);
    d = (b*b) - (4 * a * c);
    if (d==0)
    {
        printf("The root of the eq. is real and equal\n");
        r1 = -b / 2*a;
        r2 = r1;
        printf("The value of root 1:=%f\nroot2:=%f\n", r1, r2);
    }
    else if (d>0)
    {
        printf("The roots of the eq. is real and distinct\n");
        r1 = ((-b) + sqrt((b * b) - (4 * a * c))) /(2 * a);
        r2 = ((-b) - sqrt((b * b) - (4 * a * c))) / (2 * a);
        printf("The value of root 1:=%f\nroot2:=%f\n", r1, r2);
    }
    else
    {
        printf("The roots of the eq. are imaginary\n");
        rp = (-b) / (2 * a);
        ip = sqrt(fabs(d)) / (2 * a);
        printf("The value of root 1:=%f+i%f\nroot2:=%f-i%f\n", rp, ip, rp, ip);
    }    
    return 0;
}