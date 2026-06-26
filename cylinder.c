#include <stdio.h>

#define PI 3.142

int main() {

    // Variable declarations
    float radius, height;
    float volume, surfaceArea;

    // Student details
    printf("Name: Ezra Nyaosi\n");
    printf("Registration Number: BDSA-03-0029/2026\n");
    printf("Course: Bachelor of Data Science and Analytics\n\n");

    // User input
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &radius);

    printf("Enter the height of the cylinder: ");
    scanf("%f", &height);

    // Calculations
    volume = PI * radius * radius * height;
    surfaceArea = 2 * PI * radius * (radius + height);

    // Display results
    printf("\n----- Cylinder Results -----\n");
    printf("Volume of Cylinder = %.2f\n", volume);
    printf("Surface Area of Cylinder = %.2f\n", surfaceArea);

    return 0;
}
