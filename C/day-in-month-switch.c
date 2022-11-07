#include<stdio.h>


int main ()
{
    int month,day;

    printf("Enter a month = ");
    scanf("%d", &month);
    
    if (month<1||month>12)
    {
        printf("Invalid Input.");
        return 0;
    }
    
    switch (month)
    {
    case 2:
        day = 28;
        break;
    
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;

    default:
        day = 31;
        break;
    }

    printf("Days in Month %d are = %d",month,day);
      
    return 0; 
}