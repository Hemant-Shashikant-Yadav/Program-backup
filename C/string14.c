#include<stdio.h>
#include<string.h>


int main ()
{
      
    int i,j;
    char a[50],ch;

    printf("Enter string = ");
    gets(a);

    i=0;
    j=strlen(a)-1;
    while (i<j)
    {
        ch=a[i];
        a[i]=a[j];
        a[j]=ch;
        i++;
        j--;
    }
        
    puts(a);

    return 0; 
}