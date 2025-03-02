#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

// Function declarations
void startGame();
void viewHighScore();
void showCredits();

int main() {
    int choice;

    while (1) {  // Display the main menu
        printf("\n======================\n");
        printf(" Cobra Snake Game \n");
        printf("======================\n");
        printf("1. Start Game\n");
        printf("2. View High Score\n");
        printf("3. Game Credits\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                startGame();
                break;
            case 2:
                viewHighScore();
                break;
            case 3:
                showCredits();
                break;
            case 4:
                printf("Exiting the game......\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}


