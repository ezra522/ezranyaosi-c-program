#include <stdio.h>

int main() {
    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    // Variables
    float attendance, averageMarks;

    // User input
    printf("Enter attendance percentage: ");
    scanf("%f", &attendance);

    printf("Enter average marks: ");
    scanf("%f", &averageMarks);

    // Checking eligibility
    if (attendance >= 75 && averageMarks >= 40) {
        printf("\nEligible for final exams.\n");
    } else {
        printf("\nNot eligible.\n");
    }

    return 0;
}
