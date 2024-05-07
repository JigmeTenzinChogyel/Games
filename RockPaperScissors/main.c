#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // Seed the random number generator with the current time
    srand(time(NULL));

    printf("Welcome to Rock Paper Scissors!\n");
    printf("You will be playing againse the computer\n");
    printf("Enter a for Rock, b for Paper and c for Scissor\n");

    // if r = 0 its rock, r == 1 its paper and r == 2 its scissors
    int r = rand() % 3;

    char choice;
    scanf("%c", &choice);

    if (choice != 'a' && choice != 'b' && choice != 'c') {
        printf("Invalid Choice\n");
        return 0;
    }

    if (r == 0) {
        printf("The computer choose Rock\n");
    } else if (r == 1) {
        printf("The computer choose Paper\n");
    } else {
        printf("The computer choose Scissor\n");
    }

    if (choice == 'a') {
        if (r == 0) {
            printf("Draw\n");
        } else if (r == 1) {
            printf("You Lose!\n");
        } else {
            printf("You Win!\n");
        }
    } else if (choice == 'b') {
        if (r == 0) {
            printf("You Win!\n");
        } else if (r == 1) {
            printf("Draw\n");
        } else {
            printf("You Lose!\n");
        }
    } else if (choice == 'c') {
        if (r == 0) {
            printf("You Lose!\n");
        } else if (r == 1) {
            printf("You Win!\n");
        } else {
            printf("Draw!\n");
        }
    }
    
    return 0;
}