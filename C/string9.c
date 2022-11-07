#include<stdio.h>


int main ()
{
      
    char a[20];
    int i=0;

    printf("Enter string = ");
    gets(a);

    while (a[i]!='\0')
    {
        if (a[i]>='0'&&a[i]<='9')
        {
            i++;
        }
        else
        {
            break;
        }
    }

    if (a[i]=='\0')
    {
        printf("Decimal string");
    }
    else
    {
        printf("Not Decimal string");
    } 
      
    return 0; 
}