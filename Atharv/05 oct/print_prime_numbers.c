//Write a C program to input two numbers L and R and print all prime numbers between them.

#include <stdio.h>

int main()
{
    int L, R, i, j, isPrime;

    printf("Enter the range: ");
    scanf("%d %d", &L, &R);

    for (i = L; i <= R; i++)
    {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1)
            printf("%d ", i);
    }

    return 0;
}
