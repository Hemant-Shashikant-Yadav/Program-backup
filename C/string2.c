#include <stdio.h>

int main()
{

    char a[50];
    int i = 0;

    printf("Enter string = ");
    gets(a);

    printf("Enter string = ");
    while (a[i] != '\0')
    {
        printf("%c", a[i++]);
    }

    return 0;
}