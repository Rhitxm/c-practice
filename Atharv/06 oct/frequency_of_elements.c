// Write a C program to input n integers into an array and print the frequency of every distinct element.

#include <stdio.h>

void input(int arr[], int n);
void frequency(int arr[], int n);

int main()
{
    int n;

    printf("Enter n :");
    scanf("%d", &n);
    int arr[n];
    printf("Enter numbers :");
    input(arr, n);

    frequency(arr, n);
    return 0;
}

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void frequency(int arr[], int n)
{
    int large = arr[0];
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            large = arr[i];
        }
    }

    for (int i = 0; i <= large; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == i)
            {

                count++;
            }
        }
        if (count > 0)
        {
            printf("Frequency of %d is : %d \n", i, count);
            count = 0;
        }
    }
}
// better approach by gpt
/*

void frequency(int arr[], int n)
{
    int count;
    int alreadyFound;

    for (int i = 0; i < n; i++)
    {
        alreadyFound = 0;

        // Check whether this element appeared before
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                alreadyFound = 1;
                break;
            }
        }

        // If already found, skip it
        if (alreadyFound == 1)
        {
            continue;
        }

        // Count frequency
        count = 0;

        for (int j = 0; j < n; j++)
        {
            if (arr[j] == arr[i])
            {
                count++;
            }
        }

        printf("Frequency of %d is: %d\n", arr[i], count);
    }
}
*/