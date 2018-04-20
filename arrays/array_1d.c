#include <stdio.h>

/* 1D Arrays - TN 11th Std */
int main()
{
    int a[10], i, n, sum = 0, max, min;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &a[i]);
    }

    max = min = a[0];
    for(i = 0; i < n; i++)
    {
        sum += a[i];
        if(a[i] > max) max = a[i];
        if(a[i] < min) min = a[i];
    }

    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", (float)sum / n);
    printf("Max = %d, Min = %d\n", max, min);
    return 0;
}
