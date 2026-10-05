//Write a C program to print Hello, World!

#include <stdio.h>

int main() {
printf("hello world\n");
    
    return 0;
}

//Write a program to input your name, age, and marks and display them.

#include <stdio.h>

int main() {
    char name[100];
    int age;
    float cgpa;
    printf("enter your name:\n");
    scanf("%s", &name);
    // printf("your name is: %s", name);
    printf("enter you age:\n");
    scanf("%d", &age);
    // printf("your age is:%d", age);
    printf("enter your cgpa\n");
    scanf("%f", &cgpa);
    // printf("your cgpa is: %f", cgpa);

     printf("your name is: %s\n", name);
     printf("your age is:%d\n", age);
     printf("your cgpa is: %f\n", cgpa);
    
    
    return 0;
}

//Write a program to input two integers and print their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int a;
    int b;
    printf("enter your first number:\n");
    scanf("%d", &a);
    printf("enter your second number:\n");
    scanf("%d", &b);
    int sum=a+b;
    printf("sum of entered numbers are: %d\n", sum);
    int differ=a-b;
    printf("difference of two numbers are: %d\n",differ);
    int prod=a*b;
    printf("product of two numbers are: %d\n", prod);
    int div=a/b;
    printf("quotient of two numbers are: %d\n", div);
    
    return 0;
}

