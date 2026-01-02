#include <stdio.h>

int main()
{
    int i = 10;
    float f = 12.5;
    char c = 'A';
    double d = 45.6789;

    printf("Value of int variable = %d\n", i);
    printf("Size of int = %zu bytes\n\n", sizeof(i));

    printf("Value of float variable = %.2f\n", f);
    printf("Size of float = %zu bytes\n\n", sizeof(f));

    printf("Value of char variable = %c\n", c);
    printf("Size of char = %zu byte\n\n", sizeof(c));

    printf("Value of double variable = %.4lf\n", d);
    printf("Size of double = %zu bytes\n", sizeof(d));

    return 0;
}
