#include <stdio.h>

int main()
{

    void wordCount();
    wordCount();

    return 0;
}
void wordCount()
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
    printf("Word count = %d", cnt);
}