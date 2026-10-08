//Print :
//*
// **
// ***
// ****
// *****
#include<stdio.h>
int main(){
    char star1[]="*";
    char star2[]="**";
    char star3[]="***";
    char star4[]="****";
    char star5[]="*****";

    printf("%s\n", star1);
    printf("%s\n", star2);
    printf("%s\n", star3);
    printf("%s\n", star4);
    printf("%s\n", star5);
    
        return 0;
    }

//Print :
//    *
//   ***
//  *****
// *******
//*********
#include<stdio.h>
int main(){
    char star1[]="    *";
    char star2[]="   ***";
    char star3[]="  *****";
    char star4[]=" *******";
    char star5[]="*********";

    printf("%s\n", star1);
    printf("%s\n", star2);
    printf("%s\n", star3);
    printf("%s\n", star4);
    printf("%s\n", star5);
    
        return 0;
    }

//Print Floyd's triangle
#include<stdio.h>
int main(){
    int n;
    printf("enter number of rows:");
    scanf("%d", &n);
    int num=1;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
        printf("%d ", num);
            num++;
    }
    printf("\n");
}
return 0;
}
