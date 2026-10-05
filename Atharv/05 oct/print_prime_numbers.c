// Write a C program to input two numbers L and R and print all prime numbers between them.

#include <stdio.h>

int main()
{
    int n, prime;

    printf("Enter number n: ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("1 is nor prime nor compostite.");
    }
    else if (n == 0)
    {
        printf("1 is nor prime nor compostite.");
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            prime = 1;
            for (int j = 2; j <= (i / 2); j++)
            {
                if (i % j == 0)
                {
                    prime = 0;
                }
            }

            if (prime == 1)
            {
                printf("%d \t", i);
            }
        }
    }
    return 0;
}
