#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int a, ans = 1;
        scanf("%d", &a);

        for (int i = a; i > 0; i--)
        {
            ans = ans * i;
        }

        printf("%d\n", ans);
    }

    return 0;
}
