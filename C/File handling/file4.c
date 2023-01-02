#include <stdio.h>

int main()
{
    FILE *filePtr = NULL;
    filePtr = fopen("file4.txt", "r");

    char c = fgetc(filePtr);
    printf("%c\n", c);
    char s[100];
    fgets(s, 100, filePtr);
    printf("%s\n", s);

    return 0;
}