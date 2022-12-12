#include <stdio.h>

int main()
{

    int x = 10;
    int *p;
    int **q;
    p = &x;
    q=&p;

    printf("\n%d", x);
    printf("\n%u", &x);
    printf("\n%d", *(% x));
    printf("\n%u", p);
    printf("\n%u", &p);
    printf("\n%u", *(&p));
    printf("\n%d", *(*(&p)));
    printf("\n%d", *p);
    printf("\n%u", q);
    printf("\n%u", &q);
    printf("\n%d", *(*(*(&p))));
    printf("\n%d", **q);

    return 0;
}