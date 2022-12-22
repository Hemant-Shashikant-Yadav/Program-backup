#include <stdio.h>

int main()
{

    char p[50];
    int i = 0;
    void toUpper(char *);

    printf("Enter string = ");
    gets(p);
    puts(p);

    toUpper(p);

    puts(p);
    return 0;
}
void toUpper(char *b)
{
    while (*b != '\0')
    {
        if (*b >= 65 && *b <= 90)
        {
            *b += 32;
        }
        b++;
    }
}