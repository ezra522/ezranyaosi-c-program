#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char title[100];

    // Open file in append mode
    fp = fopen("borrowed_books.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter book title: ");
    fgets(title, sizeof(title), stdin);

    // Write title to file
    fprintf(fp, "%s", title);

    fclose(fp);

    printf("Book title stored successfully.\n");

    return 0;
}
