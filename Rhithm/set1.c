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
    //sum
    int sum=a+b;
    printf("sum of entered numbers are: %d\n", sum);
    //difference
    int differ=a-b;
    printf("difference of two numbers are: %d\n",differ);
    //product
    int prod=a*b;
    printf("product of two numbers are: %d\n", prod);
    //quotient
    int div=a/b;
    printf("quotient of two numbers are: %d\n", div);
    
    return 0;
}

//Write a program to calculate the area and perimeter of a rectangle.

#include <stdio.h>

int main() {
    int length;
    int breadth;
    printf("enter your desired value of length:");
    scanf("%d", &length);
    printf("enter your desired value of breadth:");
    scanf("%d", &breadth);
    //area of the rectangle
    int area=length*breadth;
    printf("area of rectangle is: %d\n", area);
    //perimeter of rectangle
    int perimeter=2*(length+breadth);
    printf("perimeter of rectangle is: %d\n", perimeter);
    
    return 0;
}

//Write a program to calculate the area and circumference of a circle..

#include <stdio.h>

int main() {
    float r;
    printf("enter radius:");
    scanf("%f", &r);
    //area
    float area=3.14*r*r;
    printf("area of circle is: %f\n", area);
    //perimeter
    float perimeter=2*3.14*r;
    printf("perimeter of circle is: %f\n", perimeter);
   
    
    return 0;
}

//Write a program to convert Celsius to Fahrenheit.

#include <stdio.h>

int main() {
    float c;
    printf("enter temperature in celcius:");
    scanf("%f", &c);
    float f=(c*9/5)+32;
    printf("temperature is fahrenhite is: %f\n", f);

    return 0;
}

//Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int a=10;
    int b=20;
    int c;
    c=b;
    b=a;
    a=c;
    printf("a=%d\n",a);
    printf("b=%d\n", b);


    return 0;
}

//Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a=10;
    int b=20;
    a=b;
    b=a/2;
    printf("a=%d\n",a);
    printf("b=%d\n", b);
    
    return 0;
}

//Write a program to input a number and print its square and cube.

#include <stdio.h>

int main() {
    int a;
    printf("enter a number:");
    scanf("%d", &a);
    
    //square
    int sq=a*a;
    printf("square of entered number is=%d\n", sq);
    //cube
    int cube=a*a*a;
    printf("cube of entered number is=%d\n", cube);
    
    
    return 0;
}

