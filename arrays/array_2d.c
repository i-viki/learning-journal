#include <stdio.h>

/* 2D Arrays / Matrix - TN 11th Std */
int main()
{
    int a[3][3], b[3][3], c[3][3];
    int i, j, k;

    printf("Enter Matrix A (3x3):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter Matrix B (3x3):\n");
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    /* Matrix Addition */
    for(i = 0; i < 3; i++)
        for(j = 0; j < 3; j++)
            c[i][j] = a[i][j] + b[i][j];

    printf("Matrix A + B:\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
    return 0;
}
