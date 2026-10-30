//Compare two num using if statement and function

#include <stdio.h>

int max(int num1,int num2)
{
  int result;
  if(num1 > num2){
    result = num1;
  }else{
    result = num2;
  }
  return result;
}

int main ()
{
  printf("%d",max(10,12));
}
