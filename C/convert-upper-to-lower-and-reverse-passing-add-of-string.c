#include <stdio.h>

int main()
{

    char p[50];
    int i = 0;
    void reverse(char *);

    printf("Enter string = ");
    gets(p);
    puts(p);

    while (p[i] != '\0')
    {
        reverse(&p[i]);
        i++;
    }

    puts(p);
    return 0;
}
void reverse(char *b)
{
    if (*b >= 97 && *b <= 122)
    {
        *b -= 32;
    }
    else if (*b >= 65 && *b <= 90)
    {
        *b += 32;
    }
}