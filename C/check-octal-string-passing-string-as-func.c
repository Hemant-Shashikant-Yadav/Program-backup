#include <stdio.h>

int main()
{

    char p[50];
    int checkOctal(char[]);

    printf("Enter string = ");
    scanf("%s", &p);

    if (checkOctal(p) == 0)
    {
        printf("Not octal");
    }
    else
    {
        printf("Octal");
    }

    return 0;
}
int checkOctal(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= '0' && a[i] <= '7')
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