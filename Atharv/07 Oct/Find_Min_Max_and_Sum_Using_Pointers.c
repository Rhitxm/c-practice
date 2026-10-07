/*
Write a C program to input n integers into an array and find:

Maximum element
Minimum element
Sum of all elements

Use pointers for accessing the array elements.
*/

#include <stdio.h>

void min(int *ptr, int n);
void max(int *ptr, int n);
void sum(int *ptr, int n);
void input(int *ptr, int n);

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int arr[n];
    int *ptr = &arr[0];

    printf("Enter numbers :");
    input(ptr, n);

    max(ptr, n);
    min(ptr, n);
    sum(ptr, n);
}

void min(int *ptr, int n)
{
    int small = *ptr;

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) < small)
        {
            small = (*(ptr + i));
        }
        else
        {
            continue;
        }
    }

    printf("Minimum Element is : %d\n", small);
}

void max(int *ptr, int n)
{
    int big = *ptr;

    for (int i = 0; i < n; i++)
    {
        if (*(ptr + i) > big)
        {
            big = (*ptr + i);
        }
        else
        {
            continue;
        }
    }

    printf("Maximum Element is : %d \n", big);
}

void sum(int *ptr, int n)
{
    int s = 0;

    for (int i = 0; i < n; i++)
    {
        s += *(ptr + i);
    }

    printf("Sum of elements is : %d \n", s);
}

void input(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (ptr + i));
    }
}
