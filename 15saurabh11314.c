#include <stdio.h>

int main()
{
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check character type
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        printf("The character is an Alphabet.\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("The character is a Digit.\n");
    }
    else
    {
        printf("The character is a Special Character.\n");
    }

    return 0;
}
