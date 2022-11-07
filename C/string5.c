#include <stdio.h>

int main()
{

    char a[50];
    int i = 0, cnt = 1;

    printf("Enter string = ");
    gets(a);

    while (a[i] != '\0')
    {
        if (a[i] == 32)
        {
            cnt++;
        }
        i++;
    }

    printf("Word count = %d", cnt);

    return 0;
}