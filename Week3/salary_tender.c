#include <stdio.h>

int main(void)
{
    int choice;

    printf("========================================\n");
    printf(" MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf(" PAP521S - WEEK 3 AND 4\n");
    printf("========================================\n");

    printf("\n1. Employee Salary Calculator\n");
    printf("2. Tender Evaluation System\n");
    printf("3. Exit\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1)
    {
        printf("Invalid input. Please enter a number.\n");
        return 1;
    }

    switch (choice)
    {
        case 1:
        {
            double basicSalary;
            double housing;
            double transport;
            double tax;
            double grossSalary;
            double netSalary;

            printf("\nEMPLOYEE SALARY CALCULATOR\n");
            printf("--------------------------\n");

            printf("Enter basic salary: ");
            if (scanf("%lf", &basicSalary) != 1 || basicSalary < 0)
            {
                printf("Invalid salary amount.\n");
                return 1;
            }

            printf("Enter housing allowance: ");
            if (scanf("%lf", &housing) != 1 || housing < 0)
            {
                printf("Invalid housing allowance.\n");
                return 1;
            }

            printf("Enter transport allowance: ");
            if (scanf("%lf", &transport) != 1 || transport < 0)
            {
                printf("Invalid transport allowance.\n");
                return 1;
            }

            printf("Enter tax: ");
            if (scanf("%lf", &tax) != 1 || tax < 0)
            {
                printf("Invalid tax amount.\n");
                return 1;
            }

            grossSalary = basicSalary + housing + transport;
            netSalary = grossSalary - tax;

            printf("\nSALARY REPORT\n");
            printf("--------------------------\n");
            printf("Basic Salary        : NAD %.2f\n", basicSalary);
            printf("Housing Allowance   : NAD %.2f\n", housing);
            printf("Transport Allowance : NAD %.2f\n", transport);
            printf("Tax                 : NAD %.2f\n", tax);
            printf("Gross Salary        : NAD %.2f\n", grossSalary);
            printf("Net Salary          : NAD %.2f\n", netSalary);

            if (netSalary >= 20000)
            {
                printf("Income Category     : High Income\n");
            }
            else
            {
                printf("Income Category     : Standard Income\n");
            }

            break;
        }

        case 2:
        {
            char supplierName[100];
            double tenderPrice;
            double budget;
            int registered;
            int documentsComplete;

            printf("\nTENDER EVALUATION SYSTEM\n");
            printf("--------------------------\n");

            printf("Enter supplier name (one word): ");
            if (scanf("%99s", supplierName) != 1)
            {
                printf("Invalid supplier name.\n");
                return 1;
            }

            printf("Enter tender price: ");
            if (scanf("%lf", &tenderPrice) != 1 || tenderPrice < 0)
            {
                printf("Invalid tender price.\n");
                return 1;
            }

            printf("Enter available budget: ");
            if (scanf("%lf", &budget) != 1 || budget < 0)
            {
                printf("Invalid budget.\n");
                return 1;
            }

            printf("Is the supplier registered? (1=Yes, 0=No): ");
            if (scanf("%d", &registered) != 1 ||
                (registered != 0 && registered != 1))
            {
                printf("Enter 1 for Yes or 0 for No.\n");
                return 1;
            }

            printf("Are all documents complete? (1=Yes, 0=No): ");
            if (scanf("%d", &documentsComplete) != 1 ||
                (documentsComplete != 0 && documentsComplete != 1))
            {
                printf("Enter 1 for Yes or 0 for No.\n");
                return 1;
            }

            printf("\nTENDER EVALUATION REPORT\n");
            printf("--------------------------\n");
            printf("Supplier Name : %s\n", supplierName);
            printf("Tender Price  : NAD %.2f\n", tenderPrice);
            printf("Available Budget: NAD %.2f\n", budget);

            if (registered == 1 &&
                documentsComplete == 1 &&
                tenderPrice <= budget)
            {
                printf("Supplier Status: QUALIFIED\n");
            }
            else
            {
                printf("Supplier Status: DISQUALIFIED\n");
            }

            break;
        }

        case 3:
            printf("\nThank you for using the system.\n");
            break;

        default:
            printf("\nInvalid choice. Select 1, 2, or 3.\n");
    }

    return 0;
}
