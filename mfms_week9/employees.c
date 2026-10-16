
#include <stdio.h>
#include "employees.h"

float salaries[50];
int employeeCount=0;

void addEmployee(void) {
    if(employeeCount>=50) {
        printf("Employee list is full.\n");
        return;
    }

    printf("Enter employee salary: ");
    scanf("%f",&salaries[employeeCount]);

    employeeCount++;

    printf("Employee added successfully.\n");
}

void listEmployees(void) {
    if(employeeCount==0) {
        printf("No employees found.\n");
        return;
    }

    for(int i=0;i<employeeCount;i++) {
        printf("Employee %d salary: %.2f\n",
               i+1,salaries[i]);
    }
}

double calculatePayrollTotal(void) {
    double total=0;

    for(int i=0;i<employeeCount;i++) {
        total=total+salaries[i];
    }

    return total;
}
