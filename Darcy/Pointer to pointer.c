// Task: Declare int x = 5, int *p = &x, int **pp = &p. 
// Print x using all three: x, *p, and **pp. 
// Then change **pp = 50 and print x.

#include <stdio.h>

int main(void)
{
 int x = 5;
 int *p = &x;
 int **pp = &p;

  printf("x = %d\n",x);
  printf("*p = %d\n",*p);
  printf("**pp = %d\n",**pp);

  **pp = 50;
  printf("The new Value = %d",x);

  return 0;
  
}
