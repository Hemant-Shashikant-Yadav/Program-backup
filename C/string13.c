#include<stdio.h>



int main ()
{
      
    char a[50],b[50];
    int i=0;

    printf("Enter string = ");
    gets(a);

    while (a[i]!='\0')
    {
        b[i]=a[i];
        i++;        
    }
    b[i]='\0';
    
    puts(a);
    puts(b);
      
    return 0; 
}