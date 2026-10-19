//Write a function to find the squares
#include<stdio.h>
#include<math.h>
int main(){
    int n, sq;
    printf("enter the number your want the square of:");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        sq=pow(i, 2);
        printf("%d\n", sq);
    }

return 0;
}
