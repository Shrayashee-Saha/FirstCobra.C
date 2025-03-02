#include <stdio.h>
#include <stdlib.h>

// Function declarations for the game modes
void infinityRun(int level);
void trappedInBox(int level);

void startGame() {
    int levelChoice, gameModeChoice;

    // Ask the player to choose a level
    printf("\nChoose a difficulty level:\n");
    printf("1. Easy \n");
    printf("2. Medium \n");
    printf("3. Hard \n");
    printf("Enter your choice: ");
    scanf("%d", &levelChoice);

    // Validate the level input
    if (levelChoice < 1 || levelChoice > 3) {
        printf("Invalid choice! Please select a valid level.\n");
        return;
    }

    // Set level based on user choice
    int level;
    switch (levelChoice) {
        case 1: level = 1; break;
        case 2: level = 10; break;
        case 3: level = 100; break;
    }

    printf("You chose level: %d\n", level);

    // Ask the player to choose a game mode
    printf("\nChoose a game mode:\n");
    printf("1. Infinity Run\n");
    printf("2. Trapped in Box\n");
    printf("Enter your choice: ");
    scanf("%d", &gameModeChoice);

    // Validate the game mode input
    if (gameModeChoice < 1 || gameModeChoice > 2) {
        printf("Invalid choice! Please select a valid game mode.\n");
        return;
    }

    // Handle game mode choice
    switch (gameModeChoice) {
        case 1:
            printf("You chose Infinity Run.\n");
            infinityRun(level);  // Call Infinity Run game logic
            break;
        case 2:
            printf("You chose Trapped in Box.\n");
            trappedInBox(level);  // Call Trapped in Box game logic
            break;
    }
}

