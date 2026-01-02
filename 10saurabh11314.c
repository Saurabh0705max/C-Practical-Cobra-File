#include <stdio.h>

int main()
{
    float balance;
    float amount;

    // Input initial balance
    printf("Enter current account balance: ");
    scanf("%f", &balance);

    // Deposit amount
    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    // Update balance using assignment operator
    balance += amount;   // balance = balance + amount

    printf("\nBalance after deposit = %.2f\n", balance);

    // Withdraw amount
    printf("\nEnter withdrawal amount: ");
    scanf("%f", &amount);

    // Update balance using assignment operator
    balance -= amount;   // balance = balance - amount

    printf("\nBalance after withdrawal = %.2f\n", balance);

    return 0;
}
