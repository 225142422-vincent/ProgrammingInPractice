
#include <stdio.h>

int main(void)
{
    double revenue;
    double expenses;
    double balance;

    printf("========================================\n");
    printf("     MUNICIPAL BUDGET CALCULATOR\n");
    printf("========================================\n");

    printf("Enter total revenue: ");
    if (scanf("%lf", &revenue) != 1) {
        printf("Invalid revenue input.\n");
        return 1;
    }

    printf("Enter total expenses: ");
    if (scanf("%lf", &expenses) != 1) {
        printf("Invalid expenses input.\n");
        return 1;
    }

    balance = revenue - expenses;

    printf("\n========================================\n");
    printf("     MUNICIPAL FINANCIAL REPORT\n");
    printf("========================================\n");
    printf("Total Revenue  : %.2f\n", revenue);
    printf("Total Expenses : %.2f\n", expenses);
    printf("----------------------------------------\n");
    printf("Budget Balance : %.2f\n", balance);
    printf("========================================\n");

    return 0;
}
