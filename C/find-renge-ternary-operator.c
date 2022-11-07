#include<stdio.h>

//Ternary operator

int main ()
{
      
    int a;
    printf("Enter a number = ");
    scanf("%d",&a);

    printf("The no. %d is %s range.",a,((1<=a&&a<=100)?"Within":"Outside"));

      
    return 0; 
}