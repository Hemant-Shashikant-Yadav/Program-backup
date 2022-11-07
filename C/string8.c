#include<stdio.h>


int main ()
{
      
    char a[20];
    int i=0;

    printf("Enter string = ");
    gets(a);

    while (a[i]!='\0')
    {
        if (a[i]=='0'||a[i]=='1')
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
        printf("Binary string");
    }
    else
    {
        printf("Not binary string");
    } 
      
    return 0; 
}