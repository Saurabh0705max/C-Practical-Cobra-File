#include <stdio.h>

int main()
{
    int attendance, totalPresent = 0;

    // Input attendance for 30 days
    for (int day = 1; day <= 30; day++)
    {
        printf("Enter attendance for day %d (1 = Present, 0 = Absent): ", day);
        scanf("%d", &attendance);

        if (attendance == 1)   // Check if student is present
        {
            totalPresent++;
        }
    }

    // Display total present days
    printf("\nTotal days student was present: %d\n", totalPresent);

    return 0;
}
