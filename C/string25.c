#include <stdio.h>

int main()
{

    char p[50], ch;
    int i = 0, j = 0, rem, no;

    printf("Enter no = ");
    scanf("%d", &no);

    while (no > 0)
    {
        rem = no % 16;
        if (rem < 10)
        {
            ch = (char)(48 + rem);
        }
        else
        {
            ch = (char)(55 + rem);
        }

        p[j++] = ch;
        no /= 16;
    }
    p[j--] = '\0';

    while (i < j)
    {
        ch = p[i];
        p[i] = p[j];
        p[j] = ch;
        i++;
        j--;
    }

    puts(p);

    return 0;
}