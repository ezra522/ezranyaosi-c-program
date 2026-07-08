#include <stdio.h>

int main()
{
    FILE *fp;
    float sale, total = 0;

    fp = fopen("sales.txt", "r");

    if (fp == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    while (fscanf(fp, "%f", &sale) == 1)
    {
        total += sale;
    }

    fclose(fp);

    printf("Total Sales = %.2f\n", total);

    return 0;
}
