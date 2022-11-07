#include <stdio.h>
#include <string.h>


//Copy string in lowercase
int main()
{

    int i=0, j=0;
    char a[50], b[50];

    printf("Enter string = ");
    gets(a);

    while (a[i]!='\0')
    {
        if (a[i]>='A'&&a[i]<='Z')
        {
            b[i]=a[i]+32;
        }
        else
        {
            b[i]=a[i];
        }
        i++;        
    }
    b[i]='\0';

    puts(a);
    puts(b);

    return 0;
}