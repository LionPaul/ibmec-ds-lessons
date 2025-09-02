#include <stdio.h>

int main ()
{
    char name[50];
    float grossSalary, netSalary, deduction;

    printf("Enter the name: ");
    scanf("%s", name);

    printf("Enter the gross salary: ");
    scanf("%f", &grossSalary);

    deduction = grossSalary * 0.115;
    netSalary = grossSalary - deduction; 

    printf("\n--- Results ---\n");
    printf("Name: %s", name);
    printf("Gross Salary: %.2f\n", grossSalary);
    printf("Net Salary: %.2f\n", netSalary);

    return 0; 
}