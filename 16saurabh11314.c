#include <stdio.h>

int main()
{
    int units;
    float bill;

    // Input electricity units
    printf("Enter total units consumed: ");
    scanf("%d", &units);

    // Bill calculation using conditions
    if (units <= 100)
    {
        bill = units * 1.50;
    }
    else if (units <= 200)
    {
        bill = (100 * 1.50) + (units - 100) * 2.50;
    }
    else
    {
        bill = (100 * 1.50) + (100 * 2.50) + (units - 200) * 4.00;
    }

    // Display bill
    printf("Total Electricity Bill = Rs. %.2f\n", bill);

    return 0;
}
