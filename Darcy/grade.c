// checking a student grade

#include <stdio.h>

int main()
{
  char Grade;
  printf("Enter your grade: ");
    scanf("%c",&Grade);

  switch(Grade)
  {
    case 'A' : 
      printf("Excelent!!");
       break;

    case 'B' :
      printf("You did just alright");
       break;

    case 'C' :
      printf("You did Poorly");
       break;

    case 'D' :
     printf("You did Badly");
      break;

    case 'F' :
     printf("You Failed");
      break;
    
    default :
     printf("Invalid Grade");
    
  }
  return 0;
}
