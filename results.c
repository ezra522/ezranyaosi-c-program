#include <stdio.h>

struct Student
{
    char name[50];
    char regNo[20];
    float marks;
};

int main()
{
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");

    if (fp == NULL)
    {
        printf("File not found.\n");
        return 1;
    }

    printf("Student Results\n");
    printf("-----------------------------\n");

    while (fread(&s, sizeof(struct Student), 1, fp) == 1)
    {
        printf("Name : %s\n", s.name);
        printf("Marks: %.2f\n", s.marks);
        printf("\n");
    }

    fclose(fp);

    return 0;
}
