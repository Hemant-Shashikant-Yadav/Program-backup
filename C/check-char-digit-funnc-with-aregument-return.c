#include <stdio.h>

int main()
{

    int res;
    char ch;

    int IsDigit(char);

    printf("Enter a character = ");
    scanf("%c", &ch);
    res = IsDigit(ch);

    if (res == 0)
    {
        printf("Digit char");
    }
    else
    {
        printf("Other char");
    }

    return 0;
}
int IsDigit(char ch)
{
    if (ch >= 48 && ch <= 57)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}