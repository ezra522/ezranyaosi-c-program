#include <stdio.h>

int main() {

    // Student Details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    int choice;

    // Display menu
    printf("=== Mobile Data Bundles ===\n");
    printf("1. 100 MB  - 50 KES\n");
    printf("2. 500 MB  - 200 KES\n");
    printf("3. 1 GB    - 350 KES\n");
    printf("4. 2 GB    - 600 KES\n\n");

    // User input
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Switch statement
    switch (choice) {
        case 1:
            printf("\nYou selected 100 MB bundle.\nCost: 50 KES\n");
            break;

        case 2:
            printf("\nYou selected 500 MB bundle.\nCost: 200 KES\n");
            break;

        case 3:
            printf("\nYou selected 1 GB bundle.\nCost: 350 KES\n");
            break;

        case 4:
            printf("\nYou selected 2 GB bundle.\nCost: 600 KES\n");
            break;

        default:
            printf("\nInvalid choice.\n");
    }

    return 0;
}
