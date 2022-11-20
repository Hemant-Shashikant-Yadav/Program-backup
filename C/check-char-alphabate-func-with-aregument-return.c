#include <stdio.h>

int main()
{

    int res;
    char ch;

    int IsAlphabate(char);

    printf("Enter a character = ");
    scanf("%c", &ch);
    res = IsAlphabate(ch);

    if (res == 0)
    {
        printf("Alphabate char");
    }
    else
    {
        printf("Other char");
    }

    return 0;
}
int IsAlphabate(char ch)
{
    if (ch >= 'A' && ch <= 'Z' || ch >= 97 && ch <= 122)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}