// Input 10 integers into an array and print them.

#include <stdio.h>

int main() {
    int nums[]={1, 2, 3, 4, 5, 6, 7, 8 ,9, 10};
    printf("First number is : %d\n", nums[0]);
    printf("First number is : %d\n", nums[1]);
    printf("First number is : %d\n", nums[2]);
    printf("First number is : %d\n", nums[3]);
    printf("First number is : %d\n", nums[4]);
    printf("First number is : %d\n", nums[5]);
    printf("First number is : %d\n", nums[6]);
    printf("First number is : %d\n", nums[7]);
    printf("First number is : %d\n", nums[8]);
    printf("First number is : %d\n", nums[9]);

    return 0;
}


// Find the largest element in an array.

#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements in the array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int largest=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    printf("the largest element is: %d\n", largest);

    return 0;
}

// Find the smallest element in an array.

#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements in the array:");
    scanf("%d", &n);

    int arr[n];
    printf("enter the array elements:\n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int smallest=arr[0];

    for(int i=0; i<n; i++){
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    printf("the smallest element is: %d\n", smallest);

    return 0;
}
