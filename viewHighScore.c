#include <stdio.h>

const char *highScoreFile = "highscore.txt";

// Function to load the high score
int loadHighScore() {
    FILE *file = fopen(highScoreFile, "r");
    int highScore = 0;
    if (file != NULL) {
        fscanf(file, "%d", &highScore);
        fclose(file);
    }
    return highScore;
}

// Function to save the high score
void saveHighScore(int score) {
    FILE *file = fopen(highScoreFile, "w");
    if (file != NULL) {
        fprintf(file, "%d", score);
        fclose(file);
    }
}