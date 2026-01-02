#include <stdio.h>

int main()
{
    float basic, hra, da, pf, gross, net;

    // Input basic salary
    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    // Calculations
    hra = 0.20 * basic;
    da  = 0.10 * basic;
    pf  = 0.08 * basic;

    gross = basic + hra + da;
    net = gross - pf;

    // Display results
    printf("\nSalary Details\n");
    printf("Basic Salary : %.2f\n", basic);
    printf("HRA (20%%)    : %.2f\n", hra);
    printf("DA (10%%)     : %.2f\n", da);
    printf("PF (8%%)      : %.2f\n", pf);
    printf("Gross Salary : %.2f\n", gross);
    printf("Net Salary   : %.2f\n", net);

    return 0;
}
