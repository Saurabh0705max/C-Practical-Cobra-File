#include <stdio.h>
#include <stdlib.h>   // for abs()

int main()
{
    int a, b, max;

    // Input two account balances
    printf("Enter two account balances: ");
    scanf("%d %d", &a, &b);

    // Find maximum without using conditional statements
    max = (a + b + abs(a - b)) / 2;

    // Display result
    printf("Higher account balance = %d\n", max);

    return 0;
}
