#include <stdio.h>

/* Operators in C - TN 11th Std */
int main()
{
    int a = 10, b = 3;

    /* Arithmetic operators */
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    /* Relational operators */
    printf("a > b: %d\n", a > b);
    printf("a == b: %d\n", a == b);

    /* Logical operators */
    printf("(a>5) && (b<5): %d\n", (a > 5) && (b < 5));
    return 0;
}
