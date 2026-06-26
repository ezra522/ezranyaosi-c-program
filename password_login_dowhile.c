#include <stdio.h>
#include <string.h>

int main() {
    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    char password[20];
    char correctPassword[] = "1234";

    // Do-while loop ensures at least one attempt
    do {
        printf("Enter password: ");
        scanf("%s", password);

        if (strcmp(password, correctPassword) != 0) {
            printf("Wrong password! Try again.\n\n");
        }

    } while (strcmp(password, correctPassword) != 0);

    printf("\nAccess Granted\n");

    return 0;
}
