#include <stdio.h>

int main()
{
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Arithmetic operations
    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);

    // Division and Modulus (check to avoid division by zero)
    if (b != 0)
    {
        printf("Division = %d\n", a / b);
        printf("Modulus = %d\n", a % b);
    }
    else
    {
        printf("Division and Modulus not possible (division by zero)\n");
    }
