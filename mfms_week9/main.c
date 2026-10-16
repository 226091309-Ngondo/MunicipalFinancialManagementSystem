
#include <stdio.h>
#include "employees.h"
#include "budget.h"
#include "utilities.h"
#include "reports.h"

int main(void) {
    int choice;

    do {
        printf("\n===== MFMS =====\n");
        printf("1. Add Employee\n");
        printf("2. View Employees\n");
        printf("3. Add Budget\n");
        printf("4. View Budgets\n");
        printf("5. Employee Report\n");
        printf("6. Budget Report\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d",&choice);

        switch(choice) {
            case 1:
                addEmployee();
                break;

            case 2:
                listEmployees();
                break;

            case 3:
                addBudget();
                break;

            case 4:
                listBudgets();
                break;

            case 5:
                employeeReport();
                break;

            case 6:
                budgetReport();
                break;

            case 7:
                printf("Exiting MFMS...\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

        if(choice!=7) {
            pauseScreen();
        }

    } while(choice!=7);

    return 0;
}
