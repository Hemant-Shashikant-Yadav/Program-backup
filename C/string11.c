#include<stdio.h>
//Convert inputed string to UPPERCASE


int main ()
{
      
    char a[50];
    int i=0;

    printf("Enter string = ");
    gets(a);

    while (a[i]!='\0')
    {
        if (a[i]>=97&&a[i]<=122)
        {
            a[i]-=32;
        }
        i++;        
    }
    
    puts(a);
      
    return 0; 
}