#include <stdio.h>

int main()
{
    float price1, price2, price3, price4, price5, total;

    // Input prices of 5 items
    printf("Enter price of item 1: ");
    scanf("%f", &price1);

    printf("Enter price of item 2: ");
    scanf("%f", &price2);

    printf("Enter price of item 3: ");
    scanf("%f", &price3);

    printf("Enter price of item 4: ");
    scanf("%f", &price4);

    printf("Enter price of item 5: ");
    scanf("%f", &price5);

    // Calculate total bill
    total = price1 + price2 + price3 + price4 + price5;

    // Display total bill
    printf("\nTotal Bill = Rs. %.2f\n", total);

    return 0;
}
