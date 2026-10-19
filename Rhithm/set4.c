//Check whether a number is prime.
#include<stdio.h>
int main(){
    int num;
    int isPrime = 1;
    printf("enter your number:");
    scanf("%d", &num);
    if(num<=1){
        printf("entered number is neither a prime nor a composite number");
    }
    else{
        for(int i=2; i<=(num/2); i++){
            if(num%i ==0){
            isPrime=0;
            break;
            }
        }
        if(isPrime == 1){
            printf("entered number is a prime number");
    }
        else{
            printf("entered number is a composite number");
        }
        return 0;
    }
}


//Print prime numbers between 1 and n.
#include<stdio.h>
int main(){
    int n;
    printf("Enter your last number:");
    scanf("%d", &n);

    printf("prime numbers between 1 and n are:");
    for (int num=2; num<=n;  num++){
        int isPrime=1;

        for(int i=2; i<=num/2; i++){
            if(num%i==0){
                isPrime=0;
                break;
            }
        }
        if(isPrime==1){
            printf("%d\n", num);
        }
    }      
        return 0;
    }

//Find the GCD/HCF of two numbers.
#include<stdio.h>
int main(){
    int a, b;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    printf("HCF of two numbers is: %d\n", a);
return 0;
}

//Find the LCM of two numbers.
#include<stdio.h>
int main(){
    int a, b, max, lcm;
    printf("enter the first number:");
    scanf("%d", &a);
    printf("enter the second number:");
    scanf("%d", &b);
    if(a>b){
        max=a;
    }
    else{
        max=b;
    }
    lcm=max;
    while(lcm%a!=0 || lcm%b!=0){
        lcm++;
    }
    printf("LCM= %d\n", lcm);

return 0;
}
