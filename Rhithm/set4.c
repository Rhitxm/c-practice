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
