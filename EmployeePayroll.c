#include <stdio.h>
#include <string.h>

// Define structure named Employee
struct Employee {
    char employeeID[20];
    char employeeName[30];
    char department[30];
    float basicSalary;
    float allowance;
};

// Function to calculate Gross Salary
float calculateGrossSalary(struct Employee emp)
{
    return emp.basicSalary + emp.allowance;
}

int main()
{
    // Declare an array of three Employee structures
    struct Employee employees[3];

    int i;

    // Input details of three employees
    for(i = 0; i < 3; i++)
    {
        printf("\nEnter details for Employee %d\n", i + 1);

        printf("Employee ID: ");
        scanf("%s", employees[i].employeeID);

        printf("Employee Name: ");
        scanf("%s", employees[i].employeeName);

        printf("Department: ");
        scanf("%s", employees[i].department);

        printf("Basic Salary: ");
        scanf("%f", &employees[i].basicSalary);

        printf("Allowance: ");
        scanf("%f", &employees[i].allowance);
    }


    // Display Employee Payroll Report
    printf("\n--------------------------------------------------\n");
    printf("\t\tEMPLOYEE PAYROLL REPORT\n");
    printf("--------------------------------------------------\n");

    printf("ID\tName\t\tDepartment\tGross Salary (Ksh)\n");
    printf("--------------------------------------------------\n");


    for(i = 0; i < 3; i++)
    {
        printf("%s\t%s\t\t%s\t\t%.2f\n",
               employees[i].employeeID,
               employees[i].employeeName,
               employees[i].department,
               calculateGrossSalary(employees[i]));
    }

    printf("--------------------------------------------------\n");

    return 0;
}