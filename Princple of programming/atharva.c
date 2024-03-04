#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int generateRandomNumber(int n){
    srand(time(NULL));
    return rand() % n;
}
int greater(char c1, char c2){
    if (c1 == c2){
        return -1;
    }
    else if ((c1 == 'r') && (c2 == 's')){
        return 1;
    }
    else if ((c2 == 'r') && (c1 == 's')){
        return 0;
    }
    else if ((c1 == 'p') && (c2 == 'r')){
        return 1;
    }
    else if ((c2 == 'p') && (c1 == 'r')){
        return 0;
    }
    else if ((c1 == 's') && (c2 == 'p')){
        return 1;
    }
    else if ((c2 == 's') && (c1 == 'p')){
        return 0;
    }
}
int main(){
    int player1score = 0, player2score = 0, temp;
    char player1, player2;
    char dict[] = {'r', 'p', 's'};
    printf("Welcome to the Billards\n");
    for (int i = 0; i < 5; i++){
        printf("\n\nPlayer 1's Turn:\n");
        temp = generateRandomNumber(3) + 1;
        getchar();
        player1 = dict[temp - 1];
        printf("Player 1 choose %c\n\n", player1);
        printf("Player 2's turn:\n");
        temp = generateRandomNumber(3) + 1;
        player2 = dict[temp - 1];
        printf("Player2's choose %c\n", player2);
        if (greater(player2, player1) == 1){
            player2score += 58;
            printf("Player2 Got it!\n\n");
        }
        else{
            player1score += 58;
            printf("Player 1 Got it!\n\n");
        }
        printf("Player1: %d\nPlayer2: %d", player1score, player2score);
        printf("\n\nNext Round\n");
    }
    if (player1score > player2score){
        printf("\n\nPlayer 1 Win the game\n");
    }
    else if (player1score < player2score){
        printf("\n\nPlayer 2 Win the game\n");
    }
    return 0;
}