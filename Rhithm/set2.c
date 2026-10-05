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

//Write a program to check whether a number is even or odd.

#include <stdio.h>

int main() {
    int n;
    printf("enter number:");
    scanf("%d", &n);
    if(n%2==0){
        printf("entered number is even\n");
    }
    else{
        printf("entered number is odd\n");
    }
 
    return 0;
}

//Write a program to find the greater of two numbers.

#include <stdio.h>

int main() {
    int x;
    int y;
    printf("enter first number:");
    scanf("%d", &x);
    printf("enter second number:");
    scanf("%d", &y);
    if(x>y){
        printf("first entered number is greater\n");
    }
    else{
        printf("second entered number is greater\n");
    }
 
    return 0;
}
    
//Write a program to find the greatest of three numbers.

#include <stdio.h>

int main() {
    int x;
    int y;
    int z;
    printf("enter first number:");
    scanf("%d", &x);
    printf("enter second number:");
    scanf("%d", &y);
    printf("enter third number:");
    scanf("%d", &z);
    if (x>y && x>z){
        printf("first entered number is the greatest");
    }
    else if(y>x && y>z){
        printf("second entered number is the greatest");
    }
    else if(z>x && z>y){
        printf("third entered number is the greatest");
    }
    
    return 0;
}
