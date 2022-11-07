#include <stdio.h>

int main()
{
    char a[50];
    int i = 0, uc = 0, lc = 0, dc = 0, oc = 0;

    printf("Enter string = ");
    gets(a);

    while (a[i] != '\0')
    {
        if (a[i] >= 65 && a[i] <= 91)
        {
            uc++;
        }
        else if (a[i] >= 97 && a[i] <= 122)
        {
            lc++;
        }
        else if (a[i] <= 48 && a[i] >= 57)
        {
            dc++;
        }
        else
        {
            oc++;
        }

        printf("Upper case count = %d\nLower case count = %d\nDigit case count = %d\nOther case count = %d", uc, lc, dc, oc);
    }

    return 0;
}