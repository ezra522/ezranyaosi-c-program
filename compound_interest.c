#include <stdio.h>
#include <math.h>

int main() {

    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    // Variables
    float principal, rate, time, compoundInterest, amount;

    // Input
    printf("Enter principal amount: ");
    scanf("%f", &principal);

    printf("Enter time (in years): ");
    scanf("%f", &time);

    printf("Enter rate (in percentage): ");
    scanf("%f", &rate);

    // Calculate amount using compound interest formula
    amount = principal * pow((1 + rate / 100), time);

    // Compound Interest = Amount - Principal
    compoundInterest = amount - principal;

    // Output
    printf("\nCompound Interest = %.2f\n", compoundInterest);
    printf("Total Amount = %.2f\n", amount);

    return 0;
}
