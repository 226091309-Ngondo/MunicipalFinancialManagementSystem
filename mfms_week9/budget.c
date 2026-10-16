
#include <stdio.h>
#include "budget.h"

float budgets[10];
int budgetCount=0;

void addBudget(void) {
    if(budgetCount>=10) {
        printf("Budget list is full.\n");
        return;
    }

    printf("Enter department budget: ");
    scanf("%f",&budgets[budgetCount]);

    budgetCount++;

    printf("Budget added successfully.\n");
}

void listBudgets(void) {
    if(budgetCount==0) {
        printf("No budgets found.\n");
        return;
    }

    for(int i=0;i<budgetCount;i++) {
        printf("Department %d budget: %.2f\n",
               i+1,budgets[i]);
    }
}

double calculateBudgetBalance(void) {
    double total=0;

    for(int i=0;i<budgetCount;i++) {
        total=total+budgets[i];
    }

    return total;
}
