#include <stdio.h>

int main()
{
    int choice;

    // Input color choice
    printf("Enter a color (1 = Red, 2 = Yellow, 3 = Green): ");
    scanf("%d", &choice);

    // Switch statement to display color
    switch (choice)
    {
        case 1:
            printf("You selected Red.\n");
            break;
        case 2:
            printf("You selected Yellow.\n");
            break;
        case 3:
            printf("You selected Green.\n");
            break;
        default:
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
    }

    return 0;
}
