#include <stdio.h>

int main()
{
    int res;
    int Prime();
    res = Prime();

    if (res == 0)
    {
        printf("Not Prime");
    }
    else
    {
        printf("Not prime");
    }

    return 0;
}

int Prime()
{
    int no, i;
    printf("Enter no = ");
    scanf("%d", &no);

    for (i = 2; i < no; i++)
    {
        if (no % i == 0)
        {
            break;
        }
    }
    if (i == no)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}