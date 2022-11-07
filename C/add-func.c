//write a c program to write addition of two numbers using function

#include<stdio.h>

int add(int x, int y); //function declaration

int main ()
{
      
    int a,b,sum;

    printf("Enter the number 1 = ");
    scanf("%d",&a);

    printf("Enter the number 1 = ");
    scanf("%d",&b);

    sum = add(a,b); // function calling

    printf("The addition of two numbers is = %d",sum);
    return 0; 
}

int add(int x, int y)  // function defination
{
    int sum;
    sum = x + y;
    return sum;
}