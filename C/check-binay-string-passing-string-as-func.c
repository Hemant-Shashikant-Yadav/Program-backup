#include <stdio.h>

int main()
{

    char p[50];
    int checkBinary(char[]);

    printf("Enter string = ");
    scanf("%s",&p);

    if (checkBinary(p) == 0)
    {
        printf("Not Binay");
    }
    else
    {
        printf("Binary");
    }

    return 0;
}
int checkBinary(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] != '0' && a[i] != '1')
        {
            break;
        }
        i++;
    }
    if (a[i] == '\0')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}