include <stdio.h>

int main() {

    // Variable declarations
    float height = 1.75;
    double bankBalance = 50000.00;
    char phoneNumber[] = "0718079959";

    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    // Display user details
    printf("----- User Details -----\n");
    printf("Height: %.2f meters\n", height);
    printf("Bank Balance: Ksh %.2lf\n", bankBalance);
    printf("Phone Number: %s\n", phoneNumber);

    return 0;
}
