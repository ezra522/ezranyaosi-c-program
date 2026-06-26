#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    int secretNumber, guess, attempts = 0;

    // Generate random number between 1 and 20
    srand(time(0));
    secretNumber = (rand() % 20) + 1;

    printf("=== NUMBER GUESSING GAME ===\n");
    printf("Guess a number between 1 and 20\n");

    // Loop until correct guess
    do {
        printf("\nEnter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > secretNumber) {
            printf("Too high!\n");
        } else if (guess < secretNumber) {
            printf("Too low!\n");
        } else {
            printf("Congratulations!\n");
            printf("You got it in %d attempts.\n", attempts);
        }

    } while (guess != secretNumber);

    return 0;
}
