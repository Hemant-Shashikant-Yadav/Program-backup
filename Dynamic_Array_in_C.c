#include <stdio.h>

int main()
{

    int t, x;
    scanf("%d", &x);
    scanf("%d", &t);
    int *ptr = (int)malloc(x * sizeof(int));

    while (t--)
    {
        int type;
        scanf("%d", &type);

        if (type == 1)
        {
            int shelf, i = 0;
            scanf("%d", &shelf);
            int page;
            scanf("%d", &page);

            *(*(ptr + shelf) + i) = page;
            i++;
        }
    }

    return 0;
}