#include <stdio.h>

int main()
{

    char p[50];
    int length(char[]);

    printf("Enter string = ");
    gets(p);

    printf("Length of string = %d", length(p));

    return 0;
}
// int length(char a[])
// {
//     return strlen(a);
// }

int length(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        i++;
    }
    return i;
}