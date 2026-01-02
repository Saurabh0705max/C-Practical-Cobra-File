#include <stdio.h>

int main()
{
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Nested if-else to find largest
    if (a >= b)
    {
        if (a >= c)
        {
            printf("%d is the largest number.\n", a);
        }
        else
        {
            printf("%d is the largest number.\n", c);
        }
    }
    else
    {
        if (b >= c)
        {
            printf("%d is the largest number.\n", b);
        }
        else
        {
            printf("%d is the largest number.\n", c);
        }
    }

    return 0;
}
