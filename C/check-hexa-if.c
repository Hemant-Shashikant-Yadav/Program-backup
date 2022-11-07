#include<stdio.h>


int main ()
{
      
    char ch;

    printf("Enter a character = ");
    scanf("%c",&ch);

    if (ch>='a'&&ch<='f'||ch>='A'&&ch<='F')
    {
        printf("Hexa alpha.");       
    }
    else if (ch>='0'&&ch<='9')
    {
        printf("Hexa digit.");
    }
    else
    {
        printf("Other.");
    }
    
    
      
    return 0; 
}