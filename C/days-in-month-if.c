#include<stdio.h>


int main ()
{
      int day,month;

      printf("Enter a month = ");
      scanf("%d",&month);

      if (month<1||month>12)
      {
        printf("Invlid input.");
        return;
      }
      if (month==2)
      {
        day=28;
      }
      else
      {
        if (month==4||month==6||month==9||month==1)
        {
            day=30;
        }
        else
        {
            day=31;
        }
        
      }
      printf("There are %d days in month %d.",day,month);
      
      
    
      
    return 0; 
}