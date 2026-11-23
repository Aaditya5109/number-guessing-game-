#include <stdio.h>

int main() {
    int secretNumber = 7; // The secret number to guess
    int guess;

    printf("=== Welcome to the Number Guessing Game! ===\n");
    printf("Guess a number between 1 and 10: ");
    
    // Take input from the user
    scanf("%d", &guess);

    // Check if the guess is correct
    if (guess == secretNumber) {
        printf("🎉 Congratulations! You guessed it right!\n");
    } else if (guess > secretNumber) {
        printf("Too high! Try again next time.\n");
    } else {
        printf("Too low! Try again next time.\n");
    }

    return 0;
}