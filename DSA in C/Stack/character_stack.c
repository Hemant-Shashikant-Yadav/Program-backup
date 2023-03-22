#include <stdio.h>
#include "CSTK.h"

int main()
{
    CSTK P;
    char a[40], b[40];
    int i = 0, j = 0;

    init(&P);
    printf("\nEnter string = ");
    gets(a);

    for (i = 0; i != '\0'; i++)
    {
        push(&P, a[i]);
        /* code */
    }

    while (!isEmpty(&P))
    {
        b[j++] = pop(&P);

        /* code */
    }
    b[j] = '\0';

    puts(a);
    puts(b);

    return 0;
}