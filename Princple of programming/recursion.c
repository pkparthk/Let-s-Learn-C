/*#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int fact(int n);
int main()
{
    int res, n;
    printf("Enter the value n\n");
    scanf("%d", &n);
    res = fact(n);
    printf("factorial of %d is %d", n, res);
    return 0;
}
int fact(int n)
{
    if (n>1)
    {
        return n * fact(n - 1);
    }
    else
    {
        return 1;
    }
}*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int fib(int n);
int main()
{
    int n, i, res;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for (i = 1; i < n; i++)
    {
        res = fib(i);
    }
    printf("The fibbronacci od %d is %d\n", n, res);

    return 0;
}
int fib(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return (fib(n - 1) + fib(n - 2));
    }
}