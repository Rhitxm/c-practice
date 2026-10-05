//Write a program to check whether a number is positive, negative, or zero.

#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);

    if(n<0){
        printf("entered number is negative\n");
    }
    else if(n==0){
        printf("entered number is zero\n");
    }
    else if(n>0){
        printf("entered number is positive\n");
    }
    return 0;
}


