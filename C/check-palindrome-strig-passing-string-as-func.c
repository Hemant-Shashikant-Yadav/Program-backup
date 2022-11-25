#include <stdio.h>
#include <string.h>

int main()
{

    char p[50];
    int checkPalindrome(char[]);

    printf("Enter string = ");
    scanf("%s", &p);

    if (checkPalindrome(p) == 0)
    {
        printf("Not Palindrome");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}
int checkPalindrome(char a[])
{
    int i = 0, j = strlen(a) - 1;
    while (i < j)
    {
        if (a[i] != a[j])
        {
            break;
        }
        i++;
        j--;
    }
    if (i < j)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}