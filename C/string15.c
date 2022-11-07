#include <stdio.h>
#include <string.h>

int main()
{

    int i, j;
    char a[50], b[50];

    printf("Enter string = ");
    gets(a);

    i = 0;
    j = strlen(a);
    for (b[j--] = '\0'; j >= 0; j--, i++)
    {
        b[i] = a[j];
    }

    puts(b);

    return 0;
}