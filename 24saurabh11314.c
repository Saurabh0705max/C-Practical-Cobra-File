#include <stdio.h>

int main()
{
    int month;

    // Input month number
    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    // Switch statement to determine days
    switch(month)
    {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("Month %d has 31 days.\n", month);
            break;
        case 4: case 6: case 9: case 11:
            printf("Month %d has 30 days.\n", month);
            break;
        case 2:
            printf("Month %d has 28 or 29 days (February).\n", month);
            break;
        default:
            printf("Invalid month number! Please enter 1-12.\n");
    }

    return 0;
{