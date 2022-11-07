#include<stdio.h>


int main ()
{
      
    char ch;

    printf("Enter a character = ");
    scanf("%d",&ch);

    printf("The character is = %s",((ch >='a'&& ch<='f'||ch >='A'&& ch<='F')?"Hexa alpha":(ch >='0'&& ch<='9')?"Hexa digit":"Other"));

    return 0; 
}