#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(int num)
{
    int reversed = 0;
    int originakNumber = num;

    while (num != 0)
    {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    printf("The reversed number %d\n", reversed);
    if (originakNumber == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int number;
    printf("Enter a number to check whether it is a palindrome or not\n");
    scanf("%d", &number);
    if (isPalindrome(number))
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number is not a Palindrome\n");
    }
    return 0;
}