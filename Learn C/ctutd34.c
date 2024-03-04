#include <stdio.h>

void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    // char str[] = {'P', 'a', 'r', 't', 'h', '\0'};
    char str[6] = "Parth";
    printstr(str);
    return 0;
}