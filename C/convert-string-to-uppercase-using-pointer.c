#include <stdio.h>

int main()
{

    char p[50];
    char *i = p;

    printf("Enter string = ");
    gets(p);

    while (*i != '\0')
    {
        if (*i >= 97 && *i <= 122)
        {
            *i -= 32;
        }
        i++;
    }

    i = p + 0;
    printf("String = ");
    while (*i != '\0')
    {
        printf("%c", *i);
        i++;
    }

    return 0;
}