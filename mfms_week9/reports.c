
#include <stdio.h>
#include "reports.h"
#include "employees.h"
#include "budget.h"

void employeeReport(void) {
    printf("\n--- Employee Report ---\n");

    listEmployees();

    printf("Total payroll: %.2f\n",
           calculatePayrollTotal());
}

void budgetReport(void) {
    printf("\n--- Budget Report ---\n");

    listBudgets();

    printf("Total budget: %.2f\n",
           calculateBudgetBalance());
}
