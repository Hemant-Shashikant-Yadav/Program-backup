#include <stdio.h>

int main(int argc, char const *argv[])
{

    int t, a, b;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }

    return 0;
}
