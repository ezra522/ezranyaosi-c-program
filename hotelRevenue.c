#include <stdio.h>

int main()
{
    float revenue[7];
    float totalRevenue = 0;
    float averageRevenue;
    int i;

    // Input daily revenue
    printf("Enter revenue for each day of the week:\n");

    for(i = 0; i < 7; i++)
    {
        printf("Day %d revenue: KSh. ", i + 1);
        scanf("%f", &revenue[i]);

        totalRevenue = totalRevenue + revenue[i];
    }

    // Calculate average revenue
    averageRevenue = totalRevenue / 7;

    // Display results
    printf("\n--- Weekly Revenue Report ---\n");
    printf("Total Weekly Revenue = KSh. %.2f\n", totalRevenue);
    printf("Average Daily Revenue = KSh. %.2f\n", averageRevenue);

    return 0;
}
