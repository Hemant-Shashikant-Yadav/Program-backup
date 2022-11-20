#include <stdio.h>

int main()
{

    int wordCount();
   int res= wordCount();
    printf("Word count = %d", res);

    return 0;
}
int wordCount()
{
    char a[40];
    int i, cnt = 1;

    printf("Enter string = ");
    gets(a);

    for (i = 0; a[i] != '\0'; i++)
    {
        if (a[i] == 32)
        {
            cnt++;
        }
    }
    return cnt;
}