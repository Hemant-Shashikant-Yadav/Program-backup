#include <stdio.h>

int main()
{

    char x = 'A';
    char *p;
    p = &x;

    printf("\n%c", x);
    printf("\n%u", &x);
    printf("\n%c", *(% x));
    printf("\n%u", p);
    printf("\n%u", &p);
    printf("\n%u", *(&p));
    printf("\n%c", *(*(&p)));
    printf("\n%c", *p);

    return 0;
}