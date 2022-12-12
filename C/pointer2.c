#include <stdio.h>

int main()
{

    int x = 10;
    int *p;
    p = &x;

    printf("\n%d", x);
    printf("\n%u", &x);
    printf("\n%d", *(% x));
    printf("\n%u", p);
    printf("\n%u", &p);
    printf("\n%u", *(&p));
    printf("\n%d", *(*(&p)));
    printf("\n%d", *p);

    return 0;
}