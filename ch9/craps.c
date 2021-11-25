// Name: craps.c
// Author: Connor Davenport
// Date: 11/25/21
// Purpose: Simulates the game of craps

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    bool status;
    char play_again;

    srand((unsigned) time(NULL));

    for (;;) {
        status = play_game();
        if (status) 
            printf("You win!\n");
        else 
            printf("You lose!\n");
        
        printf("Play again? ");

        do {
            scanf("%c", &play_again);
        } while (play_again == '\n');

        if (play_again == 'y') {
            printf("\n");
            continue;
        }
        else 
            break;
    }

    return 0;
}

int roll_dice(void) {
    int d1, d2;

    d1 = rand() % 6;
    d2 = rand() % 6;

    return d1 + d2;
}

bool play_game(void) {
    int roll, point;
    roll = roll_dice();

    printf("You rolled: %d\n", roll);

    if (roll == 7 || roll == 11) 
        return true;
    else if (roll == 2 || roll == 3 || roll == 12)
        return false;
    else {
        point = roll;
        printf("Your point is %d\n", point);

        for (;;) {
            roll = roll_dice();
            printf("You rolled: %d\n", roll);

            if (roll == point) 
                return true;
            else if (roll == 7)
                return false;
            else 
                continue;
        }
    } 
}