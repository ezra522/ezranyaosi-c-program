#include <stdio.h>

int main()
{
    int occupancy[5][10];
    int occupied, vacant;
    int floor, room;

    // Input room occupancy data
    printf("Enter room occupancy data:\n");
    printf("Enter 1 for Occupied and 0 for Vacant\n\n");

    for(floor = 0; floor < 5; floor++)
    {
        printf("Floor %d:\n", floor + 1);

        for(room = 0; room < 10; room++)
        {
            printf("Room %d: ", room + 1);
            scanf("%d", &occupancy[floor][room]);
        }

        printf("\n");
    }

    // Display occupied and vacant rooms per floor
    printf("--- Room Occupancy Report ---\n");

    for(floor = 0; floor < 5; floor++)
    {
        occupied = 0;
        vacant = 0;

        for(room = 0; room < 10; room++)
        {
            if(occupancy[floor][room] == 1)
            {
                occupied++;
            }
            else
            {
                vacant++;
            }
        }

        printf("Floor %d:\n", floor + 1);
        printf("Occupied Rooms = %d\n", occupied);
        printf("Vacant Rooms = %d\n\n", vacant);
    }

    return 0;
}
