Write a program that declares int *p = NULL;. 
Before dereferencing, check if (p != NULL). 
  Print "Pointer is NULL" otherwise. Then assign p = &a and safely dereference.

#include <stdio.h>

  int main(void){

  int a = 42;
  int *p = NULL;

  if(p != NULL){
  printf("The value is :%d\n",*p);   //NULL Pointer checker using if statement
  }else{
    printf("The Pointer is NULL \n");
  }

  p = &a;

  if(p != NULL){
   printf("The value after assigning &a");     // assigning the given value
  }
  return 0;
  }

