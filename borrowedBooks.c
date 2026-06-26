#include <stdio.h>

int main()
{
    FILE *file;
    char bookTitle[100];

    // Open file in append mode (does not delete existing records)
    file = fopen("borrowed_books.txt", "a");

    // Check if file opened successfully
    if(file == NULL)
    {
        printf("Error opening file.\n");
        return 1;
    }

    // Enter book title
    printf("Enter the title of the borrowed book: ");
    fgets(bookTitle, sizeof(bookTitle), stdin);

    // Store title in file
    fprintf(file, "%s", bookTitle);

    // Close file
    fclose(file);

    // Confirmation message
    printf("Book title successfully stored in borrowed_books.txt\n");

    return 0;
}
