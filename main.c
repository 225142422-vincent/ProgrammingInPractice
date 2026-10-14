#include <stdio.h>

int main()
{
    char municipality[50];
    char mayor[50];
    int population;

    printf("========================================\n");
    printf("MUNICIPAL FINANCIAL MANAGEMENT SYSTEM\n");
    printf("========================================\n");
    printf("Welcome to Windhoek Municipality\n\n");

    printf("Enter Municipality Name: ");
    scanf("%49s", municipality);

    printf("Enter Mayor's Name: ");
    scanf("%49s", mayor);

    printf("Enter Population: ");
    scanf("%d", &population);

    printf("\n========================================\n");
    printf("       MUNICIPAL INFORMATION REPORT\n");
    printf("========================================\n");
    printf("Municipality Name : %s\n", municipality);
    printf("Mayor's Name      : %s\n", mayor);
    printf("Population        : %d\n", population);
    printf("========================================\n");

    return 0;
}