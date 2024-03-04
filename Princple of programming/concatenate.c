#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char STR1[100], STR2[100], STR3[100];
    int i = 0, j = 0, count = 0;
    printf("Enter the str1\n");
    gets(STR1);
    printf("Enter the str2\n");
    gets(STR2);
    while (STR1[i]!='\0')
    {
        STR3[count] = STR1[i];
        count++;
        i++;
    }
    STR3[count++] = ' ';
    while (STR2[j]!='\0')
    {
        STR3[count] = STR2[j];
        count++;
        j++;
    }
    STR3[count] = '\0';
    printf("\n String STR1=\t");
    puts(STR1);
    printf("\n String STR1=\t");
    puts(STR2);
    printf("\n String STR1=\t");
    puts(STR3);
    return 0;
}