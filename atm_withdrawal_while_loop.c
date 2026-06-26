#include <stdio.h>

int main() {
    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    float balance, withdraw;

    // Initial account balance
    printf("Enter initial account balance: ");
    scanf("%f", &balance);

    // While loop runs as long as balance is greater than 0
    while (balance > 0) {
        printf("\nCurrent Balance: %.2f\n", balance);
        printf("Enter amount to withdraw: ");
        scanf("%f", &withdraw);

        if (withdraw > balance) {
            printf("Insufficient balance! Transaction denied.\n");
        } else {
            balance = balance - withdraw;
            printf("Withdrawal successful.\n");
        }
    }

    printf("\nAccount balance is zero or negative. ATM session ended.\n");

    return 0;
}
