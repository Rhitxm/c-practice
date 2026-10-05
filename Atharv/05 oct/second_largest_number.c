// Input n elements into an array and find the second largest distinct element without sorting the array.

#include <stdio.h>

void input(int arr[], int n);
void largest(int arr[], int n);

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    input(arr, n);

    largest(arr, n);

    return 0;
}

void input(int arr[], int n)
{
    printf("Enter numbers: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void largest(int arr[], int n)
{
    int large = arr[0];
    int small = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            small = large; // When you find a new largest, the old largest must become the second largest.
            large = arr[i];
        }
        else if (large > arr[i] && arr[i] > small)
        {
            small = arr[i];
        }
        else
        {
            continue;
        }
    }

    printf("Second Largest no. is : %d", small);
}