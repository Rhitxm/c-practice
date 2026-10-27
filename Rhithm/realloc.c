#include <stdio.h>
#include <stdlib.h>
int main()
{
int *ptr, i;
ptr = (int *)malloc(3 * sizeof(int));
for (i = 0; i < 3; i++)
ptr[i] = (i + 1) * 10; // 10 20 30
ptr = (int *)realloc(ptr, 5 * sizeof(int)); // grow to 5 integers
ptr[3] = 40;
ptr[4] = 50;
printf("Elements after realloc: ");
for (i = 0; i < 5; i++)
printf("%d ", ptr[i]);
printf("\n");
free(ptr);
return 0;
}
