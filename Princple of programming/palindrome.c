#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int n, temp, digit, rev;
    printf("Enter the value\n");
    scanf("%d", &n);
    temp = n;
    rev = 0;
    while (n!=0)
    {
        digit = n %10;
        rev = rev * 10 + digit;
        n = n/10;
    }
    if (temp == rev)
    {
        printf("The given no %d is palindrome\n", temp);
    }
    else
    {
        printf("The given no %d is not palindrome\n", temp);
    }
    return 0;
}