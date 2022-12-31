#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    char p[40];
    char *q[5];
    int i = 0, n;

    while (i < 5)
    {
        printf("Enter string = ");
        gets(p);
        n = strlen(p) + 1;

        *(q + i) = (char *)malloc(n * sizeof(char));
        strcpy(q[i], p);
        i++;
    }
    printf("String = ");
    for (i = 0; i < 5; i++)
    {
        puts(q[i]);
        free(q[i]);
    }

    return 0;
}