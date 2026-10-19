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

//Write a program to check whether a given year is a leap year.

#include <stdio.h>

int main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year % 400 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else if (year % 100 == 0) {
        printf("%d is not a leap year.\n", year);
    }
    else if (year % 4 == 0) {
        printf("%d is a leap year.\n", year);
    }
    else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}

// The rule

// A year is a leap year if:

// It is divisible by 400 → leap year
// OR it is divisible by 4 but not by 100 → leap year
// Otherwise → not a leap year

//Write a program to check whether an alphabet is a vowel or consonant.

#include <stdio.h>

int main() {
    char alphabet;
    printf("enter your alphabet:");
    scanf("%c", &alphabet);
    if(alphabet=='a'|| alphabet=='e'|| alphabet=='i' || alphabet=='o'|| alphabet=='u'){
        printf("alphabet is a vowel\n");
    }
    else{
        printf("alphabet is a consonant\n");
    }
    return 0;
}


//Write a program to check whether three given sides can form a triangle and, if so, determine whether it is equilateral, isosceles, or scalene.

#include <stdio.h>

int main() {
    int side1, side2, side3;
    printf("enter first side:");
    scanf("%d", &side1);
    getchar();
    printf("enter second side:");
    scanf("%d", &side2);
    getchar();
    printf("enter third side:");
    scanf("%d", &side3);
    getchar();
    if (side1==0 || side2==0 || side3==0){
        printf("one or more entered values is not a side\n");
    }
    else if(side1+side2>side3 && side1+side3>side2 && side2+side3>side1){
    if(side1==side2 && side2==side3){
        printf("it is an equilateral triangle\n");
    }
    else if(side1==side2 || side1==side3 || side2==side3){
        printf("it is an isosceles triangle\n");
    }
    else{
        printf("it is a scelene triangle\n");
    }
    }
    else{
        printf("entered values does not form a triangle\n");
    }
    return 0;
}
