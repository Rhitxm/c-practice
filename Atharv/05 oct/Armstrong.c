#include <stdio.h>
#include <math.h>

int main()
{
    int n, a, b, c, d, e;

    printf("Enter N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        d = 0;
        a = 0;
        b = i;
        e = i;

        // Count number of digits
        while (b != 0)
        {
            b = b / 10;
            d++;
        }

        // Reset b
        b = i;

        // Separate digits and calculate Armstrong sum
        while (b != 0)
        {
            c = b % 10;
            a += pow(c, d);

            b = b / 10;
        }

        if (a == e)
        {
            printf("%d ", e);
        }
    }

    return 0;
}
