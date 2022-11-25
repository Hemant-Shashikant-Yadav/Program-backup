#include <stdio.h>

int main()
{

    char p[50];
    int wordCount(char[]);

    printf("Enter string = ");
    gets(p);

    printf("Words in string = %d", wordCount(p));

    return 0;
}
int wordCount(char a[])
{
    int count = 1, i = 0;

    while (a[i] != '\0')
    {
        if (a[i] == 32)
        {
            count++;
        }
        i++;
    }
    return count;
}