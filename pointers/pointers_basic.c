#include <stdio.h>

/* Pointers in C - TN 11th Std */

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int x = 10, y = 20;
    int *p = &x;

    printf("Value of x = %d\n", x);
    printf("Address of x = %p\n", &x);
    printf("Value via pointer = %d\n", *p);

    printf("\nBefore swap: x=%d y=%d\n", x, y);
    swap(&x, &y);
    printf("After swap: x=%d y=%d\n", x, y);

    return 0;
}
