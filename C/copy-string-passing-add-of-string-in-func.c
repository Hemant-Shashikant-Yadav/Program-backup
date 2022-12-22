#include <stdio.h>

int main()
{

    char a[50], b[50];
    void copy(char *, char *);

    printf("Enter string = ");
    gets(a);
    puts(a);
    copy(a, b);
    puts(b);

    return 0;
}
void copy(char *p, char *q)
{
    while (*p != '\0')
    {
        *q = *p;
        p++;
        q++;
    }
    *q = '\0';
}