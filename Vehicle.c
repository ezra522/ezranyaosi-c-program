#include <stdio.h>
#include <string.h>

// Define structure named Vehicle
struct Vehicle {
    char registrationNo[20];
    char vehicleModel[30];
    char manufacturer[30];
    int yearManufactured;
    float dailyRentalCharge;
};

int main() {

    // Declare a variable of type Vehicle
    struct Vehicle vehicle;

    // Prompt user to enter vehicle details
    printf("Enter Registration Number: ");
    fgets(vehicle.registrationNo, sizeof(vehicle.registrationNo), stdin);
    vehicle.registrationNo[strcspn(vehicle.registrationNo, "\n")] = 0;

    printf("Enter Vehicle Model: ");
    fgets(vehicle.vehicleModel, sizeof(vehicle.vehicleModel), stdin);
    vehicle.vehicleModel[strcspn(vehicle.vehicleModel, "\n")] = 0;

    printf("Enter Manufacturer: ");
    fgets(vehicle.manufacturer, sizeof(vehicle.manufacturer), stdin);
    vehicle.manufacturer[strcspn(vehicle.manufacturer, "\n")] = 0;

    printf("Enter Year Manufactured: ");
    scanf("%d", &vehicle.yearManufactured);

    printf("Enter Daily Rental Charge: ");
    scanf("%f", &vehicle.dailyRentalCharge);


    // Display vehicle registration report
    printf("\n-----------------------------------------\n");
    printf("\tVEHICLE REGISTRATION REPORT\n");
    printf("-----------------------------------------\n");

    printf("Registration No. : %s\n", vehicle.registrationNo);
    printf("Vehicle Model    : %s\n", vehicle.vehicleModel);
    printf("Manufacturer     : %s\n", vehicle.manufacturer);
    printf("Year Manufactured: %d\n", vehicle.yearManufactured);
    printf("Daily Rental Fee : Ksh %.2f\n", vehicle.dailyRentalCharge);

    printf("-----------------------------------------\n");

    return 0;
}