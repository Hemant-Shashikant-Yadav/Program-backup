#include <stdio.h>
#include <string.h>

int main()
{

    char a[50];
    int i = 0, sp = 0, ep = 0, len, max = 0;

    printf("Enter string = ");
    gets(a);

    while (1)
    {
        if (a[i] == 32 || a[i] == '\0')
        {
            ep = i - 1;
            len = ep - sp + 1;

            max = (len > max) ? len : max;
            if (a[i] == '\0')
            {
                break;
            }
            sp = i + 1;
        }
        i++;
    }
    printf("\nmax len = %d", max);

    return 0;
}