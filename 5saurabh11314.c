#include <stdio.h>

int main()
{
    int x = 5, a, b;

    // Pre-increment
    a = ++x + 10;   // x is incremented first, then used
    printf("After pre-increment:\n");
    printf("x = %d\n", x);
    printf("a = %d\n\n", a);

    // Reset x
    x = 5;

    // Post-increment
    b = x++ + 10;   // x is used first, then incremented
    printf("After post-increment:\n");
    printf("x = %d\n", x);
    printf("b = %d\n", b);

    return 0;
}
