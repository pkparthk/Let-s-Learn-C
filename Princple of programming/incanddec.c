/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 10, b = 5, c;
    c = a++ + ++a + b++;
    printf("The value of c is %d", c);
    return 0;
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a = 10, b = 5, c, d, e, f;
    d = a++ ;
    printf("The value of d is %d\n", d);
    e = ++a;
    printf("The value of e is %d\n", e);
    f = b++;
    printf("The value of f is %d\n", f);

    c = d + e + f;
    printf("The value of c is %d\n", c);
    return 0;
}