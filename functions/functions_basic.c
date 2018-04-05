#include <stdio.h>

/* Functions in C - TN 11th Std */

int factorial(int n)
{
    if(n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int isPrime(int n)
{
    int i;
    if(n < 2) return 0;
    for(i = 2; i <= n/2; i++)
        if(n % i == 0) return 0;
    return 1;
}

int gcd(int a, int b)
{
    while(b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    printf("Factorial of 5 = %d\n", factorial(5));
    printf("Is 7 prime? %s\n", isPrime(7) ? "Yes" : "No");
    printf("GCD of 12 and 8 = %d\n", gcd(12, 8));
    return 0;
}
