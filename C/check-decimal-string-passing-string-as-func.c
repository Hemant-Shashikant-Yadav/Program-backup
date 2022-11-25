#include <stdio.h>

int main()
{

    char p[50];
    int checkDcimal(char[]);

    printf("Enter string = ");
    scanf("%s", &p);

    if (checkDcimal(p) == 0)
    {
        printf("Not Decimal");
    }
    else
    {
        printf("Decimal");
    }

    return 0;
}
int checkDcimal(char a[])
{
    int i = 0;
    while (a[i] != '\0')
    {
        if (a[i] >= '0' && a[i] <= '9')
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