#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    // Seed random number
    srand(time(0));
    number = rand() % 100 + 1; // 1 to 100 random number

    printf("🎉 Welcome to Number Guessing Game! 🎉\n");
    printf("Guess the number between 1 to 100:\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Too high! Try again.\n");
        }
        else if (guess < number) {
            printf("Too low! Try again.\n");
        }
        else {
            printf("\n🎊 Correct! You guessed the number in %d attempts! 🎊\n", attempts);
        }

    } while (guess != number);

    return 0;
}