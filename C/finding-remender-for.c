#include <stdio.h>
/*Finding reminder*/
int main(int argc, char const *argv[])
{
    int i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        int a, b, r;
        scanf("%d %d", &a, &b);
        r = a % b;
        printf("%d\n", r);
    }

    return 0;
}
