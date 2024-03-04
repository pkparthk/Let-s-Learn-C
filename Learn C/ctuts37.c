#include <stdio.h>
struct Student
{
    int id;
    int marks;
    char fav_char;
};  

int main()
{
    struct Student parth, hari, arpit;
    parth.id = 1;
    hari.id = 2;
    arpit.id = 3;
    parth.marks = 500;
    hari.marks = 400;
    arpit.marks = 466;
    parth.fav_char = 'p';
    hari.fav_char = 'p';
    arpit.fav_char = 'p';
    printf("Parth gots %d marks\n", parth.marks);

    return 0;
}