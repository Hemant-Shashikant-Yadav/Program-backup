#include <stdio.h>

int main()
{
    char p[50];

    int CheckUppercase(char[]);

    printf("Enter string = ");
    gets(p);

    if (CheckUppercase(p) == 1)
    {
        printf("Uppercase Sting.");
    }
    else
    {
        printf("Other string.");
    }

    return 0;
}
int CheckUppercase(char a[])
{
    int i = 0, flag = 1;
    while (a[i] != '\0')
    {
        if (a[i] >= 'a' && a[i] <= 'z')
        {
            break;
            flag = 0;
        }

        i++;
    }
    return flag;
}