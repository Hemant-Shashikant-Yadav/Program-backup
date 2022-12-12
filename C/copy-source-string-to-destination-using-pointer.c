#include <stdio.h>

int main()
{

    char a[50], b[50];
    char *p = a, *q = b;

    printf("Source string = ");
    gets(p);

    while (*p != '\0')
    {
        *p = *q;
        p++;
        q++;
    }

    *q = '\0';
    puts(p);
    puts(q);

    return 0;
}