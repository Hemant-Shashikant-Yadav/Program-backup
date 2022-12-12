#include <stdio.h>

int main()
{

    char x[50];
    int *i = x;

    printf("Enter string = ");
    gets(x);

    printf("String = ");
    while (*i != '\0')
    {
        printf("%c", *p);
        i++;
    }

    return 0;
}