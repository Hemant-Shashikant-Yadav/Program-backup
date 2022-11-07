#include <stdio.h>

int main()
{

    int x[5], i, sv, l, r, mid;

    printf("Enter array data in ascending order = \n");
    while (i < 5)
    {
        printf("Enter data =");
        scanf("%d", &x[i]);

        if (i > 0)
        {
            if (x[i] < x[i - 1])
            {
                printf("Invalid input !!!");
                continue;
            }
        }
        i++;
    }
    printf("Enter search value = ");
    scanf("%d", &sv);

    l = 0, r = 0;

    do
    {
        mid = (l + r) / 2;
        if (sv == x[mid])
        {
            break;
        }
        if (sv < x[mid])
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }

    } while (l <= r);

    if (l<=r)
    {
        printf("Found");    
    }
    else
    {
        printf("Not found.");
    }
    

    return 0;
}