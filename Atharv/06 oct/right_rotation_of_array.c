/* Write a C program to rotate an array to the right by k positions.


conditions
    1. Do not sort the array.
    2. Do not change the original array while calculating the rotation.
    3. Do not use library functions for rotating the array.
    4. Do not assume that k will always be smaller than n.
*/

#include <stdio.h>

void input(int arr[], int n);
void shuffle(int arr[], int n, int k);

int main()
{
    int n, k;

    printf("Enter n :");
    scanf("%d", &n);

    int arr[n];

    printf("Enter numbers :");
    input(arr, n);
    printf("Enter k :");
    scanf("%d", &k);

    shuffle(arr, n, k);

    return 0;
}

void input(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void shuffle(int arr[], int n, int k)
{
    int newarr[n];

    for (int i = 0; i < k; i++)
    {
        newarr[i] = arr[n - k + i];
    }

    for (int i = k; i < n; i++)
    {
        newarr[i] = arr[i - k];
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d \t", newarr[i]);
    }

    // for k = 3, newarr[1,2,3] = arr[n - k + i]
    // new[4,5,6] = arr[1,2,3]
}