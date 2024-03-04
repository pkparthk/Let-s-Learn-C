#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char a[20], b[20];
    int i, count = 0;
    printf("Enter the string\n");
    gets(a);
    for ( i = 0; a[i]!='\0'; i++)
    {
        count += 1;
    }
    for ( i = 0; i<count; i++)
    {
        b[i] = a[count-i-1];
    }
    b[i]='\0';
    printf("Reverse of %s is %s", a, b);
    return 0;
}