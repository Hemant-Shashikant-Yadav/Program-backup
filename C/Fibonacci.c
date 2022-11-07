#include <stdio.h>

int main()
{

    int i = 1, a = 0, b = 1, c;

    printf("Fibonacci series = %d %d ", a, b);

    for (i = 0; i < 10; i++)
    {
        c = a + b;
        a = b;
        b = c;
        printf("%d ", c);
    }

    return 0;
}