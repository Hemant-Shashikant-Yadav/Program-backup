#include <stdio.h>

int main()
{

    char p[50];
    int i = 0;
    void toUpper(char *);

    printf("Enter string = ");
    gets(p);
    puts(p);

    while (p[i] != '\0')
    {
        toUpper(&p[i]);
        i++;
    }

    puts(p);
    return 0;
}
void toUpper(char *b)
{
    if (*b >= 97 && *b <= 122)
    {
        *b -= 32;
    }
}