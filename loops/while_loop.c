#include <stdio.h>

/* While and Do-While Loop - TN 11th Std */
int main()
{
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);
    temp = n;

    /* Reverse of a number using while */
    while(temp != 0)
    {
        rev = rev * 10 + temp % 10;
        temp /= 10;
    }
    printf("Reverse of %d is %d\n", n, rev);

    /* Digits until 0 using do-while */
    int count = 0;
    temp = n;
    do {
        count++;
        temp /= 10;
    } while(temp != 0);
    printf("Number of digits: %d\n", count);

    return 0;
}
