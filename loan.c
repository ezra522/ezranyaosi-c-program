#include <stdio.h>

int main() {

    int age;
    float income;

    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-00292026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    // Input from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (Ksh): ");
    scanf("%f", &income);

    // Decision making
    if (age >= 21 && income >= 21000) {
        printf("\nCongratulations you qualify for a loan.\n");
    }
    else {
        printf("\nUnfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
