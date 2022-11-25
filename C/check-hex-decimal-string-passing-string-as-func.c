#include <stdio.h>

int main()
{

    char p[50];
    int checkHexDcimal(char[]);

    printf("Enter string = ");
    scanf("%s", &p);

    if (checkHexDcimal(p) == 0)
    {
        printf("Not Hexadecimal");
    }
    else
    {
        printf("Hexadecimal");
    }

    return 0;
}
int checkHexDcimal(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        if ((a[i] >= '0' && a[i] <= '9')||(a[i] >= 'A' && a[i] <= 'F') )
        {
            i++;
        }
        else
        {
            break;
        }
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