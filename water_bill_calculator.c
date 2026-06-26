#include <stdio.h>

int main() {
    // Student Details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    // Variables
    float units, bill;

    // Prompt user for input
    printf("Enter the number of water units consumed: ");
    scanf("%f", &units);

    // Calculate water bill
    if (units >= 0 && units <= 30) {
        bill = units * 20;
    }
    else if (units <= 60) {
        bill = units * 25;
    }
    else {
        bill = units * 30;
    }

    // Display total bill
    printf("\nTotal Water Bill = KES %.2f\n", bill);

    return 0;
}
