#include <stdio.h>

int main()
{
    int res;
    int Binary();
    res = Binary();

    if (res == 0)
    {
        printf("Not Binary");
    }
    else
    {
        printf("Not Binary");
    }

    return 0;
}

int Binary()
{
    long int no;
    int dig;
    printf("Enter no = ");
    scanf("%ld", &no);

    while (no > 0)
    {
        dig = no % 10;
        if (dig > 1)
        {
            break;
        }

        no /= 10;
    }
    if (no == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}