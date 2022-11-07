#include<stdio.h>

//ternary operator.

int main ()
{
      
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);

    printf("The no = %d is %s",a,((a>0)?"Positive":(a<0)?"Nigative":"Zero"));
      
    return 0; 
}