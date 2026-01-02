#include <stdio.h>

int main()
{
    float distance, total = 0;

    // Input daily walking distance for 30 days
    for (int day = 1; day <= 30; day++)
    {
        printf("Enter distance walked on day %d (in km): ", day);
        scanf("%f", &distance);

        total += distance;  // Add daily distance to total
    }

    // Display total distance walked in the month
    printf("\nTotal kilometers walked in 30 days: %.2f km\n", total);

    return 0;
}
