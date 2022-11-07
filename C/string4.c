#include<stdio.h>


int main ()
{
      
    char a[50];
    int i =0;

    printf("Enter string = ");
    gets(a);

    while (a[i]!='\0')
    {
        i++;
    }

    printf("String lenth = %d",i);
          
    return 0; 
}