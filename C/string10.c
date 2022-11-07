#include<stdio.h>


int main ()
{
      
    char a[20];
    int i=0;

    printf("Enter string = ");
    gets(a);

    while (a[i]!='\0')
    {
        if (a[i]>='0'&&a[i]<='9'||a[i]>='A'&&a[i]<='F')
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
        printf("Hexa decimal string");
    }
    else
    {
        printf("Not Hexa decimal string");
    } 
      
    return 0; 
}