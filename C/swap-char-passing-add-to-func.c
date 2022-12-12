
#include <stdio.h>
#include <string.h>
char swap(char *a, char *b);
int main()
{

    char p[50];

    printf("Enter the string = ");
    gets(p);

    puts(p);
    for (int i = 0, j = strlen(p) - 1; i < j; i++, j--)
    {
        swap(&p[i], &p[j]);
    }

    return 0;
}
void swap(char *a, char *b)
{
    char temp = *a;
    *a = *b;
    *b = temp;
}