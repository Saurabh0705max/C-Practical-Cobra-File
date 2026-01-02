#include <stdio.h>

int main()
{
    float price, total = 0;
    int i;

    // Input prices for 5 items
    for (i = 1; i <= 5; i++)
    {
        printf("Enter price of item %d: ", i);
        scanf("%f", &price);
        total += price;  // Add price to total
    }

    // Display total bill
    printf("\nTotal Bill = Rs. %.2f\n", total);

    return 0;
}
