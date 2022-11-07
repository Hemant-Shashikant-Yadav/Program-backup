#include<stdio.h>


int main ()
{
      
    char a;

    printf("Enter a character = ");
    scanf("%c",&a);

    printf("The entered character %c is %s ",a,((a=='1'||a=='0')?"Binary":"Not Binary"));
      
    return 0; 
}