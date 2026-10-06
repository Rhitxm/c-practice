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


