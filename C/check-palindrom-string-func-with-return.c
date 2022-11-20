#include <stdio.h>
#include<string.h>
int main()
{

    int IsPalindrome();
    int res = IsPalindrome();

    if (res = 0)
    {
        printf("Not Palindrom");
    }
    else
    {
        printf("Palindrome");
    }

    return 0;
}
int IsPalindrome()
{
    int i = 0, j;
    char p[50];

    printf("Enter string = ");
    gets(p);
    j = strlen(p) - 1;
    while (i < j)
    {
        if (p[i] != p[j])
        {
            break;
        }
        i++;
        j--;
    }
    return (i >= j);
}