#include <stdio.h>
#include <string.h>

int main()
{

    char a[50];
    int i = 0, sp = 0;

    printf("Enter string = ");
    gets(a);

    while (1)
    {
        if (a[i] == 32 || a[i] == '\0')
        {
            printf("\n%d", sp);
            if (a[i] == '\0')
            {
                break;
            }
            sp = i + 1;
        }
        i++;
    }

    return 0;
}