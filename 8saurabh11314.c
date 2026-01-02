#include <stdio.h>
#include <string.h>

int main()
{
    char username[20], password[20];

    // Correct credentials stored in system
    char correctUsername[] = "admin";
    char correctPassword[] = "12345";

    // Input from user
    printf("Enter Username: ");
    scanf("%s", username);

    printf("Enter Password: ");
    scanf("%s", password);

    // Authentication check
    if (strcmp(username, correctUsername) == 0 &&
        strcmp(password, correctPassword) == 0)
    {
        printf("\nLogin Successful! Welcome.\n");
    }
    else
    {
        printf("\nInvalid Username or Password.\n");
    }

    return 0;
}
