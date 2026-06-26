#include <stdio.h>

// Function to calculate fare
float calculateFare(float distance)
{
    float fareRate = 50;
    float totalFare;

    totalFare = distance * fareRate;

    return totalFare;
}

int main()
{
    float distance, fare;

    printf("Enter distance traveled in kilometers: ");
    scanf("%f", &distance);

    fare = calculateFare(distance);

    printf("Total fare = KSh. %.2f\n", fare);

    return 0;
}
