#include <stdio.h>

/* For Loop - TN 11th Std */
int main()
{
    int i, n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    /* Print multiplication table */
    printf("Multiplication table of %d:\n", n);
    for(i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);

    /* Sum of first n numbers */
    for(i = 1; i <= n; i++)
        sum += i;
    printf("Sum of 1 to %d = %d\n", n, sum);

    return 0;
}
