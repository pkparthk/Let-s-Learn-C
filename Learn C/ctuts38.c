#include <stdio.h>

typedef struct Student
{
    int id;
    int main;
    char fav_char;
    char name[34];
} std;

int main()
{
    std s1, s2;
    s1.id = 56;
    s2.id = 89;
    printf("The value of s1's Id is %d\n", s1.id);
    printf("The value of s2's Id is %d\n", s2.id);
    
    return 0;
}