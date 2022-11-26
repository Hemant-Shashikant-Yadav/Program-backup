/*
1.Length must be more than 8
2.Must have at least one uppercase,lowercase,digit,special char(# or @)
*/

#include <stdio.h>

int main()
{

    int isValid(char[]);
    char p[50];

    printf("Enter password = ");
    gets(p);

    if (isValid(p) == 1)
    {
        printf("Valid password.");
    }
    else
    {
        printf("Invalid Password");
    }

    return 0;
}
int isValid(char a[])
{
    int i = 0, lc = 0, uc = 0, dc = 0, sc = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            lc++;
        }
        else if (a[i] >= 'A' && a[i] <= 'Z')
        {
            uc++;
        }
        else if (a[i] >= '0' && a[i] <= '9')
        {
            dc++;
        }
        else if (a[i] == '#' || a[i] == '@')
        {
            sc++;
        }
        i++;
    }
    return lc && uc && dc && sc && (i > 7);
}