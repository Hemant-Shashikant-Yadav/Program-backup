#include <stdio.h>
#include <string.h>

int main()
{

    char a[50];

    printf("Enter string");
    gets(a);

    printf("Lenght of string is = %d", strlen(a));

    return 0;
}