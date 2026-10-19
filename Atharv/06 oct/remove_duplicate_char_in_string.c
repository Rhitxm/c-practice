//Write a C program to remove duplicate characters from a string.

/*    DON'Ts:
    1. Do not use a second string/array to store the result.
    2. Do not use library functions that directly remove duplicates.
    3. Do not sort the string.
*/


#include <stdio.h>
#include <string.h>

void filter(char arr[]);

int main(){

    char arr[500];

    printf("Enter Word(s) : ");
    fgets(arr , sizeof(arr), stdin);
    filter(arr);

}

void filter(char arr[]){
    int duplicate;
    int n = strlen(arr);

    for (int i =0; i < n; i++){
        duplicate = 0;

        for (int j = 0; j<i ; j++){
            if(arr[i] == arr[j]){
                duplicate = 1;

            }
        }

        if(duplicate == 0){
            printf("%c", arr[i]);
        }
        

    }
}
