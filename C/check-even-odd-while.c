#include<stdio.h>


int main ()
{
      
    int a,i=1,oddCount=0,EvenCount=0;

    while(i<=10)
    {
        printf("Enter a number = ");
        scanf("%d",&a);
    
        if (a%2==1)
        {
            oddCount++;
        }
        else
        {
            EvenCount++;
        }
        i++;
    };

    printf("\vCount of odd numbers = %d\nCount of even numbers = %d",oddCount,EvenCount);
    return 0; 
}