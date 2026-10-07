//Print numbers from 1 to 100 using a for loop.

#include <stdio.h>

int main() {
    for(int i=1; i<=100; i++){
        printf("%d\n", i);
    }
    return 0;
}

//Print all even numbers between 1 and 100.

#include <stdio.h>

int main() {
    
    for(int i=0; i<=100; i++){
        if(i%2==0){
        printf("%d\n", i);
        }    
    }
    return 0;
}

//Print all odd numbers between 1 and 100.

#include <stdio.h>

int main() {
    
    for(int i=0; i<=100; i++){
        if(i%2!=0){
        printf("%d\n", i);
        }    
    }
    return 0;
}

//Find the sum of numbers from 1 to n

#include <stdio.h>

int main() {
    int sum=0;
    int n;
    printf("enter number:");
    scanf("%d", &n);
    for(int i=0; i<=n; i++){
        sum=sum+i;
    }
    printf("sum of numbers is: %d\n", sum);
    return 0;
}


//Find the factorial of a number.

#include <stdio.h>

int main() {
    int fact=1;
    int n;
    printf("enter number:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        fact=fact*i;
    }
    printf("factorial of numbers is: %d\n", fact);
    return 0;
}

//Print the multiplication table of a given number

#include<stdio.h>
int main(){
    int n;
    printf("enter your number:");
    scanf("%d", &n);
    for(int i=1; i<=10; i++){
        int table=n*i;
        printf("%d\n", table);
    }
    return 0;
}


//Count the number of digits in an integer.

#include<stdio.h>
int main(){
    int n;
    printf("enter your number:");
    scanf("%d", &n);
    int count=0;
    if(n==0){
        count=1;
        printf("number of digits in entered number are: %d\n", count);
    }
    else{
        while(n!=0){
            n=n/10;
            count++;
        }
        printf("number of digits in entered number are: %d\n", count);
    }
     return 0;   
    }


//Find the sum of digits of a number.

#include<stdio.h>
int main(){
    int n;
    printf("enter your number:");
    scanf("%d", &n);
    int sum=0, remainder;
    if(n<0){
        n=-n;
    }
    while(n>0){
        remainder=n%10;
        sum+=remainder;
        n=n/10;  
    }
    printf("sum of the numbers in the entered integer is: %d\n", sum); 
     return 0;   
    }

//Reverse a given integer.
#include<stdio.h>
int main(){
    int num, remainder, reverse=0;
    printf("enter your number:");
    scanf("%d", &num);

    while(num>0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num/=10;
    }
    printf("reverse of the following number is: %d", reverse);
    return 0;
}

//Check whether a number is a palindrome.
#include<stdio.h>
int main(){
    int num, original, remainder, reverse=0;
    printf("enter your number:");
    scanf("%d", &num);
    original=num;

    while(num>0){
        remainder=num%10;
        reverse=reverse*10+remainder;
        num=num/10;
    }
    if(original==reverse){
    printf("the number is a palindrome");
    }
    else{
        printf("the number is not a palindrome");
    }
    return 0;
}
