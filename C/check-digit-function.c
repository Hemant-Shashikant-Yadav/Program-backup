#include <stdio.h>

int main()
{

    void IsDigit();
    IsDigit();

    return 0;
}

void IsDigit()
{
    char ch;
    printf("Enter charecter = ");
    scanf("%c", &ch);

    if (ch >= 48 && ch <= 57)
    {
        printf("Digit charecter");
    }
    else
    {
        printf("Other charecter");
    }
}