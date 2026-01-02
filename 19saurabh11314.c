#include <stdio.h>

int main()
{
    int age, count = 0, i;

    // Input ages of 10 employees
    for (i = 1; i <= 10; i++)
    {
        printf("Enter age of employee %d: ", i);
        scanf("%d", &age);

        if (age >= 30)   // Check if age is 30 or more
        {
            count++;
        }
    }

    // Display the result
    printf("\nNumber of employees aged 30 or older: %d\n", count);

    return 0;
}
