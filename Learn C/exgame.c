/*Create Rock, scissor and paper Game
player 1: parth
player 2: (computer)
rock vs scissor  - rock win
paper vs scissors - scissor win
paper vs rock - paper win
Write a C prog. to allow user to play this game three times with the computer.
Note : you have to display name of player during the game . Take user as an input from the user.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber(int n)
{
    srand(time(NULL)); // srand take seed as an input and is defined inside stdlib.h
    return rand() % n;
}
int greater(char c1, char c2)
{

    // return 1 if c1>c2 and 0 otherwise. if c1 == c2 it will return -1
    if (c1 == c2)
    {
        return -1;
    }
    else if ((c1 == 'r') && (c2 == 's'))
    {
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's'))
    {
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r'))
    {
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r'))
    {
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p'))
    {
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p'))
    {
        return 0;
    }
}

int main()
{
    int playerscore = 0, computerscore = 0, temp;
    char playerChar, computerChar;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Rock, Paper, Scissors\n");
    printf("Enter the name\n");
    scanf("%s", &playerChar);
    // printf("The name is %c\n", playerChar);
    for (int i = 0; i < 3; i++)
    {

        printf("\n\nYours Turn:\n");
        printf("Choose 1 for Rock\nChoose 2 for Paper\nChoose 3 for Scissor\n");
        scanf("%d", &temp);
        getchar();
        playerChar = dict[temp - 1];
        printf("You choose %c\n\n", playerChar);

        printf("Computer's turn:\n");
        temp = generateRandomNumber(3) + 1;
        computerChar = dict[temp - 1];
        printf("Computer's choose %c\n", computerChar);

        // Compare the score
        if (greater(computerChar, playerChar) == 1)
        {
            computerscore += 1;
            printf("Computer Got it!\n\n");
        }
        else if (greater(computerChar, playerChar) == -1)
        {
            computerscore += 1;
            playerscore += 1;
            printf("It's Draw!\n\n");
        }
        else
        {
            playerscore += 1;
            printf("You Got it!\n\n");
        }
        printf("You: %d\nComputer: %d", playerscore, computerscore);
    }
    if (playerscore > computerscore)
    {
        printf("\n\nYou Win the game\n");
    }
    else if (playerscore < computerscore)
    {
        printf("\n\nComputer Win the game\n");
    }
    else
    {
        printf("\n\nIt's Draw\n");
    }

    return 0;
}