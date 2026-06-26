#include <stdio.h>

int main() {

    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    // Variables
    float principal, time, rate, simpleInterest;

    // Input
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter rate: ");
    scanf("%f", &rate);

    // Calculate simple interest
    simpleInterest = (principal * time * rate) / 100;

    // Output result
    printf("\nSimple Interest = %.2f\n", simpleInterest);

    return 0;
}
